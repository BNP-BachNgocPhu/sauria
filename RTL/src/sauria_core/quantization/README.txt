================================================================================
                        QUANTIZATION MODULES - DOCUMENTATION
================================================================================

Thư mục: RTL/src/sauria_core/quantization/
Tác giả: BNP-BachNgocPhu
Mục đích: Triển khai quantization 32-bit → 8-bit cho neural network inference

================================================================================
                            TỔNG QUAN HỆ THỐNG
================================================================================

Quantization subsystem được thiết kế để chuyển đổi dữ liệu 32-bit signed 
thành 8-bit unsigned trong quá trình inference của neural network, giúp:
- Giảm băng thông memory
- Tăng tốc độ xử lý 
- Tiết kiệm năng lượng

Hệ thống bao gồm 3 module chính với kiến trúc pipeline 6-clock:

    [Accelerator] → [quantization_wrapper] → [quantization] → [SRAM]
                                                    ↓
                                            [quantization_core × 4]

================================================================================
                            CÁC MODULE CHI TIẾT
================================================================================

1. quantization_core.sv
   ────────────────────────────────────────────────────────────────────────
   VỊ TRÍ: Core computation engine (level thấp nhất)
   VAI TRÒ: 
   • Thực hiện quantization cho 1 lane 32-bit → 8-bit
   • Pipeline 6-clock với 3 stage:
     - Stage 1 (Clock 1-2): Multiplication & Bias
     - Stage 2 (Clock 3-4): Shift & Zero Point  
     - Stage 3 (Clock 5-6): Saturation & Output
   • Sử dụng scale factor (M_Q32_32) và zero point (Z_DEF)
   
   THUẬT TOÁN:
   output = saturate(((input × scale_factor) >> 32) + zero_point, 0, 255)
   
   PARAMETERS:
   • M_Q32_32 = 64'sd256    : Scale factor (default)
   • Z_DEF = 16'sd128       : Zero point (default)

2. quantization.sv  
   ────────────────────────────────────────────────────────────────────────
   VỊ TRÍ: Top-level quantization module
   VAI TRÒ:
   • Orchestrate 4-lane parallel quantization
   • 128-bit input → 4×32-bit lanes → 4×8-bit → 128-bit packed output
   • Address Management & Data (AMD) logic:
     - Address adjustment: addr_out = addr_in >> 2
     - Mask repositioning based on addr_in % 4
     - Data packing với pattern replication
   • 6-clock control signal synchronization
   
   MEMORY LAYOUT TRANSFORMATION:
   Input:  [127:96][95:64][63:32][31:0]  (4×32-bit words)
           Address: 0x100, 0x104, 0x108, 0x10C
   
   Output: [q3][q2][q1][q0] repeated 4 times (16×8-bit)
           Address: 0x40 (= 0x100>>2)
           Mask: Positioned theo addr%4

3. quantization_wrapper.sv
   ────────────────────────────────────────────────────────────────────────
   VỊ TRÍ: Interface adapter (level cao nhất)
   VAI TRÒ:
   • Cung cấp clean interface cho integration
   • Pass-through wrapper cho quantization module
   • Tách biệt implementation details khỏi top-level design
   • Dễ dàng swap/modify quantization logic

================================================================================
                        INTEGRATION VÀO SAURIA CORE
================================================================================

Quantization modules được tích hợp vào data path như sau:

sauria_core.sv:
├── Processing Units
├── Memory Controller  
├── quantization_wrapper ← **MODULE MỚI**
│   └── quantization
│       └── quantization_core[0:3]
└── SRAM Interface

SIGNAL FLOW:
1. Accelerator outputs → quantization_wrapper input
2. 128-bit data split → 4 parallel quantization_core
3. 6-clock pipeline processing
4. AMD logic adjusts address/mask/data
5. Quantized output → SRAM controller

================================================================================
                            THAM SỐ HIỆU NĂNG
================================================================================

• THROUGHPUT: 4×32-bit values per clock (sau pipeline fill)
• LATENCY: 6 clock cycles
• AREA: 4× quantization_core + control logic
• FREQUENCY: Phụ thuộc vào clock domain của sauria_core

MEMORY BANDWIDTH REDUCTION:
• Input: 128-bit per access  
• Output: 32-bit effective (4×8-bit packed)
• Compression ratio: 4:1

================================================================================
                        TESTING VÀ VERIFICATION
================================================================================

Test cases nên cover:
1. Functional correctness của quantization algorithm
2. Pipeline timing và throughput
3. Address/mask transformation logic  
4. Boundary conditions (overflow, underflow)
5. Integration với existing sauria_core datapath

SIMULATION:
• Testbench: tb_sauria_subsystem.sv (existing)
• Stimuli: Python scripts trong Python/helpers/
• Verification: Compare với golden model

================================================================================
                            FUTURE ENHANCEMENTS
================================================================================

1. Configurable quantization parameters per layer
2. Dynamic range adjustment
3. Support cho symmetric/asymmetric quantization
4. Batch normalization fusion
5. Multi-precision support (4-bit, 16-bit)

================================================================================
                                NOTES
================================================================================

• Module được thiết kế tương thích với existing SRAM interface
• Sử dụng SystemVerilog synthesizable constructs
• Pipeline design cho high-frequency operation
• Modular architecture cho easy modification/extension

Liên hệ: BNP-BachNgocPhu
Repository: https://github.com/BNP-BachNgocPhu/sauria
================================================================================