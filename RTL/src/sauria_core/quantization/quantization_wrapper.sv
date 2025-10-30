/**
 * Quantization Wrapper - SRAM Interface Adapter (Updated for Tmoby)
 * 
 * Simple wrapper connecting quantization module to SRAM interface.
 * Passes through control signals with quantized data output.
 */
module quantization_wrapper #(
    parameter int SRAMC_W = 1024,    // SRAM data width (Tmoby: 1024-bit)
    parameter int ADRC_W = 12,       // SRAM address width (Tmoby: 12-bit)
    parameter int SRAMC_N = 32       // SRAM mask elements (Tmoby: 32 elements)
)(
    // Clock and reset
    input  logic                   i_clk,
    input  logic                   i_rstn,

    // Input interface (from Accelerator)
    input  logic [SRAMC_W-1:0]     i_sramc_wdata_q,    // Input data
    input  logic [ADRC_W-1:0]      i_sramc_addr_q,     // Address
    input  logic                   i_sramc_wren_q,     // Write enable
    input  logic [0:SRAMC_N-1]     i_sramc_wmask_q,    // Write mask
    input  logic                   i_sramc_rden_q,     // Read enable

    // Output interface (to SRAM)
    output logic [SRAMC_W-1:0]     o_sramc_wdata_q,    // Quantized data
    output logic [ADRC_W-1:0]      o_sramc_addr_q,     // Address (delayed)
    output logic                   o_sramc_wren_q,     // Write enable (delayed)
    output logic [0:SRAMC_N-1]     o_sramc_wmask_q,    // Write mask (delayed)
    output logic                   o_sramc_rden_q      // Read enable (delayed)
);

    //=========================================================================
    // QUANTIZATION CORE INSTANTIATION
    // Processes input data through 6-clock quantization pipeline while
    // maintaining timing synchronization for control signals
    //=========================================================================
    
    quantization #(
        .SRAMC_W    (SRAMC_W),
        .ADRC_W     (ADRC_W),
        .SRAMC_N    (SRAMC_N)
    ) quant_core (
        .i_clk             (i_clk),
        .i_rstn            (i_rstn),

        // Input interface
        .i_sramc_wdata_q   (i_sramc_wdata_q),   // Raw input data
        .i_sramc_addr_q    (i_sramc_addr_q),    // Control signals
        .i_sramc_wren_q    (i_sramc_wren_q),
        .i_sramc_wmask_q   (i_sramc_wmask_q),
        .i_sramc_rden_q    (i_sramc_rden_q),    

        // Output interface  
        .o_sramc_wdata_q   (o_sramc_wdata_q),   // Quantized data 
        .o_sramc_addr_q    (o_sramc_addr_q),    // Control signals 
        .o_sramc_wren_q    (o_sramc_wren_q),
        .o_sramc_wmask_q   (o_sramc_wmask_q),
        .o_sramc_rden_q    (o_sramc_rden_q)     
    );

endmodule