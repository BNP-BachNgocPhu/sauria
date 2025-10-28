// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_axi_lite_mux__pi15.h"

VL_INLINE_OPT void Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__0(Vsauria_tester_axi_lite_mux__pi15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.rstn_sys) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (vlSelf->__PVT__gen_mux__DOT__load_aw_lock) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q 
                = vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7ffffffffULL & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                      ? (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U])) 
                                               >> 3U)))
                                      : (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U])))));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7ffffffffULL & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                      ? (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U])) 
                                               >> 3U)))
                                      : (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U])))));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x3ffffffffULL & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                                     >> 1U));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                                 >> 0x25U)));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0xddU >= (0xffU & ((IData)(0x27U) 
                                       + ((IData)(0x6fU) 
                                          * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                    ? (0xfffffffffULL & (((QData)((IData)(
                                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                          (((IData)(0x23U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                + 
                                                                ((IData)(0x6fU) 
                                                                 * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   + 
                                                   ((IData)(0x6fU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x27U) 
                                                  + 
                                                  ((IData)(0x6fU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x27U) 
                                                                       + 
                                                                       ((IData)(0x6fU) 
                                                                        * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                               (7U 
                                                                & (((IData)(0x27U) 
                                                                    + 
                                                                    ((IData)(0x6fU) 
                                                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))))
                    : 0ULL);
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)));
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)));
    } else {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
    }
    vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q)));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_w_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_r_valid = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_b_valid = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_ar_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = ((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                             & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->mst_req_o[0U] = (IData)((((QData)((IData)(
                                                      ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                       | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o)) 
                                                    << 0x25U) 
                                                   | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                         ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                         : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                           | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o))))))));
    vlSelf->mst_req_o[1U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              << 7U) | (IData)(((((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                   | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o)) 
                                                     << 0x25U) 
                                                    | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                          : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                        << 2U) 
                                                       | (QData)((IData)(
                                                                         ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                            | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o))))))) 
                                                >> 0x20U)));
    vlSelf->mst_req_o[2U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              << 0xcU) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                            | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                           << 0xbU) 
                                          | (((IData)(
                                                      ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                        : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                              >> 0x19U) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                           ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                           : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                         >> 0x20U)) 
                                                << 7U))));
    vlSelf->mst_req_o[3U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              >> 0x14U) | ((IData)(
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                      ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                      : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                    >> 0x20U)) 
                                           << 0xcU));
    vlSelf->slv_resps_o[1U] = ((0xffffff7fU & vlSelf->slv_resps_o[1U]) 
                               | (((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready) 
                                     & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                                    & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                   & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                  << 7U));
    vlSelf->slv_resps_o[2U] = ((0x2ffffU & vlSelf->slv_resps_o[2U]) 
                               | (0x3ffffU & (((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                                                & (8U 
                                                   != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                               & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                              << 0x10U)));
    vlSelf->slv_resps_o[0U] = (IData)(((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                        << 1U) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                  & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))));
    vlSelf->slv_resps_o[1U] = ((0xfffffff8U & vlSelf->slv_resps_o[1U]) 
                               | (IData)((((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                              & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                          >> 0x20U)));
    vlSelf->slv_resps_o[1U] = ((0x1ffU & vlSelf->slv_resps_o[1U]) 
                               | ((IData)(((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                              & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                  << 9U));
    vlSelf->slv_resps_o[2U] = ((0x3f000U & vlSelf->slv_resps_o[2U]) 
                               | (0x3ffffU & (((IData)(
                                                       ((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                         << 1U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                           & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                               >> 0x17U) 
                                              | ((IData)(
                                                         (((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                              & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o))))) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelf->slv_resps_o[1U] = ((0xffffff8fU & vlSelf->slv_resps_o[1U]) 
                               | (0xfffffff0U & (((IData)(vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                      & (0U 
                                                         != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                     & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))) 
                                                    << 4U))));
    vlSelf->slv_resps_o[2U] = ((0x31fffU & vlSelf->slv_resps_o[2U]) 
                               | (0x3e000U & (((IData)(vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                               << 0xeU) 
                                              | ((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                  & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o)) 
                                                 << 0xdU))));
}

VL_INLINE_OPT void Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__1(Vsauria_tester_axi_lite_mux__pi15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__1\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U] = (IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                                 << 0x14U) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[2U])) 
                                                                   >> 0xcU))));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[6U])) 
                                      << 5U) | ((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                >> 0x1bU)))) 
          << 3U) | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[2U])) 
                                                  >> 0xcU))) 
                            >> 0x20U)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[6U])) 
                                      << 5U) | ((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                >> 0x1bU)))) 
          >> 0x1dU) | ((IData)(((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[6U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                      >> 0x1bU))) 
                                >> 0x20U)) << 3U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U] = (IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[0U])) 
                                                                   >> 2U))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[4U])) 
                                      << 0xfU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                  >> 0x11U)))) 
          << 3U) | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[0U])) 
                                                  >> 2U))) 
                            >> 0x20U)));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[4U])) 
                                      << 0xfU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                  >> 0x11U)))) 
          >> 0x1dU) | ((IData)(((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[4U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                      >> 0x11U))) 
                                >> 0x20U)) << 3U));
    vlSelf->__PVT__gen_mux__DOT__mst_b_ready = ((0U 
                                                 != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x25U) 
                                                        + 
                                                        ((IData)(0x6fU) 
                                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x25U) 
                                                           + 
                                                           ((IData)(0x6fU) 
                                                            * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x25U) 
                                                          + 
                                                          ((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o)))))));
    vlSelf->__PVT__gen_mux__DOT__mst_r_ready = ((0U 
                                                 != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x6fU) 
                                                        * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x6fU) 
                                                          * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o))))));
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = (((0U 
                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                 & (8U 
                                                    != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x26U) 
                                                        + 
                                                        ((IData)(0x6fU) 
                                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x26U) 
                                                           + 
                                                           ((IData)(0x6fU) 
                                                            * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x26U) 
                                                          + 
                                                          ((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_valids = ((2U 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[0U] 
                                                        >> 1U)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_valids = ((2U 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[5U] 
                                                      >> 0x19U)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[2U] 
                                                        >> 0xbU)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready));
    vlSelf->__PVT__gen_mux__DOT__b_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready)));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready));
    vlSelf->__PVT__gen_mux__DOT__r_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_valids));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_valids));
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__mst_ar_valid = ((8U 
                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_readies = (
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                                                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                                                      & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q;
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 0U;
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 0U;
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q)))) {
        if (((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            vlSelf->__PVT__gen_mux__DOT__w_fifo_push = 1U;
        }
    }
    vlSelf->__PVT__gen_mux__DOT__aw_ready = 0U;
    if (vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
        vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
    } else if (((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready)))) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 1U;
            vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 1U;
        }
        vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
        if (vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->__PVT__gen_mux__DOT__r_fifo_push = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_valid) 
                                                & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->slv_resps_o[1U] = ((0xfffffff7U & vlSelf->slv_resps_o[1U]) 
                               | (8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                        << 3U)));
    vlSelf->slv_resps_o[2U] = ((0x3efffU & vlSelf->slv_resps_o[2U]) 
                               | (0x1000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                             << 0xbU)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_readies = (
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                                                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                                                      & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q))));
    }
    vlSelf->slv_resps_o[1U] = ((0xfffffeffU & vlSelf->slv_resps_o[1U]) 
                               | (0x100U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_readies) 
                                            << 8U)));
    vlSelf->slv_resps_o[2U] = ((0x1ffffU & vlSelf->slv_resps_o[2U]) 
                               | (0x20000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_readies) 
                                              << 0x10U)));
}

