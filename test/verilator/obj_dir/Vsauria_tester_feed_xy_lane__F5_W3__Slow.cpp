// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_feed_xy_lane__F5_W3.h"

void Vsauria_tester_feed_xy_lane__F5_W3___ctor_var_reset(Vsauria_tester_feed_xy_lane__F5_W3* vlSelf);

Vsauria_tester_feed_xy_lane__F5_W3::Vsauria_tester_feed_xy_lane__F5_W3(Vsauria_tester__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsauria_tester_feed_xy_lane__F5_W3___ctor_var_reset(this);
}

void Vsauria_tester_feed_xy_lane__F5_W3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsauria_tester_feed_xy_lane__F5_W3::~Vsauria_tester_feed_xy_lane__F5_W3() {
}

// Savable
void Vsauria_tester_feed_xy_lane__F5_W3::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x1c8e47a17145aa12ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<i_clk;
    os<<i_rstn;
    os<<i_feeder_en;
    os<<i_update;
    os<<i_clearbuff;
    os<<i_valid_data;
    os<<i_x_ov_flag;
    os<<i_glob_woffs;
    os<<i_loc_woffs;
    os<<i_finalpush;
    os<<i_clearfifo;
    os<<i_pipeline_en;
    os<<i_pop_en;
    os<<o_stall;
    os<<o_fifo_empty;
    os<<o_fifo_full;
    os<<__PVT__fifo_pop;
    os<<__PVT__fifo_empty_q1;
    os<<__PVT__fifo_empty_q2;
    os<<__PVT__pop_en_q;
    os<<__PVT__fifo_full_shim;
    os<<__PVT__feed_data_manager_i__DOT__pipeline_regs_en;
    os<<__PVT__feed_data_manager_i__DOT__valid_data_q1;
    os<<__PVT__feed_data_manager_i__DOT__woffs_init_q;
    os<<__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
    os<<__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q;
    os<<__PVT__feed_data_manager_i__DOT__last_rd;
    os<<__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign;
    os<<__PVT__feed_data_manager_i__DOT__lshifted_dil_pat;
    os<<__PVT__feed_data_manager_i__DOT__rshifted_dil_pat;
    os<<__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
    os<<__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q;
    os<<__PVT__feed_data_manager_i__DOT__final_dil_pat;
    os<<__PVT__feed_data_manager_i__DOT__read_ptr_d;
    os<<__PVT__feed_data_manager_i__DOT__read_ptr_q;
    os<<__PVT__feed_data_manager_i__DOT__elm_number;
    os<<__PVT__feed_data_manager_i__DOT__elm_number_sat;
    os<<__PVT__feed_data_manager_i__DOT__par_sums;
    os<<__PVT__feed_data_manager_i__DOT__elm_idx_array;
    os<<__PVT__feed_data_manager_i__DOT__regs_used_idx;
    os<<__PVT__feed_data_manager_i__DOT__new_active_idx;
    os<<__PVT__feed_data_manager_i__DOT__regs_active_new;
    os<<__PVT__feed_data_manager_i__DOT__regs_active_d;
    os<<__PVT__feed_data_manager_i__DOT__regs_active_q;
    os<<__PVT__feed_data_manager_i__DOT__regs_en_d;
    os<<__PVT__feed_data_manager_i__DOT__n_free_regs;
    os<<__PVT__feed_data_manager_i__DOT__target_array;
    os<<__PVT__feed_data_manager_i__DOT__mux_control_array;
    os<<__PVT__feed_data_manager_i__DOT__fifo_push;
    os<<__PVT__fifo_i__DOT__ptr_d;
    os<<__PVT__fifo_i__DOT__ptr_q;
    os<<__PVT__fifo_i__DOT__out_woffs;
    os<<__PVT__fifo_i__DOT__down_flag;
    os<<__PVT__fifo_i__DOT__empty;
    os<<__PVT__fifo_i__DOT__empty_public;
    os<<__PVT__fifo_i__DOT__empty_start_d;
    os<<__PVT__fifo_i__DOT__empty_start_q;
    os<<__PVT__fifo_i__DOT__reg_en;
    os<<__PVT__fifo_i__DOT__mux_sel;
    os<<o_data;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os<<__PVT__feed_data_manager_i__DOT__sram_elements[__Vi0];
    }
    os<<__PVT__feed_data_manager_i__DOT__dil_shift_idx;
    os<<__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv;
    os<<__PVT__feed_data_manager_i__DOT__regs_d;
    os<<__PVT__feed_data_manager_i__DOT__regs_q;
    os<<__PVT__fifo_i__DOT__data_pop_q;
    os<<__PVT__fifo_i__DOT__data_pop_mux;
    os<<__PVT__fifo_i__DOT__outbuf_d;
    os<<__PVT__fifo_i__DOT__outbuf_q;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os<<i_sram_data[__Vi0];
    }
    os<<i_Dil_pat;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<__PVT__fifo_i__DOT__data_q[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<__PVT__fifo_i__DOT__data_mux[__Vi0];
    }
    os<<fifo_i__DOT____Vlvbound_h6ac077c1__0;
    os<<fifo_i__DOT____Vlvbound_h6ac077c1__2;
    os<<fifo_i__DOT____Vlvbound_h6ac077c1__3;
}
void Vsauria_tester_feed_xy_lane__F5_W3::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x1c8e47a17145aa12ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>i_clk;
    os>>i_rstn;
    os>>i_feeder_en;
    os>>i_update;
    os>>i_clearbuff;
    os>>i_valid_data;
    os>>i_x_ov_flag;
    os>>i_glob_woffs;
    os>>i_loc_woffs;
    os>>i_finalpush;
    os>>i_clearfifo;
    os>>i_pipeline_en;
    os>>i_pop_en;
    os>>o_stall;
    os>>o_fifo_empty;
    os>>o_fifo_full;
    os>>__PVT__fifo_pop;
    os>>__PVT__fifo_empty_q1;
    os>>__PVT__fifo_empty_q2;
    os>>__PVT__pop_en_q;
    os>>__PVT__fifo_full_shim;
    os>>__PVT__feed_data_manager_i__DOT__pipeline_regs_en;
    os>>__PVT__feed_data_manager_i__DOT__valid_data_q1;
    os>>__PVT__feed_data_manager_i__DOT__woffs_init_q;
    os>>__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
    os>>__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q;
    os>>__PVT__feed_data_manager_i__DOT__last_rd;
    os>>__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign;
    os>>__PVT__feed_data_manager_i__DOT__lshifted_dil_pat;
    os>>__PVT__feed_data_manager_i__DOT__rshifted_dil_pat;
    os>>__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
    os>>__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q;
    os>>__PVT__feed_data_manager_i__DOT__final_dil_pat;
    os>>__PVT__feed_data_manager_i__DOT__read_ptr_d;
    os>>__PVT__feed_data_manager_i__DOT__read_ptr_q;
    os>>__PVT__feed_data_manager_i__DOT__elm_number;
    os>>__PVT__feed_data_manager_i__DOT__elm_number_sat;
    os>>__PVT__feed_data_manager_i__DOT__par_sums;
    os>>__PVT__feed_data_manager_i__DOT__elm_idx_array;
    os>>__PVT__feed_data_manager_i__DOT__regs_used_idx;
    os>>__PVT__feed_data_manager_i__DOT__new_active_idx;
    os>>__PVT__feed_data_manager_i__DOT__regs_active_new;
    os>>__PVT__feed_data_manager_i__DOT__regs_active_d;
    os>>__PVT__feed_data_manager_i__DOT__regs_active_q;
    os>>__PVT__feed_data_manager_i__DOT__regs_en_d;
    os>>__PVT__feed_data_manager_i__DOT__n_free_regs;
    os>>__PVT__feed_data_manager_i__DOT__target_array;
    os>>__PVT__feed_data_manager_i__DOT__mux_control_array;
    os>>__PVT__feed_data_manager_i__DOT__fifo_push;
    os>>__PVT__fifo_i__DOT__ptr_d;
    os>>__PVT__fifo_i__DOT__ptr_q;
    os>>__PVT__fifo_i__DOT__out_woffs;
    os>>__PVT__fifo_i__DOT__down_flag;
    os>>__PVT__fifo_i__DOT__empty;
    os>>__PVT__fifo_i__DOT__empty_public;
    os>>__PVT__fifo_i__DOT__empty_start_d;
    os>>__PVT__fifo_i__DOT__empty_start_q;
    os>>__PVT__fifo_i__DOT__reg_en;
    os>>__PVT__fifo_i__DOT__mux_sel;
    os>>o_data;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os>>__PVT__feed_data_manager_i__DOT__sram_elements[__Vi0];
    }
    os>>__PVT__feed_data_manager_i__DOT__dil_shift_idx;
    os>>__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv;
    os>>__PVT__feed_data_manager_i__DOT__regs_d;
    os>>__PVT__feed_data_manager_i__DOT__regs_q;
    os>>__PVT__fifo_i__DOT__data_pop_q;
    os>>__PVT__fifo_i__DOT__data_pop_mux;
    os>>__PVT__fifo_i__DOT__outbuf_d;
    os>>__PVT__fifo_i__DOT__outbuf_q;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        os>>i_sram_data[__Vi0];
    }
    os>>i_Dil_pat;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>__PVT__fifo_i__DOT__data_q[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>__PVT__fifo_i__DOT__data_mux[__Vi0];
    }
    os>>fifo_i__DOT____Vlvbound_h6ac077c1__0;
    os>>fifo_i__DOT____Vlvbound_h6ac077c1__2;
    os>>fifo_i__DOT____Vlvbound_h6ac077c1__3;
}
