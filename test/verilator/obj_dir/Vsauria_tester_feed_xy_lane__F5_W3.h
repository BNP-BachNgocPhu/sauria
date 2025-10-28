// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_FEED_XY_LANE__F5_W3_H_
#define VERILATED_VSAURIA_TESTER_FEED_XY_LANE__F5_W3_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_feed_xy_lane__F5_W3) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rstn,0,0);
        VL_IN8(i_feeder_en,0,0);
        VL_IN8(i_update,0,0);
        VL_IN8(i_clearbuff,0,0);
        VL_IN8(i_valid_data,0,0);
        VL_IN8(i_x_ov_flag,0,0);
        VL_IN8(i_glob_woffs,2,0);
        VL_IN8(i_loc_woffs,7,0);
        VL_IN8(i_finalpush,0,0);
        VL_IN8(i_clearfifo,0,0);
        VL_IN8(i_pipeline_en,0,0);
        VL_IN8(i_pop_en,0,0);
        VL_OUT8(o_stall,0,0);
        VL_OUT8(o_fifo_empty,0,0);
        VL_OUT8(o_fifo_full,0,0);
        CData/*0:0*/ __PVT__fifo_pop;
        CData/*0:0*/ __PVT__fifo_empty_q1;
        CData/*0:0*/ __PVT__fifo_empty_q2;
        CData/*0:0*/ __PVT__pop_en_q;
        CData/*0:0*/ __PVT__fifo_full_shim;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__pipeline_regs_en;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__valid_data_q1;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__woffs_init_q;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__shift_idx_cnt_q;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__last_rd;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__dil_shift_idx_sign;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__lshifted_dil_pat;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__rshifted_dil_pat;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__shifted_dil_pat_q;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__final_dil_pat;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__read_ptr_d;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__read_ptr_q;
        CData/*3:0*/ __PVT__feed_data_manager_i__DOT__elm_number;
        CData/*1:0*/ __PVT__feed_data_manager_i__DOT__elm_number_sat;
        IData/*31:0*/ __PVT__feed_data_manager_i__DOT__par_sums;
        IData/*31:0*/ __PVT__feed_data_manager_i__DOT__elm_idx_array;
        CData/*3:0*/ __PVT__feed_data_manager_i__DOT__regs_used_idx;
        CData/*4:0*/ __PVT__feed_data_manager_i__DOT__new_active_idx;
        CData/*2:0*/ __PVT__feed_data_manager_i__DOT__regs_active_new;
        CData/*2:0*/ __PVT__feed_data_manager_i__DOT__regs_active_d;
        CData/*2:0*/ __PVT__feed_data_manager_i__DOT__regs_active_q;
        CData/*2:0*/ __PVT__feed_data_manager_i__DOT__regs_en_d;
        CData/*1:0*/ __PVT__feed_data_manager_i__DOT__n_free_regs;
        IData/*31:0*/ __PVT__feed_data_manager_i__DOT__target_array;
        SData/*11:0*/ __PVT__feed_data_manager_i__DOT__mux_control_array;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__fifo_push;
        CData/*2:0*/ __PVT__fifo_i__DOT__ptr_d;
        CData/*2:0*/ __PVT__fifo_i__DOT__ptr_q;
        CData/*1:0*/ __PVT__fifo_i__DOT__out_woffs;
        CData/*0:0*/ __PVT__fifo_i__DOT__down_flag;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_public;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_start_d;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_start_q;
        CData/*4:0*/ __PVT__fifo_i__DOT__reg_en;
        CData/*4:0*/ __PVT__fifo_i__DOT__mux_sel;
        VL_OUT16(o_data,15,0);
        VlWide<4>/*127:0*/ __PVT__feed_data_manager_i__DOT__sram_elements;
        SData/*8:0*/ __PVT__feed_data_manager_i__DOT__dil_shift_idx;
        SData/*8:0*/ __PVT__feed_data_manager_i__DOT__dil_shift_idx_inv;
        QData/*47:0*/ __PVT__feed_data_manager_i__DOT__regs_d;
    };
    struct {
        QData/*47:0*/ __PVT__feed_data_manager_i__DOT__regs_q;
        QData/*47:0*/ __PVT__fifo_i__DOT__data_pop_q;
        SData/*15:0*/ __PVT__fifo_i__DOT__data_pop_mux;
        SData/*15:0*/ __PVT__fifo_i__DOT__outbuf_d;
        SData/*15:0*/ __PVT__fifo_i__DOT__outbuf_q;
        VL_INW(i_sram_data,127,0,4);
        VL_IN64(i_Dil_pat,63,0);
        VlWide<8>/*239:0*/ __PVT__fifo_i__DOT__data_q;
        VlWide<8>/*239:0*/ __PVT__fifo_i__DOT__data_mux;
        QData/*47:0*/ fifo_i__DOT____Vlvbound_h6ac077c1__0;
        QData/*47:0*/ fifo_i__DOT____Vlvbound_h6ac077c1__2;
        QData/*47:0*/ fifo_i__DOT____Vlvbound_h6ac077c1__3;
    };

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_feed_xy_lane__F5_W3(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_feed_xy_lane__F5_W3();
    VL_UNCOPYABLE(Vsauria_tester_feed_xy_lane__F5_W3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
