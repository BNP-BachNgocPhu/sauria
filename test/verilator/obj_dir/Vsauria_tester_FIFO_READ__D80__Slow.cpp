// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_FIFO_READ__D80.h"
#include "Vsauria_tester__Syms.h"

void Vsauria_tester_FIFO_READ__D80___ctor_var_reset(Vsauria_tester_FIFO_READ__D80* vlSelf);

Vsauria_tester_FIFO_READ__D80::Vsauria_tester_FIFO_READ__D80(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_FIFO_READ__D80___ctor_var_reset(this);
}

void Vsauria_tester_FIFO_READ__D80::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_FIFO_READ__D80::~Vsauria_tester_FIFO_READ__D80() {
}

// Savable
void Vsauria_tester_FIFO_READ__D80::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x92d47768f43d92c0ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<empty;
    os<<read;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os<<data[__Vi0];
    }
}
void Vsauria_tester_FIFO_READ__D80::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x92d47768f43d92c0ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>empty;
    os>>read;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os>>data[__Vi0];
    }
}
