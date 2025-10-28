`timescale 1ns/1ps

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
    //parameter logic [63:0] M_Q32_32 = 64'sd1825361,
    //parameter logic [15:0] Z_DEF = 16'sd0
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