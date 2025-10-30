// ================================
// File: quantization.sv  
// ================================
`timescale 1ns/1ps

/**
 * Quantization Module - 4-Lane Parallel with AMD Logic
 * 
 * Features:
 * - 4-lane parallel quantization (32-bit → 8-bit)
 * - Address adjustment (divide by 4)
 * - Data/mask positioning based on address mod 4
 * - 6-clock pipeline with synchronized control
 */

module quantization #(
    parameter int SRAMC_W = 1024,                          // SRAM data width (Tmoby: 1024-bit)
    parameter int ADRC_W = 11,                             // SRAM address width (Tmoby: 11-bit)
    parameter int SRAMC_N = 32,                            // SRAM mask elements (Tmoby: 32 elements)
    parameter logic [63:0] M_Q32_32 = 64'sd256,           // Scale factor
    parameter logic [15:0] Z_DEF    = 16'sd128             // Zero point
    //parameter logic [63:0] M_Q32_32 = 64'sd1825361,
    //parameter logic [15:0] Z_DEF = 16'sd0
)(
    // Clock and reset
    input  logic               i_clk,
    input  logic               i_rstn,

    // Input interface
    input  logic [SRAMC_W-1:0] i_sramc_wdata_q,           // Input data (4×32-bit)
    input  logic [ADRC_W-1:0]  i_sramc_addr_q,            // Input address
    input  logic               i_sramc_wren_q,            // Write enable
    input  logic [0:SRAMC_N-1] i_sramc_wmask_q,           // Write mask
    input  logic               i_sramc_rden_q,            // Read enable

    // Output interface (6-clock delayed)
    output logic [SRAMC_W-1:0] o_sramc_wdata_q,           // Quantized data
    output logic [ADRC_W-1:0]  o_sramc_addr_q,            // Adjusted address
    output logic               o_sramc_wren_q,            // Write enable
    output logic [0:SRAMC_N-1] o_sramc_wmask_q,           // Adjusted mask
    output logic               o_sramc_rden_q             // Read enable
);
    //=========================================================================
    // 4-LANE PARALLEL QUANTIZATION
    //=========================================================================

    // Split 128-bit input into 4×32-bit lanes
    wire signed [31:0] in0 = i_sramc_wdata_q[31:0];
    wire signed [31:0] in1 = i_sramc_wdata_q[63:32];
    wire signed [31:0] in2 = i_sramc_wdata_q[95:64];
    wire signed [31:0] in3 = i_sramc_wdata_q[127:96];

    // Quantize 4 lanes in parallel
    wire [7:0] q0,q1,q2,q3;

    quantization_core #(.M_Q32_32(M_Q32_32), .Z_DEF(Z_DEF)) u0 (.clk(i_clk), .rstn(i_rstn), .in_i(in0), .q_o(q0));
    quantization_core #(.M_Q32_32(M_Q32_32), .Z_DEF(Z_DEF)) u1 (.clk(i_clk), .rstn(i_rstn), .in_i(in1), .q_o(q1));
    quantization_core #(.M_Q32_32(M_Q32_32), .Z_DEF(Z_DEF)) u2 (.clk(i_clk), .rstn(i_rstn), .in_i(in2), .q_o(q2));
    quantization_core #(.M_Q32_32(M_Q32_32), .Z_DEF(Z_DEF)) u3 (.clk(i_clk), .rstn(i_rstn), .in_i(in3), .q_o(q3));

    // Combine quantized outputs (replicated pattern)
    logic [SRAMC_W-1:0] combined_output;
    always_comb begin
        combined_output = {q3, q2, q1, q0, q3, q2, q1, q0, q3, q2, q1, q0, q3, q2, q1, q0};
    end

    //=========================================================================
    // CONTROL SIGNAL DELAY LINE (6-Clock Synchronization)
    //=========================================================================
    
    // Delay control signals to match quantization pipeline latency
    logic [ADRC_W-1:0] addr_delay [0:5];
    logic [0:SRAMC_N-1] mask_delay [0:5];
    logic wren_delay [0:5];
    logic rden_delay [0:5];   
     
     always_ff @(posedge i_clk or negedge i_rstn) begin
         if (!i_rstn) begin
             for (int i = 0; i < 6; i++) begin
                 addr_delay[i] <= '0;
                 mask_delay[i] <= '0;
                 wren_delay[i] <= 1'b0;
                rden_delay[i] <= 1'b0; 
             end
         end else begin
             // 6-stage shift register
             addr_delay[0] <= i_sramc_addr_q;
             mask_delay[0] <= i_sramc_wmask_q;
             wren_delay[0] <= i_sramc_wren_q;
            rden_delay[0] <= i_sramc_rden_q; 
             
             for (int i = 1; i < 6; i++) begin
                 addr_delay[i] <= addr_delay[i-1];
                 mask_delay[i] <= mask_delay[i-1];
                 wren_delay[i] <= wren_delay[i-1];
                 rden_delay[i] <= rden_delay[i-1];
             end
         end
     end
     
     // Extract delayed signals
     logic [ADRC_W-1:0]  delayed_addr = addr_delay[5];
     logic [0:SRAMC_N-1] delayed_mask = mask_delay[5];
     logic               delayed_wren = wren_delay[5];
     logic               delayed_rden = rden_delay[5];
    //=========================================================================
    // AMD LOGIC (Address-Mask-Data Adjustment)
    //=========================================================================
    
    logic [ADRC_W-1:0]  addr_temp;
    logic [1:0]         addr_mod4;
    logic [0:SRAMC_N-1] mask_new;
    
    always_comb begin
        // Address adjustment: divide by 4
        addr_temp = delayed_addr >> 2;
        addr_mod4 = delayed_addr[1:0];  // Address mod 4
        
        // Mask adjustment based on address mod 4
        if (delayed_mask == 8'hFF) begin
            case (addr_mod4)
                2'b00: mask_new = 8'b00000011;  // 0x03 - Lower 2 bytes
                2'b01: mask_new = 8'b00001100;  // 0x0C - Next 2 bytes
                2'b10: mask_new = 8'b00110000;  // 0x30 - Next 2 bytes
                2'b11: mask_new = 8'b11000000;  // 0xC0 - Upper 2 bytes
                default: mask_new = 8'b00000000;
            endcase
        end else begin
            mask_new = delayed_mask;  // Pass through
        end
    end

    // Output assignments
    assign o_sramc_addr_q  = addr_temp;
    assign o_sramc_wren_q  = delayed_wren;
    assign o_sramc_wmask_q = mask_new;
    assign o_sramc_wdata_q = combined_output;
    assign o_sramc_rden_q  = delayed_rden;
endmodule
