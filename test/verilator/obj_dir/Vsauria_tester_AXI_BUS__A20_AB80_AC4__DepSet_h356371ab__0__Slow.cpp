// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_AXI_BUS__A20_AB80_AC4.h"

VL_ATTR_COLD void Vsauria_tester_AXI_BUS__A20_AB80_AC4___ctor_var_reset(Vsauria_tester_AXI_BUS__A20_AB80_AC4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_AXI_BUS__A20_AB80_AC4___ctor_var_reset\n"); );
    // Body
    vlSelf->aw_region = VL_RAND_RESET_I(4);
    vlSelf->aw_atop = VL_RAND_RESET_I(6);
    vlSelf->aw_user = VL_RAND_RESET_I(2);
    vlSelf->w_user = VL_RAND_RESET_I(2);
    vlSelf->ar_region = VL_RAND_RESET_I(4);
    vlSelf->ar_user = VL_RAND_RESET_I(2);
}
