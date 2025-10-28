// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester___024root.h"

VL_INLINE_OPT void Vsauria_tester___024root___combo__TOP__2(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_chan = 0ULL;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_valid 
        = ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
           & ((0xccU >= (0xffU & ((IData)(0x24U) + 
                                  ((IData)(0x29U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))))) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                 (7U & (((IData)(0x24U) + ((IData)(0x29U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x24U) 
                                              + ((IData)(0x29U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_valid = 0U;
    if ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_chan 
            = ((0xccU >= (0xffU & ((IData)(1U) + ((IData)(0x29U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)))))
                ? (0x3ffffffffULL & (((QData)((IData)(
                                                      vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                                                      (((IData)(0x21U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            ((IData)(0x29U) 
                                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0x29U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)))))
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(0x29U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))))))) 
                                     | (((0U == (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(0x29U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)))))
                                          ? 0ULL : 
                                         ((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(0x29U) 
                                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(0x29U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))))))) 
                                        | ((QData)((IData)(
                                                           vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                                                           (7U 
                                                            & (((IData)(1U) 
                                                                + 
                                                                ((IData)(0x29U) 
                                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))) 
                                                               >> 5U))])) 
                                           >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(0x29U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))))))))
                : 0ULL);
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_valid 
            = ((0xccU >= (0xffU & ((IData)(0x29U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)))) 
               & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                  (7U & (((IData)(0x29U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x29U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o)))));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies 
        = ((0x18U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies)) 
           | ((4U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[3U] 
                     >> 0x18U)) | ((2U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[2U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[1U] 
                                            >> 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies)) 
           | ((0x10U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[6U] 
                        >> 8U)) | (8U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[5U])));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready 
        = ((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & ((0xccU >= (0xffU & ((IData)(0x23U) + 
                                  ((IData)(0x29U) * 
                                   (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                 (7U & (((IData)(0x23U) + ((IData)(0x29U) 
                                           * (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x23U) 
                                              + ((IData)(0x29U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready 
        = (((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
            & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
           & ((0xccU >= (0xffU & ((IData)(0x27U) + 
                                  ((IData)(0x29U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                 (7U & (((IData)(0x27U) + ((IData)(0x29U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                              + ((IData)(0x29U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
            >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_b_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
            >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_r_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__unnamedblk1__DOT__dummy_thing 
        = ((4U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[0U] 
                  << 1U)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_q) 
                              << 1U) | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                                              >> 9U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
        = (0x2fffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 1U;
        if ((((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[0U] 
               >> 1U) & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                         >> 9U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_r_ready))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 0U;
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 0U;
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                = (0x100000U | vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__b_fifo_pop 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_pop 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready));
    if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready = 0U;
        if (((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) 
             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies) 
                >> (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready = 1U;
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready = 0U;
        if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_valid))) {
            if ((1U & (~ ((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) 
                          & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies) 
                             >> (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d = 1U;
                vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock = 1U;
            }
            if (((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) 
                 & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies) 
                    >> (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready = 1U;
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_push 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_push) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_pop)) 
          & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT____Vlvbound_hcca00c02__0 
            = (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o));
        if ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_n) 
                   | (0xffffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT____Vlvbound_hcca00c02__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop)) 
          & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__b_fifo_pop)) 
          & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT____Vlvbound_hcca00c02__0 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o;
        if ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_n) 
                   | (0xffffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT____Vlvbound_hcca00c02__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q))))));
        }
    }
}

QData Vsauria_tester___024root___change_request_1(Vsauria_tester___024root* vlSelf);

VL_INLINE_OPT QData Vsauria_tester___024root___change_request(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___change_request\n"); );
    // Body
    return (Vsauria_tester___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vsauria_tester___024root___eval_debug_assertions(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rstn_sauria & 0xfeU))) {
        Verilated::overWidthError("rstn_sauria");}
    if (VL_UNLIKELY((vlSelf->clk_sauria & 0xfeU))) {
        Verilated::overWidthError("clk_sauria");}
    if (VL_UNLIKELY((vlSelf->rstn_sys & 0xfeU))) {
        Verilated::overWidthError("rstn_sys");}
    if (VL_UNLIKELY((vlSelf->clk_sys & 0xfeU))) {
        Verilated::overWidthError("clk_sys");}
    if (VL_UNLIKELY((vlSelf->file_opts & 0xfcU))) {
        Verilated::overWidthError("file_opts");}
    if (VL_UNLIKELY((vlSelf->cfg_bus_lite_ar_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("cfg_bus_lite_ar_valid");}
    if (VL_UNLIKELY((vlSelf->cfg_bus_lite_r_ready & 0xfeU))) {
        Verilated::overWidthError("cfg_bus_lite_r_ready");}
    if (VL_UNLIKELY((vlSelf->cfg_bus_lite_aw_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("cfg_bus_lite_aw_valid");}
    if (VL_UNLIKELY((vlSelf->cfg_bus_lite_w_valid & 0xfeU))) {
        Verilated::overWidthError("cfg_bus_lite_w_valid");}
    if (VL_UNLIKELY((vlSelf->check_flag & 0xfeU))) {
        Verilated::overWidthError("check_flag");}
}
#endif  // VL_DEBUG
