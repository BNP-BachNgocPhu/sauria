// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_sa_processing_element__pi48.h"

VL_ATTR_COLD void Vsauria_tester_sa_processing_element__pi48___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__0(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__0\n"); );
    // Init
    CData/*0:0*/ genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0;
    CData/*31:0*/ __Vtemp_h0f4e0777__0;
    CData/*31:0*/ __Vtemp_h0cc0e81b__0;
    // Body
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0xc00U | (0xf800007fU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U]));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = (0x8fffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes);
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
    vlSelf->__PVT__mul_mux_sel = ((IData)(vlSelf->__PVT__zero_det_q1) 
                                  & (IData)(vlSelf->__PVT__cswitch_q_ext));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands 
        = (((QData)((IData)(((((IData)(vlSelf->__PVT__cswitch_q_ext)
                                ? (IData)(vlSelf->__PVT__mac_sc_q)
                                : (IData)(vlSelf->__PVT__mac_q)) 
                              << 0x10U) | (IData)(vlSelf->__PVT__b_zd_q)))) 
            << 0x10U) | (QData)((IData)(vlSelf->__PVT__a_zd_q)));
    vlSelf->__Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux 
        = ((IData)(vlSelf->__PVT__mul_mux_sel) ? 0x73U
            : (0x7fU & VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_ff_q))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
        = (0xffffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal 
        = ((0U != (0x1fU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value) 
                            >> 0xaU))) & (0x1fU != 
                                          (0x1fU & 
                                           ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value) 
                                            >> 0xaU))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero 
        = (IData)((0U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value))) 
                   & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf 
        = (IData)((0x7c00U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan) 
           & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value) 
                 >> 9U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan) 
           & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling)));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffff0fU & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal) 
               << 7U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal) 
                          << 6U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero) 
                                     << 5U) | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf) 
                                               << 4U)))));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffff0U & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (1U | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan) 
                     << 3U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling) 
                                << 2U) | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet) 
                                          << 1U)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
        = (0xffffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands 
                              >> 0x10U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal 
        = ((0U != (0x1fU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value) 
                            >> 0xaU))) & (0x1fU != 
                                          (0x1fU & 
                                           ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value) 
                                            >> 0xaU))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero 
        = (IData)((0U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value))) 
                   & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf 
        = (IData)((0x7c00U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan) 
           & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value) 
                 >> 9U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan) 
           & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling)));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xff0fffU & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal) 
               << 0xfU) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal) 
                            << 0xeU) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf) 
                                         << 0xcU)))));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfff0ffU & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (0x100U | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan) 
                         << 0xbU) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling) 
                                      << 0xaU) | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet) 
                                                  << 9U)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
        = (0xffffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands 
                              >> 0x20U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal 
        = ((0U != (0x1fU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value) 
                            >> 0xaU))) & (0x1fU != 
                                          (0x1fU & 
                                           ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value) 
                                            >> 0xaU))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero 
        = (IData)((0U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value))) 
                   & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf 
        = (IData)((0x7c00U == (0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan) 
           & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value) 
                 >> 9U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan) 
           & (~ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling)));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffffU & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal) 
               << 0x17U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal) 
                             << 0x16U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero) 
                                           << 0x15U) 
                                          | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf) 
                                             << 0x14U)))));
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xf0ffffU & vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o) 
           | (0x10000U | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan) 
                           << 0x13U) | (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling) 
                                         << 0x12U) 
                                        | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet) 
                                           << 0x11U)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c 
        = (0xffffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands 
                              >> 0x20U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c 
        = ((0x7fffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c)) 
           | (0x8000U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction 
        = (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_a_shim_q) 
            ^ (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_b_shim_q)) 
           ^ ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c) 
              >> 0xfU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c 
        = ((0x400U & (vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
                      >> 0xdU)) | (0x3ffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend 
        = (0x7fU & (VL_EXTENDS_II(7,6, (0x1fU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c) 
                                                 >> 0xaU))) 
                    + VL_EXTENDS_II(7,2, (1U & (~ (vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o 
                                                   >> 0x17U))))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference 
        = (0x7fU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend) 
                    - (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt 
        = (VL_GTES_III(32, 0xffffffe9U, VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference)))
            ? 0x25U : (VL_GTES_III(32, 0xdU, VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference)))
                        ? (0x3fU & ((IData)(0xeU) - 
                                    VL_EXTENDS_II(6,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference))))
                        : 0U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift 
        = (0x1fffffffffULL & (((0xffffffffffffULL & 
                                ((QData)((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c)) 
                                 << 0x25U)) >> (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt)) 
                              >> 0xbU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits 
        = (0x7ffU & (IData)((0xffffffffffffULL & ((0xffffffffffffULL 
                                                   & ((QData)((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c)) 
                                                      << 0x25U)) 
                                                  >> (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
        = (0x3fffffffffULL & ((VL_EXTENDS_QQ(38,37, 
                                             (0x1fffffffffULL 
                                              & ((QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__mul_mux_sel)
                                                                   ? 0U
                                                                   : 
                                                                  (0x3fffffU 
                                                                   & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__product_ff_q)))) 
                                                 << 2U))) 
                               + (0x1fffffffffULL & 
                                  ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction)
                                    ? (~ vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift)
                                    : vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift))) 
                              + VL_EXTENDS_QI(38,1, 
                                              ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits))))))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
        = (0x1fffffffffULL & (((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                               & (~ (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum 
                                             >> 0x25U))))
                               ? (- vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum)
                               : vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x18U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x17U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 1U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x16U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 2U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x15U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 3U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x14U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 4U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x13U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 5U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x12U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 6U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x11U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 7U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0x10U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 8U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xfU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 9U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xeU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xaU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xdU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xbU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xcU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xcU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xbU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xdU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 0xaU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xeU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 9U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0xfU));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 8U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x10U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 7U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x11U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 6U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x12U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 5U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x13U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 4U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x14U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 3U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x15U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 2U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x16U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                         >> 1U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x17U));
    genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0 
        = (1U & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT____Vlvbound_hf547c5af__0) 
              << 0x18U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffe007ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfffff800U & ((((4U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                ? 2U : 3U) << 0x10U) 
                             | (((1U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0U : 1U) << 0xbU))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x801fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xffe00000U & ((((0x40U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                ? 6U : 7U) << 0x1aU) 
                             | (((0x10U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 4U : 5U) << 0x15U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (((0x100U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                ? 8U : 9U) << 0x1fU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffffe00U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x7fffffffU & ((0x7ffffff0U & (((0x400U 
                                               & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0xaU
                                               : 0xbU) 
                                             << 4U)) 
                             | (((0x100U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 8U : 9U) >> 1U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfff801ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfffffe00U & ((((0x4000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | (((0x1000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0xcU : 0xdU) << 9U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xe007ffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfff80000U & ((((0x40000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x12U : 0x13U) << 0x18U) 
                             | (((0x10000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x10U : 0x11U) 
                                << 0x13U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (((0x100000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                ? 0x14U : 0x15U) << 0x1dU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffffff80U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x1fffffffU & ((0x1ffffffcU & (((0x400000U 
                                               & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x16U
                                               : 0x17U) 
                                             << 2U)) 
                             | (((0x100000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x14U : 0x15U) 
                                >> 3U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffe7fffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xcU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x10U) | ((IData)((0U != (3U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0xfU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfff9ffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x12U) | ((IData)((0U != (0x30U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x11U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffe7ffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x14U) | ((IData)((0U != (0x300U 
                                            & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x13U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xff9fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x16U) | ((IData)((0U != (0x3000U 
                                            & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x15U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfe7fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x18U) | ((IData)((0U != (0x30000U 
                                            & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x17U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xf9ffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1aU) | ((IData)((0U != (0x300000U 
                                            & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x19U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xf7ffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (0x8000000U & (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
                            << 3U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffeU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | (IData)((0U != (6U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffdU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x18U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 1U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffbU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x60U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 2U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffff7U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x180U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 3U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffefU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x600U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 4U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffdfU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 5U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffbfU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 6U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffff7fU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 7U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffeffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 8U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffdffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x180000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 9U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffbffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x600000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 0xaU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffff7ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 0xbU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffefffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 0xcU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffdfffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 0xdU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffbfffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))) 
              << 0xeU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                        ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                            << 0x1bU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                         << 0x16U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                          ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 0x11U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 0xcU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                           ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                               << 7U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                               << 2U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                            ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                << 0x1dU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                << 0x18U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                              ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                  << 0x13U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                  << 0xeU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                               ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                   << 9U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                   << 4U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp_h0f4e0777__0 = (0x1fU & ((0x2000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                      ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                          << 0x1fU) 
                                         | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                            >> 1U))
                                      : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                          << 0x1aU) 
                                         | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                            >> 6U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (((0x2000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                    << 0x1fU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                 >> 1U)) : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                               >> 6U))) 
              << 0x1eU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (__Vtemp_h0f4e0777__0 >> 2U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                         ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                             << 0x15U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                             << 0x10U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                           ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                               << 0xbU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                               << 6U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                            ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 1U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 0x1cU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                             ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                 << 0x17U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                 << 0x12U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                              ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                  << 0xdU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                  << 8U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp_h0cc0e81b__0 = (0x1fU & ((0x2000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                      ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                          << 3U) | 
                                         (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                          >> 0x1dU))
                                      : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                          << 0x1eU) 
                                         | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                            >> 2U))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (((0x2000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                    << 3U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                              >> 0x1dU)) : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                             << 0x1eU) 
                                            | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                               >> 2U))) 
              << 0x1cU));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (__Vtemp_h0cc0e81b__0 >> 4U));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                         ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                             << 0x19U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                          >> 7U)) : 
                        ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                          << 0x14U) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 0xcU))) << 1U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                          ? ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                              << 0xfU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                          >> 0x11U))
                          : ((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                              << 0xaU) | (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                          >> 0x16U))) 
                        << 6U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent 
        = (0x7fU & ((VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference))) 
                     | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                        & VL_GTES_III(32, 2U, VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference)))))
                     ? ((VL_LTES_III(32, 0U, ((IData)(1U) 
                                              + (VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux)) 
                                                 - 
                                                 VL_EXTENDS_II(32,6, 
                                                               (0x1fU 
                                                                & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
                         & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                         ? ((IData)(1U) + (VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux)) 
                                           - VL_EXTENDS_II(7,6, 
                                                           (0x1fU 
                                                            & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))
                         : 0U) : (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference)))
                                   ? (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend)
                                   : (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
        = (0x3fffffffffULL & (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum 
                              << (0x3fU & ((VL_GTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference))) 
                                            | ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction) 
                                               & VL_GTES_III(32, 2U, 
                                                             VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference)))))
                                            ? ((VL_LTES_III(32, 0U, 
                                                            ((IData)(1U) 
                                                             + 
                                                             (VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux)) 
                                                              - 
                                                              VL_EXTENDS_II(32,6, 
                                                                            (0x1fU 
                                                                             & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
                                                & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                ? ((IData)(0xdU) 
                                                   + 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                : ((IData)(0xdU) 
                                                   + 
                                                   VL_EXTENDS_II(6,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux))))
                                            : (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt)))));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent 
        = vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent;
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits 
        = (0x1ffffffU & (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa 
        = (0xfffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                             >> 0x19U)));
    if ((1U & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                       >> 0x25U)))) {
        vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent 
            = (0x7fU & ((IData)(1U) + VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent))));
        vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits 
            = (0x1ffffffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                                     >> 1U)));
        vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa 
            = (0xfffU & (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                                 >> 0x1aU)));
    } else if ((1U & (~ (IData)((vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                                 >> 0x24U))))) {
        if (VL_LTS_III(32, 1U, VL_EXTENDS_II(32,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent)))) {
            vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent 
                = (0x7fU & (VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent)) 
                            - (IData)(1U)));
            vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits 
                = (0x1ffffffU & (IData)((0x3fffffffffULL 
                                         & (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                                            << 1U))));
            vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa 
                = (0xfffU & (IData)((0x1fffULL & (vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted 
                                                  >> 0x18U))));
        } else {
            vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent = 0U;
        }
    }
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs 
        = ((0x7c00U & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent) 
                       << 0xaU)) | (0x3ffU & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa) 
                                              >> 1U)));
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits 
        = ((2U & ((IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa) 
                  << 1U)) | ((0U != vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits) 
                             | (0U != (IData)(vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits))));
}
