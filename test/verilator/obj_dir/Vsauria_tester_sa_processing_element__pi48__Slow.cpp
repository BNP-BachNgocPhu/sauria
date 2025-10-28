// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_sa_processing_element__pi48.h"

void Vsauria_tester_sa_processing_element__pi48___ctor_var_reset(Vsauria_tester_sa_processing_element__pi48* vlSelf);

Vsauria_tester_sa_processing_element__pi48::Vsauria_tester_sa_processing_element__pi48(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_sa_processing_element__pi48___ctor_var_reset(this);
}

void Vsauria_tester_sa_processing_element__pi48::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_sa_processing_element__pi48::~Vsauria_tester_sa_processing_element__pi48() {
}

// Savable
void Vsauria_tester_sa_processing_element__pi48::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xd7ebaa656585f14bULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<i_clk;
    os<<i_rstn;
    os<<__Vcellinp__genblk1__DOT__fma_i__i_rstn;
    os<<i_reg_clear;
    os<<i_cell_en;
    os<<i_cell_sc_en;
    os<<i_pipeline_en;
    os<<i_cswitch;
    os<<i_cscan_en;
    os<<i_thres;
    os<<o_cswitch;
    os<<__PVT__o_cell_en;
    os<<__PVT__cswitch_q;
    os<<__PVT__cell_en_q;
    os<<__PVT__cswitch_q_ext;
    os<<__PVT__mul_mux_sel;
    os<<__PVT__zero_det_d;
    os<<__PVT__zero_det_q0;
    os<<__PVT__zero_det_q1;
    os<<__PVT__zd_lookahead;
    os<<genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_inf;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_nan;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__signalling_nan;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_a_shim_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_b_shim_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_ff_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[__Vi0];
    }
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_exp_inputs;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_exp_inputs;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2;
    os<<genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2;
    os<<i_a;
    os<<i_b;
    os<<i_c;
    os<<o_a;
    os<<o_b;
    os<<o_c;
    os<<__PVT__a_q;
    os<<__PVT__b_q;
    os<<__PVT__mul_d;
    os<<__PVT__mul_q;
    os<<__PVT__mul_q_zd;
    os<<__PVT__mac_q;
    os<<__PVT__a_zd_q;
    os<<__PVT__b_zd_q;
    os<<__PVT__mhold_q;
    os<<__PVT__mac_sc_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__operands;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__product_ff_q;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba;
    os<<__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted;
    os<<__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum;
}
void Vsauria_tester_sa_processing_element__pi48::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xd7ebaa656585f14bULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>i_clk;
    os>>i_rstn;
    os>>__Vcellinp__genblk1__DOT__fma_i__i_rstn;
    os>>i_reg_clear;
    os>>i_cell_en;
    os>>i_cell_sc_en;
    os>>i_pipeline_en;
    os>>i_cswitch;
    os>>i_cscan_en;
    os>>i_thres;
    os>>o_cswitch;
    os>>__PVT__o_cell_en;
    os>>__PVT__cswitch_q;
    os>>__PVT__cell_en_q;
    os>>__PVT__cswitch_q_ext;
    os>>__PVT__mul_mux_sel;
    os>>__PVT__zero_det_d;
    os>>__PVT__zero_det_q0;
    os>>__PVT__zero_det_q1;
    os>>__PVT__zd_lookahead;
    os>>genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_inf;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_nan;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__signalling_nan;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_a_shim_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_b_shim_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_ff_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[__Vi0];
    }
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_exp_inputs;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_exp_inputs;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2;
    os>>genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2;
    os>>i_a;
    os>>i_b;
    os>>i_c;
    os>>o_a;
    os>>o_b;
    os>>o_c;
    os>>__PVT__a_q;
    os>>__PVT__b_q;
    os>>__PVT__mul_d;
    os>>__PVT__mul_q;
    os>>__PVT__mul_q_zd;
    os>>__PVT__mac_q;
    os>>__PVT__a_zd_q;
    os>>__PVT__b_zd_q;
    os>>__PVT__mhold_q;
    os>>__PVT__mac_sc_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__operands;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__product_ff_q;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba;
    os>>__PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted;
    os>>__PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum;
}
