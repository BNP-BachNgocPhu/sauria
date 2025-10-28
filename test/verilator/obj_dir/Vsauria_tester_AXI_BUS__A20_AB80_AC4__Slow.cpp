// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_AXI_BUS__A20_AB80_AC4.h"
#include "Vsauria_tester__Syms.h"

void Vsauria_tester_AXI_BUS__A20_AB80_AC4___ctor_var_reset(Vsauria_tester_AXI_BUS__A20_AB80_AC4* vlSelf);

Vsauria_tester_AXI_BUS__A20_AB80_AC4::Vsauria_tester_AXI_BUS__A20_AB80_AC4(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_AXI_BUS__A20_AB80_AC4___ctor_var_reset(this);
}

void Vsauria_tester_AXI_BUS__A20_AB80_AC4::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_AXI_BUS__A20_AB80_AC4::~Vsauria_tester_AXI_BUS__A20_AB80_AC4() {
}

// Savable
void Vsauria_tester_AXI_BUS__A20_AB80_AC4::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x5f3e023f32f84f4eULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<aw_region;
    os<<aw_atop;
    os<<aw_user;
    os<<w_user;
    os<<ar_region;
    os<<ar_user;
}
void Vsauria_tester_AXI_BUS__A20_AB80_AC4::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x5f3e023f32f84f4eULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>aw_region;
    os>>aw_atop;
    os>>aw_user;
    os>>w_user;
    os>>ar_region;
    os>>ar_user;
}
