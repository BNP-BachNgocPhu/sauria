// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_SA_PROCESSING_ELEMENT__PI48_H_
#define VERILATED_VSAURIA_TESTER_SA_PROCESSING_ELEMENT__PI48_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_sa_processing_element__pi48) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rstn,0,0);
        CData/*0:0*/ __Vcellinp__genblk1__DOT__fma_i__i_rstn;
        VL_IN8(i_reg_clear,0,0);
        VL_IN8(i_cell_en,0,0);
        VL_IN8(i_cell_sc_en,0,0);
        VL_IN8(i_pipeline_en,0,0);
        VL_IN8(i_cswitch,0,0);
        VL_IN8(i_cscan_en,0,0);
        VL_IN8(i_thres,1,0);
        VL_OUT8(o_cswitch,0,0);
        VL_OUT8(__PVT__o_cell_en,0,0);
        CData/*0:0*/ __PVT__cswitch_q;
        CData/*0:0*/ __PVT__cell_en_q;
        CData/*0:0*/ __PVT__cswitch_q_ext;
        CData/*0:0*/ __PVT__mul_mux_sel;
        CData/*0:0*/ __PVT__zero_det_d;
        CData/*0:0*/ __PVT__zero_det_q0;
        CData/*0:0*/ __PVT__zero_det_q1;
        CData/*0:0*/ __PVT__zd_lookahead;
        IData/*23:0*/ genblk1__DOT__fma_i__DOT__fma_i__DOT____Vcellout__i_class_inputs__info_o;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_inf;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__any_operand_nan;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__signalling_nan;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__effective_subtraction;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__tentative_sign_ff_q;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_a_shim_q;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sign_b_shim_q;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_addend;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_ff_q;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_product_mux;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__exponent_difference;
        CData/*5:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_shamt;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__normalized_exponent;
        CData/*6:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_exponent;
        CData/*1:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__round_sticky_bits;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero;
        CData/*0:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal;
        VlWide<5>/*159:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_a;
        CData/*0:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det_b;
        CData/*0:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__neg_det;
        CData/*2:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__thres_dec;
        CData/*3:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__a_exp_inputs;
        CData/*3:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__b_exp_inputs;
    };
    struct {
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__1;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__1;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_ha60b74c1__2;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h0aadbce4__2;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__1;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__1;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_h3b8d897c__2;
        CData/*0:0*/ genblk3__DOT__zero_det_neg_i__DOT____Vlvbound_hb4c23fe1__2;
        VL_IN16(i_a,15,0);
        VL_IN16(i_b,15,0);
        VL_IN16(i_c,15,0);
        VL_OUT16(o_a,15,0);
        VL_OUT16(o_b,15,0);
        VL_OUT16(o_c,15,0);
        SData/*15:0*/ __PVT__a_q;
        SData/*15:0*/ __PVT__b_q;
        SData/*15:0*/ __PVT__mul_d;
        SData/*15:0*/ __PVT__mul_q;
        SData/*15:0*/ __PVT__mul_q_zd;
        SData/*15:0*/ __PVT__mac_q;
        SData/*15:0*/ __PVT__a_zd_q;
        SData/*15:0*/ __PVT__b_zd_q;
        SData/*15:0*/ __PVT__mhold_q;
        SData/*15:0*/ __PVT__mac_sc_q;
        QData/*47:0*/ __PVT__genblk1__DOT__fma_i__DOT__operands;
        SData/*15:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__operand_c;
        SData/*10:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__mantissa_c;
        SData/*10:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_sticky_bits;
        SData/*11:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__final_mantissa;
        SData/*14:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__pre_round_abs;
        SData/*15:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value;
        SData/*15:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value;
        SData/*15:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value;
        SData/*14:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_p;
        SData/*14:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__a_neg_inputs_n;
        SData/*14:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_p;
        SData/*14:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__b_neg_inputs_n;
        IData/*21:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__product_ff_q;
        IData/*24:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_sticky_bits;
        IData/*31:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*24:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
        IData/*31:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk2__DOT__ba;
        IData/*31:0*/ __PVT__genblk3__DOT__zero_det_neg_i__DOT__unnamedblk3__DOT__bb;
        QData/*36:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__addend_after_shift;
        QData/*36:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum;
        QData/*37:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__sum_shifted;
        QData/*37:0*/ __PVT__genblk1__DOT__fma_i__DOT__fma_i__DOT__adder_i__DOT__genblk1__DOT__adder_i__DOT__sum;
    };

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_sa_processing_element__pi48(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_sa_processing_element__pi48();
    VL_UNCOPYABLE(Vsauria_tester_sa_processing_element__pi48);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
