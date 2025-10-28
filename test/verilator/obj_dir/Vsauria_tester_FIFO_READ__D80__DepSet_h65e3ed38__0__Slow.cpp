// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_FIFO_READ__D80.h"

VL_ATTR_COLD void Vsauria_tester_FIFO_READ__D80___ctor_var_reset(Vsauria_tester_FIFO_READ__D80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_FIFO_READ__D80___ctor_var_reset\n"); );
    // Body
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->read = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->data);
}
