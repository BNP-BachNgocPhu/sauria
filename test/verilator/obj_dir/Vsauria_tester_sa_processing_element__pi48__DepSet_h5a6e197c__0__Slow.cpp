// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_sa_processing_element__pi48.h"

VL_ATTR_COLD void Vsauria_tester_sa_processing_element__pi48___ctor_var_reset(Vsauria_tester_sa_processing_element__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_sa_processing_element__pi48___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rstn = VL_RAND_RESET_I(1);
    vlSelf->i_a = VL_RAND_RESET_I(16);
    vlSelf->i_b = VL_RAND_RESET_I(16);
    vlSelf->i_c = VL_RAND_RESET_I(16);
    vlSelf->i_reg_clear = VL_RAND_RESET_I(1);
    vlSelf->i_cell_en = VL_RAND_RESET_I(1);
    vlSelf->i_cell_sc_en = VL_RAND_RESET_I(1);
    vlSelf->i_pipeline_en = VL_RAND_RESET_I(1);
    vlSelf->i_cswitch = VL_RAND_RESET_I(1);
    vlSelf->i_cscan_en = VL_RAND_RESET_I(1);
    vlSelf->i_thres = VL_RAND_RESET_I(2);
    vlSelf->o_cswitch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_cell_en = VL_RAND_RESET_I(1);
    vlSelf->o_a = VL_RAND_RESET_I(16);
    vlSelf->o_b = VL_RAND_RESET_I(16);
    vlSelf->o_c = VL_RAND_RESET_I(16);
    vlSelf->__PVT__a_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__b_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__cswitch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cell_en_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cswitch_q_ext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_d = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mul_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mul_q_zd = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mac_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__zero_det_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero_det_q0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero_det_q1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zd_lookahead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_zd_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__b_zd_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mhold_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mac_sc_q = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__operands = VL_RAND_RESET_Q(48);
    vlSelf->genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o = VL_RAND_RESET_I(24);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c = VL_RAND_RESET_I(16);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__signalling_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_a_shim_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_b_shim_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_ff_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c = VL_RAND_RESET_I(11);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__product_ff_q = VL_RAND_RESET_I(22);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift = VL_RAND_RESET_Q(37);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits = VL_RAND_RESET_I(11);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum = VL_RAND_RESET_Q(37);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted = VL_RAND_RESET_Q(38);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa = VL_RAND_RESET_I(12);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits = VL_RAND_RESET_I(25);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs = VL_RAND_RESET_I(15);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value = VL_RAND_RESET_I(16);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value = VL_RAND_RESET_I(16);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value = VL_RAND_RESET_I(16);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum = VL_RAND_RESET_Q(38);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(25);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p = VL_RAND_RESET_I(15);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n = VL_RAND_RESET_I(15);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p = VL_RAND_RESET_I(15);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n = VL_RAND_RESET_I(15);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_exp_inputs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_exp_inputs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb = VL_RAND_RESET_I(32);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2 = VL_RAND_RESET_I(1);
    vlSelf->genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2 = VL_RAND_RESET_I(1);
}
