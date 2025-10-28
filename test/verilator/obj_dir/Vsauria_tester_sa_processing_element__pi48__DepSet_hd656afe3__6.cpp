// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_sa_processing_element__pi48.h"

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1aU]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[2U] 
                                                  >> 1U));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[2U] 
                                                   >> 1U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                                          >> 0x10U)) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U]);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[2U]);
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U]);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[2U]);
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU])) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x20U]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x18U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x18U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                            >> 0x1fU);
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                >> 0x1fU);
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU]);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x18U]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x1eU));
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU]);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x1eU));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                                          >> 0x10U)) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1fU]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x17U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x17U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x1dU));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x1dU));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU]);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x17U]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x1cU));
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU]);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x1cU));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                                          >> 0x10U)) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1eU]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x16U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x16U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x1bU));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x1bU));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU]);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x16U]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x1aU));
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU]);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x1aU));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                                          >> 0x10U)) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1dU]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x15U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x15U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x19U));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x19U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU]);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x15U]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x18U));
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU]);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x18U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                                          >> 0x10U)) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1cU]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x14U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x14U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x17U));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x17U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU]);
                vlSelf->__PVT__a_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                                         >> 0x10U);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x14U]));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x16U));
                vlSelf->__PVT__b_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU]);
                vlSelf->__PVT__a_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                                      >> 0x10U);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x16U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x13U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x14U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x15U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x16U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x17U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x18U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x19U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1aU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1bU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1cU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1dU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0x1eU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
               >> 0x1fU);
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU] 
                     >> 0xfU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                                          >> 0x10U)) 
                                  | (0U == (0xffffU 
                                            & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1bU]))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__0\n"); );
    // Body
    if ((0U != (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = 0x10U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = 0x10U;
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | (((1U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                    >> 0xdU)))) << 1U) 
              | (0U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                     >> 0xdU))))));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec 
        = ((3U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec)) 
           | ((2U < (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                                   >> 0xdU)))) << 2U));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__cell_en_q = (1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear) {
            vlSelf->__PVT__cswitch_q = 0U;
            vlSelf->__PVT__b_q = 0U;
            vlSelf->__PVT__a_q = 0U;
            vlSelf->__PVT__b_zd_q = 0U;
            vlSelf->__PVT__a_zd_q = 0U;
            vlSelf->__PVT__mac_sc_q = 0U;
            vlSelf->__PVT__mac_q = 0U;
            vlSelf->__PVT__zero_det_q1 = 0U;
            vlSelf->__PVT__cswitch_q_ext = 0U;
            vlSelf->__PVT__zero_det_q0 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & (~ (IData)(vlSelf->__PVT__zero_det_d)))) {
                vlSelf->__PVT__b_zd_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                                         >> 0x10U);
                vlSelf->__PVT__a_zd_q = (0xffffU & 
                                         vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U]);
            }
            if ((((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
                  | (IData)(vlSelf->__PVT__cswitch_q_ext)) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en))) {
                vlSelf->__PVT__mac_sc_q = (0xffffU 
                                           & ((IData)(vlSelf->__PVT__cswitch_q_ext)
                                               ? (IData)(vlSelf->__PVT__mac_q)
                                               : ((
                                                   vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x13U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x13U] 
                                                     >> 0x10U))));
            }
            if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                 & ((IData)(vlSelf->__PVT__cswitch_q_ext) 
                    | (~ (IData)(vlSelf->__PVT__zero_det_q1))))) {
                vlSelf->__PVT__mac_q = ((((~ (((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits))) 
                                              & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction))) 
                                          & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                                             >> 0x25U))) 
                                                 == (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q))) 
                                             | ((~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q)))) 
                                         << 0xfU) | 
                                        (0x7fffU & 
                                         ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs) 
                                          + (1U & (
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits) 
                                                      | (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs)))))));
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__cswitch_q = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                  >> 0x15U));
                vlSelf->__PVT__b_q = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                                      >> 0x10U);
                vlSelf->__PVT__a_q = (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U]);
                vlSelf->__PVT__zero_det_q1 = vlSelf->__PVT__zero_det_q0;
                vlSelf->__PVT__cswitch_q_ext = (1U 
                                                & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
                                                   >> 0x15U));
                vlSelf->__PVT__zero_det_q0 = vlSelf->__PVT__zero_det_d;
            }
        }
    } else {
        vlSelf->__PVT__cell_en_q = 0U;
        vlSelf->__PVT__cswitch_q = 0U;
        vlSelf->__PVT__b_q = 0U;
        vlSelf->__PVT__a_q = 0U;
        vlSelf->__PVT__b_zd_q = 0U;
        vlSelf->__PVT__a_zd_q = 0U;
        vlSelf->__PVT__mac_sc_q = 0U;
        vlSelf->__PVT__mac_q = 0U;
        vlSelf->__PVT__zero_det_q1 = 0U;
        vlSelf->__PVT__cswitch_q_ext = 0U;
        vlSelf->__PVT__zero_det_q0 = 0U;
    }
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
}

VL_INLINE_OPT void Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__3(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__3\n"); );
    // Body
    if ((0U == (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 
                              >> 0xdU))))) {
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = 0U;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = 0x7fffU;
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = 0U;
    } else {
        if ((2U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (1U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                         >> 0x11U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                         >> 0x11U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffeU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | (IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1));
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec))) {
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = (0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = (2U | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n));
        } else {
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 2U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                         >> 2U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1) 
                      << 1U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                         >> 0x12U));
            vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 
                = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                         >> 0x12U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1) 
                      << 1U));
            vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
                = ((0x7ffdU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
                   | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1) 
                      << 1U));
        }
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x13U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 2U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ffbU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 2U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x14U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 3U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7ff7U & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 3U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x15U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 4U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fefU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 4U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x16U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 5U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fdfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 5U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x17U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 6U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7fbfU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 6U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x18U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 7U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7f7fU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 7U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x19U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 8U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7effU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 8U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1aU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 9U));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7dffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 9U));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1bU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xaU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x7bffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xaU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1cU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xbU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x77ffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xbU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1dU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xcU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x6fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xcU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                     >> 0x1eU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xdU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x5fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xdU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2) 
                  << 0xeU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 
            = (1U & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
                     >> 0xfU));
        vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 
            = (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
               >> 0x1fU);
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2) 
                  << 0xeU));
        vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n 
            = ((0x3fffU & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)) 
               | ((IData)(vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2) 
                  << 0xeU));
    }
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b 
        = ((0U == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p)) 
           | (0x7fffU == (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n)));
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det 
        = ((IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a) 
           & (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b));
    vlSelf->__PVT__zero_det_d = (((0U == (0xffffU & 
                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U])) 
                                  | (0U == (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B[0x1aU] 
                                            >> 0x10U))) 
                                 | (IData)(vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det));
}
