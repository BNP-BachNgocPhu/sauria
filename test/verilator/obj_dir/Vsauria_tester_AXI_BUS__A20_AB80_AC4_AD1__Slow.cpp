// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1.h"
#include "Vsauria_tester__Syms.h"

void Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1___ctor_var_reset(Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1* vlSelf);

Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1::Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1___ctor_var_reset(this);
}

void Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1::~Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1() {
}

// Savable
void Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x4c1825fbb9a80f1fULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<b_user;
    os<<r_user;
}
void Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x4c1825fbb9a80f1fULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>b_user;
    os>>r_user;
}
