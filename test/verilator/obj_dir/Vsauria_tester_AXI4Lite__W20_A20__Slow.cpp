// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_AXI4Lite__W20_A20.h"
#include "Vsauria_tester__Syms.h"

void Vsauria_tester_AXI4Lite__W20_A20___ctor_var_reset(Vsauria_tester_AXI4Lite__W20_A20* vlSelf);

Vsauria_tester_AXI4Lite__W20_A20::Vsauria_tester_AXI4Lite__W20_A20(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_AXI4Lite__W20_A20___ctor_var_reset(this);
}

void Vsauria_tester_AXI4Lite__W20_A20::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_AXI4Lite__W20_A20::~Vsauria_tester_AXI4Lite__W20_A20() {
}

// Savable
void Vsauria_tester_AXI4Lite__W20_A20::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x951c536b874f7743ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<wdata;
}
void Vsauria_tester_AXI4Lite__W20_A20::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x951c536b874f7743ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>wdata;
}