VL_INLINE_OPT void Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__2(Vsauria_tester_axi_lite_mux__pi15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux__2\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                         >> 0x28U))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                      >> 0x28U)));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                         >> 0x27U))));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                      >> 0x27U)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                    >> 0x24U)) & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                         >> 0x23U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp 
                      >> 0x23U)));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp) 
           & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o));
}

VL_INLINE_OPT void Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux__0(Vsauria_tester_axi_lite_mux__pi15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.rstn_sys) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (vlSelf->__PVT__gen_mux__DOT__load_aw_lock) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q 
                = vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7ffffffffULL & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                      ? (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U])) 
                                               >> 3U)))
                                      : (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U])))));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7ffffffffULL & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                      ? (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U])) 
                                               >> 3U)))
                                      : (((QData)((IData)(
                                                          vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U])))));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x3ffffffffULL & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                                     >> 1U));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (3U & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                                 >> 0x25U)));
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0xddU >= (0xffU & ((IData)(0x27U) 
                                       + ((IData)(0x6fU) 
                                          * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                    ? (0xfffffffffULL & (((QData)((IData)(
                                                          vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                          (((IData)(0x23U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                + 
                                                                ((IData)(0x6fU) 
                                                                 * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   + 
                                                   ((IData)(0x6fU) 
                                                    * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x27U) 
                                                  + 
                                                  ((IData)(0x6fU) 
                                                   * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x27U) 
                                                                       + 
                                                                       ((IData)(0x6fU) 
                                                                        * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                               (7U 
                                                                & (((IData)(0x27U) 
                                                                    + 
                                                                    ((IData)(0x6fU) 
                                                                     * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x6fU) 
                                                       * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))))))
                    : 0ULL);
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)));
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)));
    } else {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
    }
    vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q)));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_w_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_r_valid = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__mst_b_valid = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_ar_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = ((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                             & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->mst_req_o[0U] = (IData)((((QData)((IData)(
                                                      ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                       | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o)) 
                                                    << 0x25U) 
                                                   | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                         ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                         : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                           | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o))))))));
    vlSelf->mst_req_o[1U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              << 7U) | (IData)(((((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                   | (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o)) 
                                                     << 0x25U) 
                                                    | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                          : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                        << 2U) 
                                                       | (QData)((IData)(
                                                                         ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                            | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o))))))) 
                                                >> 0x20U)));
    vlSelf->mst_req_o[2U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              << 0xcU) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                            | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                           << 0xbU) 
                                          | (((IData)(
                                                      ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                        : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                              >> 0x19U) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                           ? vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                           : vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                         >> 0x20U)) 
                                                << 7U))));
    vlSelf->mst_req_o[3U] = (((IData)(((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                        : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                              >> 0x14U) | ((IData)(
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                      ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                      : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                    >> 0x20U)) 
                                           << 0xcU));
    vlSelf->slv_resps_o[1U] = ((0xffffff7fU & vlSelf->slv_resps_o[1U]) 
                               | (((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready) 
                                     & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                                    & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                   & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                  << 7U));
    vlSelf->slv_resps_o[2U] = ((0x2ffffU & vlSelf->slv_resps_o[2U]) 
                               | (0x3ffffU & (((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                                                & (8U 
                                                   != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                               & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                              << 0x10U)));
    vlSelf->slv_resps_o[0U] = (IData)(((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                        << 1U) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                   & (0U 
                                                                      != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                  & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))));
    vlSelf->slv_resps_o[1U] = ((0xfffffff8U & vlSelf->slv_resps_o[1U]) 
                               | (IData)((((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                              & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                          >> 0x20U)));
    vlSelf->slv_resps_o[1U] = ((0x1ffU & vlSelf->slv_resps_o[1U]) 
                               | ((IData)(((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                              & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                  << 9U));
    vlSelf->slv_resps_o[2U] = ((0x3f000U & vlSelf->slv_resps_o[2U]) 
                               | (0x3ffffU & (((IData)(
                                                       ((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                         << 1U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                            & (0U 
                                                                               != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                           & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))))) 
                                               >> 0x17U) 
                                              | ((IData)(
                                                         (((vlSelf->gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                                               & (0U 
                                                                                != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
                                                                              & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o))))) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelf->slv_resps_o[1U] = ((0xffffff8fU & vlSelf->slv_resps_o[1U]) 
                               | (0xfffffff0U & (((IData)(vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                      & (0U 
                                                         != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                     & (~ (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))) 
                                                    << 4U))));
    vlSelf->slv_resps_o[2U] = ((0x31fffU & vlSelf->slv_resps_o[2U]) 
                               | (0x3e000U & (((IData)(vlSelf->gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                               << 0xeU) 
                                              | ((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                  & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o)) 
                                                 << 0xdU))));
}

VL_INLINE_OPT void Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux__1(Vsauria_tester_axi_lite_mux__pi15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsauria_tester_axi_lite_mux__pi15___sequent__TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux__1\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                         >> 0x28U))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                      >> 0x28U)));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                         >> 0x27U))));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                      >> 0x27U)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                    >> 0x24U)) & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                         >> 0x23U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
                      >> 0x23U)));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp) 
           & (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U] = (IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                                 << 0x14U) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[2U])) 
                                                                   >> 0xcU))));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[6U])) 
                                      << 5U) | ((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                >> 0x1bU)))) 
          << 3U) | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[2U])) 
                                                  >> 0xcU))) 
                            >> 0x20U)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[6U])) 
                                      << 5U) | ((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                >> 0x1bU)))) 
          >> 0x1dU) | ((IData)(((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[6U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[5U])) 
                                                      >> 0x1bU))) 
                                >> 0x20U)) << 3U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U] = (IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[0U])) 
                                                                   >> 2U))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[4U])) 
                                      << 0xfU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                  >> 0x11U)))) 
          << 3U) | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[0U])) 
                                                  >> 2U))) 
                            >> 0x20U)));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U] = 
        (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[4U])) 
                                      << 0xfU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                  >> 0x11U)))) 
          >> 0x1dU) | ((IData)(((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[4U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U])) 
                                                      >> 0x11U))) 
                                >> 0x20U)) << 3U));
    vlSelf->__PVT__gen_mux__DOT__mst_b_ready = ((0U 
                                                 != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x25U) 
                                                        + 
                                                        ((IData)(0x6fU) 
                                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x25U) 
                                                           + 
                                                           ((IData)(0x6fU) 
                                                            * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x25U) 
                                                          + 
                                                          ((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_b_fifo__data_o)))))));
    vlSelf->__PVT__gen_mux__DOT__mst_r_ready = ((0U 
                                                 != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x6fU) 
                                                        * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x6fU) 
                                                          * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_r_fifo__data_o))))));
    vlSelf->__PVT__gen_mux__DOT__mst_w_valid = (((0U 
                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                 & (8U 
                                                    != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                & ((0xddU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(0x26U) 
                                                        + 
                                                        ((IData)(0x6fU) 
                                                         * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[
                                                      (7U 
                                                       & (((IData)(0x26U) 
                                                           + 
                                                           ((IData)(0x6fU) 
                                                            * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x26U) 
                                                          + 
                                                          ((IData)(0x6fU) 
                                                           * (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_valids = ((2U 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[0U] 
                                                        >> 1U)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_valids = ((2U 
                                                   & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[5U] 
                                                      >> 0x19U)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[2U] 
                                                        >> 0xbU)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready)));
    vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready));
    vlSelf->__PVT__gen_mux__DOT__b_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_ready));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready)));
    vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready));
    vlSelf->__PVT__gen_mux__DOT__r_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                               & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_ready));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_valids));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_valids));
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__b_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_b_fifo__DOT__write_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__mst_ar_valid = ((8U 
                                                  != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_readies = (
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                                                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                                                      & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q;
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 0U;
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 0U;
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q)))) {
        if (((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            vlSelf->__PVT__gen_mux__DOT__w_fifo_push = 1U;
        }
    }
    vlSelf->__PVT__gen_mux__DOT__aw_ready = 0U;
    if (vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
        vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
    } else if (((8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready)))) {
            vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 1U;
            vlSelf->__PVT__gen_mux__DOT__load_aw_lock = 1U;
        }
        vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
        if (vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
    }
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->__PVT__gen_mux__DOT__r_fifo_push = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_valid) 
                                                & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_ar_ready));
    vlSelf->slv_resps_o[1U] = ((0xfffffff7U & vlSelf->slv_resps_o[1U]) 
                               | (8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                        << 3U)));
    vlSelf->slv_resps_o[2U] = ((0x3efffU & vlSelf->slv_resps_o[2U]) 
                               | (0x1000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                             << 0xbU)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_readies = (
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                                                     & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                                                      & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_pop)) 
          & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                           << (IData)(vlSelf->__PVT__gen_mux__DOT__i_r_fifo__DOT__write_pointer_q))));
    }
    vlSelf->slv_resps_o[1U] = ((0xfffffeffU & vlSelf->slv_resps_o[1U]) 
                               | (0x100U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_readies) 
                                            << 8U)));
    vlSelf->slv_resps_o[2U] = ((0x1ffffU & vlSelf->slv_resps_o[2U]) 
                               | (0x20000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_aw_readies) 
                                              << 0x10U)));
}
