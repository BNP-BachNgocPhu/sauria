// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1.h"

VL_ATTR_COLD void Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1___ctor_var_reset(Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1___ctor_var_reset\n"); );
    // Body
    vlSelf->b_user = VL_RAND_RESET_I(1);
    vlSelf->r_user = VL_RAND_RESET_I(1);
}
