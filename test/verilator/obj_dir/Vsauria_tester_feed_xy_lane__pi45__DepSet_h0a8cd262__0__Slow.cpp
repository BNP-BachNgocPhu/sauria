// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester_feed_xy_lane__pi45.h"

VL_ATTR_COLD void Vsauria_tester_feed_xy_lane__pi45___ctor_var_reset(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rstn = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->i_sram_data);
    vlSelf->i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->i_update = VL_RAND_RESET_I(1);
    vlSelf->i_clearbuff = VL_RAND_RESET_I(1);
    vlSelf->i_valid_data = VL_RAND_RESET_I(1);
    vlSelf->i_x_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->i_glob_woffs = VL_RAND_RESET_I(4);
    vlSelf->i_loc_woffs = VL_RAND_RESET_I(8);
    vlSelf->i_Dil_pat = VL_RAND_RESET_I(16);
    vlSelf->i_finalpush = VL_RAND_RESET_I(1);
    vlSelf->i_clearfifo = VL_RAND_RESET_I(1);
    vlSelf->i_pipeline_en = VL_RAND_RESET_I(1);
    vlSelf->i_pop_en = VL_RAND_RESET_I(1);
    vlSelf->o_stall = VL_RAND_RESET_I(1);
    vlSelf->o_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->o_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->o_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_empty_q1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_empty_q2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop_en_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_full_shim = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements);
    vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx = VL_RAND_RESET_I(9);
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv = VL_RAND_RESET_I(9);
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number = VL_RAND_RESET_I(5);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__PVT__feed_data_manager_i__DOT__par_sums);
    VL_RAND_RESET_W(80, vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = VL_RAND_RESET_I(5);
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = VL_RAND_RESET_I(1);
    vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 = VL_RAND_RESET_I(5);
    vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 = VL_RAND_RESET_I(5);
    vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 = VL_RAND_RESET_I(5);
    vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__fifo_i__DOT__ptr_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fifo_i__DOT__ptr_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fifo_i__DOT__out_woffs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fifo_i__DOT__down_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_i__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_i__DOT__empty_public = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_i__DOT__empty_start_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo_i__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fifo_i__DOT__data_mux = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fifo_i__DOT__reg_en = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fifo_i__DOT__mux_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__fifo_i__DOT__data_pop_mux = VL_RAND_RESET_I(16);
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = VL_RAND_RESET_I(16);
    vlSelf->__PVT__fifo_i__DOT__outbuf_q = VL_RAND_RESET_I(16);
}
