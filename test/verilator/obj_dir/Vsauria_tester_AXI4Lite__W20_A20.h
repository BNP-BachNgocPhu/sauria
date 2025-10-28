// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_AXI4LITE__W20_A20_H_
#define VERILATED_VSAURIA_TESTER_AXI4LITE__W20_A20_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_AXI4Lite__W20_A20) {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ wdata;

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_AXI4Lite__W20_A20(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_AXI4Lite__W20_A20();
    VL_UNCOPYABLE(Vsauria_tester_AXI4Lite__W20_A20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
