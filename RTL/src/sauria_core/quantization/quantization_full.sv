// ================================================================================
// File: quantization_full.sv  
// ================================================================================
// Complete Quantization System - All-in-One Module
// 
// Author: BNP-BachNgocPhu
// Description: Integrated quantization system combining core, main logic, and wrapper
// 
// Features:
// - 32-lane parallel quantization (32-bit → 8-bit) for 1024-bit Tmoby data
// - 6-clock pipelined quantization cores
// - Address adjustment (divide by 4) and mask repositioning  
// - Complete SRAM interface compatibility
// - Self-contained design (no external dependencies)
// ================================================================================

`timescale 1ns/1ps

//=================================================================================
// MODULE 1: QUANTIZATION_CORE - 6-Clock Pipelined Quantizer
//=================================================================================

/**
 * Quantization Core - 6-Clock Pipelined Quantizer
 * 
 * Converts 32-bit signed integers to 8-bit unsigned quantized values
 * using configurable scale factor and zero point.
 * 
 * Pipeline: 3 stages × 2 clocks = 6 total latency
 * Throughput: 1 sample/clock after pipeline fill
 */
module quantization_core #(
    parameter logic [63:0] M_Q32_32 = 64'sd256,      // Scale factor
    parameter logic [15:0] Z_DEF    = 16'sd128       // Zero point
)(
    input  logic        clk,        // Clock
    input  logic        rstn,       // Reset (active low)
    input  logic [31:0] in_i,       // Input (32-bit signed)
    output logic [7:0]  q_o         // Output (8-bit unsigned)
);

    //=========================================================================
    // COMBINATIONAL REFERENCE - Mathematical model for verification
    //=========================================================================
    
    localparam logic signed [95:0] BIAS_MAGNITUDE = 96'sd1 << 31;
    
    logic signed [95:0] comb_product, comb_product_biased;
    logic signed [95:0] comb_shifted;
    logic signed [31:0] comb_scaled, comb_with_zeropoint;
    logic [7:0]         comb_saturated;

    always_comb begin
        // Multiply input by scale factor
        comb_product = $signed(in_i) * $signed(M_Q32_32);
        
        // Add bias for rounding (round to nearest)
        comb_product_biased = (comb_product[95] >= 1'b0) ? 
                             (comb_product + BIAS_MAGNITUDE) : 
                             (comb_product - BIAS_MAGNITUDE);
        
        // Right shift to extract integer part
        comb_shifted = comb_product_biased >>> 32;
        comb_scaled = comb_shifted[31:0];
        
        // Add zero point offset
        comb_with_zeropoint = comb_scaled + {{16{Z_DEF[15]}}, Z_DEF};
        
        // Saturate to 8-bit unsigned range [0, 255]
        if (comb_with_zeropoint < 0)
            comb_saturated = 8'd0;
        else if (comb_with_zeropoint > 32'sd255)
            comb_saturated = 8'd255;
        else
            comb_saturated = comb_with_zeropoint[7:0];
    end

    //=========================================================================
    // STAGE 1: Multiplication & Bias (Clocks 1-2)
    //=========================================================================
    
    logic signed [95:0] stage1_product_reg, stage1_biased_reg;
    logic signed [95:0] stage1_biased_wire;
    
    // Bias calculation for rounding
    always_comb begin
        stage1_biased_wire = (stage1_product_reg[95] >= 1'b0) ? 
                            (stage1_product_reg + BIAS_MAGNITUDE) : 
                            (stage1_product_reg - BIAS_MAGNITUDE);
    end
    
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            stage1_product_reg <= '0;
            stage1_biased_reg <= '0;
        end else begin
            stage1_product_reg <= comb_product;        // Clock 1: Multiplication
            stage1_biased_reg <= stage1_biased_wire;   // Clock 2: Bias addition
        end
    end

    //=========================================================================
    // STAGE 2: Shift & Zero Point (Clocks 3-4)
    //=========================================================================
    
    logic signed [31:0] stage2_scaled_reg, stage2_zpoint_reg;
    logic signed [95:0] stage2_shifted_wire;
    logic signed [31:0] stage2_scaled_wire;
    
    // Shift and scale operations
    always_comb begin
        stage2_shifted_wire = stage1_biased_reg >>> 32;
        stage2_scaled_wire = stage2_shifted_wire[31:0];
    end
    
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            stage2_scaled_reg <= '0;
            stage2_zpoint_reg <= '0;
        end else begin
            stage2_scaled_reg <= stage2_scaled_wire;                          // Clock 3: Right shift
            stage2_zpoint_reg <= stage2_scaled_reg + {{16{Z_DEF[15]}}, Z_DEF}; // Clock 4: Zero point
        end
    end

    //=========================================================================
    // STAGE 3: Saturation & Output (Clocks 5-6)
    //=========================================================================
    
    logic [7:0] stage3_saturated_reg;
    
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            stage3_saturated_reg <= 8'd0;
            q_o <= 8'd0;
        end else begin
            // Clock 5: Saturation logic
            if (stage2_zpoint_reg < 0)
                stage3_saturated_reg <= 8'd0;
            else if (stage2_zpoint_reg > 32'sd255)
                stage3_saturated_reg <= 8'd255;
            else
                stage3_saturated_reg <= stage2_zpoint_reg[7:0];
            
            // Clock 6: Final output
            q_o <= stage3_saturated_reg;
        end
    end
endmodule

//=================================================================================
// MODULE 2: QUANTIZATION - 32-Lane Parallel with AMD Logic
//=================================================================================

/**
 * Quantization Module - 32-Lane Parallel with AMD Logic (Tmoby)
 * 
 * Features:
 * - 32-lane parallel quantization (32-bit → 8-bit) for 1024-bit data
 * - Address adjustment (divide by 4)  
 * - Data/mask positioning based on address mod 4
 * - 6-clock pipeline with synchronized control
 */

module quantization #(
    parameter int SRAMC_W = 1024,                          // SRAM data width (Tmoby: 1024-bit)
    parameter int ADRC_W = 12,                             // SRAM address width (Tmoby: 12-bit)
    parameter int SRAMC_N = 32,                            // SRAM mask elements (Tmoby: 32 elements)
    parameter logic [63:0] M_Q32_32 = 64'sd256,           // Scale factor
    parameter logic [15:0] Z_DEF    = 16'sd128             // Zero point
)(
    // Clock and reset
    input  logic               i_clk,
    input  logic               i_rstn,

    // Input interface
    input  logic [SRAMC_W-1:0] i_sramc_wdata_q,           // Input data (32×32-bit for 1024-bit)
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
    // 32-LANE PARALLEL QUANTIZATION (Tmoby: 1024-bit → 32×32-bit → 32×8-bit)
    //=========================================================================

    // Split 1024-bit input into 32×32-bit lanes
    wire signed [31:0] in_lanes [0:31];
    generate
        for (genvar i = 0; i < 32; i++) begin : gen_input_lanes
            assign in_lanes[i] = i_sramc_wdata_q[(i+1)*32-1:i*32];
        end
    endgenerate

    // Quantize 32 lanes in parallel
    wire [7:0] q_lanes [0:31];
    generate
        for (genvar i = 0; i < 32; i++) begin : gen_quant_cores
            quantization_core #(.M_Q32_32(M_Q32_32), .Z_DEF(Z_DEF)) 
                quant_core_i (.clk(i_clk), .rstn(i_rstn), .in_i(in_lanes[i]), .q_o(q_lanes[i]));
        end
    endgenerate

    // Combine quantized outputs (4× replication pattern for 1024-bit)
    logic [SRAMC_W-1:0] combined_output;
    always_comb begin
        // Replicate 32×8-bit = 256-bit pattern 4 times to fill 1024-bit
        for (int i = 0; i < 4; i++) begin
            for (int j = 0; j < 32; j++) begin
                combined_output[(i*256)+(j+1)*8-1:(i*256)+j*8] = q_lanes[j];
            end
        end
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
        
        // Mask adjustment based on address mod 4 (32-bit mask support)
        if (delayed_mask == {SRAMC_N{1'b1}}) begin  // All bits set (32'hFFFFFFFF for 32-bit)
            case (addr_mod4)
                2'b00: mask_new = {{(SRAMC_N-8){1'b0}}, 8'b11111111};    // Lower 8 bits
                2'b01: mask_new = {{(SRAMC_N-16){1'b0}}, 8'b11111111, 8'b00000000};  // Next 8 bits  
                2'b10: mask_new = {{(SRAMC_N-24){1'b0}}, 8'b11111111, 16'b0000000000000000}; // Next 8 bits
                2'b11: mask_new = {8'b11111111, {(SRAMC_N-8){1'b0}}};     // Upper 8 bits
                default: mask_new = '0;
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

//=================================================================================
// END OF FILE: quantization_full.sv
// 
// USAGE:
// - Use quantization for integration into sauria_core.sv
// - quantization_core and quantization modules are self-contained in this single file
// - No external file dependencies required
// 
// HIERARCHY:
// quantization
//   └── quantization_core[0:31] (32 instances)
//=================================================================================