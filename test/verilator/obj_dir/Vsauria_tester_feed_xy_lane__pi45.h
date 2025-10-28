// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsauria_tester.h for the primary calling header

#ifndef VERILATED_VSAURIA_TESTER_FEED_XY_LANE__PI45_H_
#define VERILATED_VSAURIA_TESTER_FEED_XY_LANE__PI45_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsauria_tester__Syms;
VL_MODULE(Vsauria_tester_feed_xy_lane__pi45) {
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
        VL_IN8(i_glob_woffs,3,0);
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
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__read_ptr_d;
        CData/*7:0*/ __PVT__feed_data_manager_i__DOT__read_ptr_q;
        CData/*4:0*/ __PVT__feed_data_manager_i__DOT__elm_number;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__elm_number_sat;
        VlWide<3>/*79:0*/ __PVT__feed_data_manager_i__DOT__par_sums;
        VlWide<3>/*79:0*/ __PVT__feed_data_manager_i__DOT__elm_idx_array;
        CData/*5:0*/ __PVT__feed_data_manager_i__DOT__new_active_idx;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__regs_active_new;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__regs_active_d;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__regs_active_q;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__regs_en_d;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__n_free_regs;
        VlWide<3>/*79:0*/ __PVT__feed_data_manager_i__DOT__target_array;
        CData/*4:0*/ __PVT__feed_data_manager_i__DOT__mux_control_array;
        CData/*0:0*/ __PVT__feed_data_manager_i__DOT__fifo_push;
        CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_hedb1b992__1;
        CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1;
        CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2;
        CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0;
        CData/*2:0*/ __PVT__fifo_i__DOT__ptr_d;
        CData/*2:0*/ __PVT__fifo_i__DOT__ptr_q;
        CData/*1:0*/ __PVT__fifo_i__DOT__out_woffs;
        CData/*0:0*/ __PVT__fifo_i__DOT__down_flag;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_public;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_start_d;
        CData/*0:0*/ __PVT__fifo_i__DOT__empty_start_q;
        CData/*3:0*/ __PVT__fifo_i__DOT__reg_en;
        CData/*3:0*/ __PVT__fifo_i__DOT__mux_sel;
        VL_IN16(i_Dil_pat,15,0);
        VL_OUT16(o_data,15,0);
        VlWide<8>/*255:0*/ __PVT__feed_data_manager_i__DOT__sram_elements;
        SData/*8:0*/ __PVT__feed_data_manager_i__DOT__dil_shift_idx;
        SData/*8:0*/ __PVT__feed_data_manager_i__DOT__dil_shift_idx_inv;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__lshifted_dil_pat;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__rshifted_dil_pat;
    };
    struct {
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__shifted_dil_pat_q;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__final_dil_pat;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__regs_d;
        SData/*15:0*/ __PVT__feed_data_manager_i__DOT__regs_q;
        QData/*63:0*/ __PVT__fifo_i__DOT__data_q;
        QData/*63:0*/ __PVT__fifo_i__DOT__data_mux;
        SData/*15:0*/ __PVT__fifo_i__DOT__data_pop_q;
        SData/*15:0*/ __PVT__fifo_i__DOT__data_pop_mux;
        SData/*15:0*/ __PVT__fifo_i__DOT__outbuf_d;
        SData/*15:0*/ __PVT__fifo_i__DOT__outbuf_q;
        VL_INW(i_sram_data,255,0,8);
    };

    // INTERNAL VARIABLES
    Vsauria_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsauria_tester_feed_xy_lane__pi45(Vsauria_tester__Syms* symsp, const char* name);
    ~Vsauria_tester_feed_xy_lane__pi45();
    VL_UNCOPYABLE(Vsauria_tester_feed_xy_lane__pi45);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
