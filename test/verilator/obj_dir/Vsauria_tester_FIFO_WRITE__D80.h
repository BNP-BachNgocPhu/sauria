// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_FIFO_WRITE__D80_H_
#define VERILATED_VSAURIA_TESTER_FIFO_WRITE__D80_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_FIFO_WRITE__D80) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full;
    CData/*0:0*/ write;
    VlWide<4>/*127:0*/ data;

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_FIFO_WRITE__D80(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_FIFO_WRITE__D80();
    VL_UNCOPYABLE(Vsauria_tester_FIFO_WRITE__D80);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
