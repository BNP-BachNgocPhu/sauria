// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_AXI_LITE_MUX__PI15_H_
#define VERILATED_VSAURIA_TESTER_AXI_LITE_MUX__PI15_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_axi_lite_mux__pi15) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(test_i,0,0);
        CData/*1:0*/ __PVT__gen_mux__DOT__slv_aw_valids;
        CData/*1:0*/ __PVT__gen_mux__DOT__slv_aw_readies;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__load_aw_lock;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_push;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_pop;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_w_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_w_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__b_fifo_pop;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_b_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_b_ready;
        CData/*1:0*/ __PVT__gen_mux__DOT__slv_ar_valids;
        CData/*1:0*/ __PVT__gen_mux__DOT__slv_ar_readies;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_ar_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_ar_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__ar_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__r_fifo_push;
        CData/*0:0*/ __PVT__gen_mux__DOT__r_fifo_pop;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_r_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_r_ready;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__i_w_fifo__data_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__i_b_fifo__data_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__i_r_fifo__data_o;
        CData/*0:0*/ __Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q;
    };
    struct {
        CData/*2:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain;
        CData/*1:0*/ gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain;
        VL_INW(slv_reqs_i,221,0,7);
        VL_OUTW(slv_resps_o,81,0,3);
        VL_OUTW(mst_req_o,110,0,4);
        VL_IN64(mst_resp_i,40,0);
        VlWide<3>/*69:0*/ __PVT__gen_mux__DOT__slv_aw_chans;
        VlWide<3>/*69:0*/ __PVT__gen_mux__DOT__slv_ar_chans;
        QData/*34:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        QData/*34:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q;
    };
    struct {
        QData/*35:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        QData/*35:0*/ __PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q;
        QData/*34:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        QData/*34:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q;
        QData/*33:0*/ gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o;
        QData/*33:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        QData/*33:0*/ __PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q;
    };

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_axi_lite_mux__pi15(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_axi_lite_mux__pi15();
    VL_UNCOPYABLE(Vsauria_tester_axi_lite_mux__pi15);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
