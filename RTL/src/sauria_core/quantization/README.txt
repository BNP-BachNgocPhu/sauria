================================================================================
                    QUANTIZATION MODULES - DOCUMENTATION
================================================================================

Thư mục: RTL/src/sauria_core/quantization/
Tác giả: BNP-BachNgocPhu
Mục đích: Quantization 32-bit → 8-bit cho neural network inference

================================================================================
                           CÁC MODULE CHính
================================================================================

1. quantization_core.sv
   • Core computation: 32-bit signed → 8-bit unsigned
   • Pipeline 6-clock, throughput 1 sample/clock
   • Algorithm: saturate(((input × scale) >> 32) + zero_point)

2. quantization.sv  
   • 4-lane parallel processing (128-bit → 4×32-bit → 4×8-bit)
   • Address adjustment: addr_out = addr_in >> 2
   • Memory layout transformation và mask repositioning

3. quantization_wrapper.sv
   • Interface adapter cho tích hợp vào sauria_core


================================================================================
                       TÍCH HỢP VÀO SAURIA_CORE
================================================================================

PHƯƠNG PHÁP: Chèn quantization_wrapper giữa PSM và SRAM

TRƯỚC KHI TÍCH HỢP:
sauria_logic (PSM) ──────────► sram_top (SRAM)

SAU KHI TÍCH HỢP:
sauria_logic (PSM) ──► quantization_wrapper ──► sram_top (SRAM)

IMPLEMENTATION TRONG sauria_core.sv:
• Tạo intermediate signals:
  - psm_sramc_* : PSM output signals  
  - quant_sramc_* : Quantized output signals
• Instantiate quantization_wrapper:
  - Input: psm_sramc_* (raw data từ PSM)
  - Output: quant_sramc_* (quantized data đến SRAM)
• Final assignment: 
  - sramc_addr = quant_sramc_addr
  - sramc_wdata = quant_sramc_wdata (quantized)
  - sramc_wren = quant_sramc_wren

================================================================================
                            TESTING & DEBUG
================================================================================

MEMORY DEBUGGING:
• File: RTL/src/sauria_core/sram/ram_inferred_for_test.sv
• Chức năng: Auto-dump memory mỗi 10 writes → memory_dump.txt
• Quan sát: Dữ liệu quantized được ghi vào memory

HIỆU NĂNG:
• Throughput: 4×32-bit/clock • Latency: 6 clocks • Compression: 4:1

================================================================================
Repository: https://github.com/BNP-BachNgocPhu/sauria
================================================================================
