// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_AXI_BUS__A20_AB80_AC4_H_
#define VERILATED_VSAURIA_TESTER_AXI_BUS__A20_AB80_AC4_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_AXI_BUS__A20_AB80_AC4) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ aw_region;
    CData/*5:0*/ aw_atop;
    CData/*1:0*/ aw_user;
    CData/*1:0*/ w_user;
    CData/*3:0*/ ar_region;
    CData/*1:0*/ ar_user;

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_AXI_BUS__A20_AB80_AC4(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_AXI_BUS__A20_AB80_AC4();
    VL_UNCOPYABLE(Vsauria_tester_AXI_BUS__A20_AB80_AC4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
