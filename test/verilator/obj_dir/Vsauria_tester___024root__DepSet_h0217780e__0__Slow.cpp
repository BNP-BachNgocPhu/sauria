// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester___024root.h"

VL_ATTR_COLD void Vsauria_tester___024root___settle__TOP__2(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___settle__TOP__2\n"); );
    // Init
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0;
    VlWide<3>/*65:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0;
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0;
    // Body
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h7578d0af__1 
            = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                     >> 5U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
            = ((0xffffffbfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU]) 
               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h7578d0af__1) 
                  << 6U));
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xffffffdfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU]) 
           | ((IData)(sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0) 
              << 5U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[1U] 
            << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
                         >> 2U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
            << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[1U] 
                         >> 2U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[2U] 
        = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                 >> 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((3U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
              << 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((3U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
                  >> 0x1dU)) | ((4U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
                                       >> 0x1dU)) | 
                                (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                                 << 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xffffffe0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU]) 
           | ((3U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                     >> 0x1dU)) | ((4U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                                          >> 0x1dU)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[2U] 
                                      << 3U))));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
            = (4U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U]);
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0xfffffffdU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U]) 
           | ((IData)(sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0) 
              << 1U));
    if ((0x10000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xf0fffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0xfffffU & (((0x127U >= (0x1ffU & 
                                           ((IData)(0x8cU) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                ? (0xfU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x8cU) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                             ? 0U : 
                                            (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             (((IData)(3U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x8cU) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x8cU) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                              (0xfU 
                                               & (((IData)(0x8cU) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x8cU) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))))
                                : 0U) << 0xcU)));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xff3ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0xfffffU & (((0x127U >= (0x1ffU & 
                                           ((IData)(0x8aU) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                ? (3U & (((0U == (0x1fU 
                                                  & ((IData)(0x8aU) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                           ? 0U : (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x8aU) 
                                                         + 
                                                         ((IData)(0x94U) 
                                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x8aU) 
                                                        + 
                                                        ((IData)(0x94U) 
                                                         * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                         | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                            (0xfU & 
                                             (((IData)(0x8aU) 
                                               + ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                              >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0x8aU) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))))
                                : 0U) << 0xaU)));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xffdffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0xfffffU & (((0x127U >= (0x1ffU & 
                                           ((IData)(0x89U) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                               & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                  (0xfU & (((IData)(0x89U) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                           >> 5U))] 
                                  >> (0x1fU & ((IData)(0x89U) 
                                               + ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))) 
                              << 9U)));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = (0xf01ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    }
    if ((0x100U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xfff0fU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0xfffffU & (((0x127U >= (0x1ffU & 
                                           ((IData)(0x84U) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                ? (0xfU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x84U) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                             ? 0U : 
                                            (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             (((IData)(3U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x84U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x84U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                              (0xfU 
                                               & (((IData)(0x84U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x84U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))))
                                : 0U) << 4U)));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]) 
               | (((0x127U >= (0x1ffU & ((IData)(4U) 
                                         + ((IData)(0x94U) 
                                            * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                    ? (((0U == (0x1fU & ((IData)(4U) 
                                         + ((IData)(0x94U) 
                                            * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                         ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                 ((IData)(1U) + (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(4U) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                          (0xfU & (((IData)(4U) + ((IData)(0x94U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                    : 0U) << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[1U] 
            = ((((0x127U >= (0x1ffU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                  ? (((0U == (0x1fU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                       ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                               ((IData)(1U) + (0xfU 
                                               & (((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(4U) 
                                             + ((IData)(0x94U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                     | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                        (0xfU & (((IData)(4U) + ((IData)(0x94U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(4U) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                  : 0U) >> 0x1cU) | (((0x127U >= (0x1ffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                            ? 0U : 
                                           (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                            ((IData)(2U) 
                                             + (0xfU 
                                                & (((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                          | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             ((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                                       : 0U) << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[2U] 
            = ((((0x127U >= (0x1ffU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                  ? (((0U == (0x1fU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                       ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                               ((IData)(2U) + (0xfU 
                                               & (((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(4U) 
                                             + ((IData)(0x94U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                     | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                        ((IData)(1U) + (0xfU & (((IData)(4U) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                >> 5U)))] 
                        >> (0x1fU & ((IData)(4U) + 
                                     ((IData)(0x94U) 
                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                  : 0U) >> 0x1cU) | (((0x127U >= (0x1ffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                            ? 0U : 
                                           (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                            ((IData)(3U) 
                                             + (0xfU 
                                                & (((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                          | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             ((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                                       : 0U) << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[3U] 
            = ((((0x127U >= (0x1ffU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                  ? (((0U == (0x1fU & ((IData)(4U) 
                                       + ((IData)(0x94U) 
                                          * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                       ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                               ((IData)(3U) + (0xfU 
                                               & (((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(4U) 
                                             + ((IData)(0x94U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                     | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                        ((IData)(2U) + (0xfU & (((IData)(4U) 
                                                 + 
                                                 ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                >> 5U)))] 
                        >> (0x1fU & ((IData)(4U) + 
                                     ((IData)(0x94U) 
                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                  : 0U) >> 0x1cU) | (((0x127U >= (0x1ffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                            ? 0U : 
                                           (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                            ((IData)(4U) 
                                             + (0xfU 
                                                & (((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0x94U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                          | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             ((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    ((IData)(0x94U) 
                                                     * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                                       : 0U) << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xffff0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0xfffffU & (((0x127U >= (0x1ffU & 
                                           ((IData)(4U) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(4U) 
                                             + ((IData)(0x94U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                                     ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                             ((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0x94U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                                   | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                      ((IData)(3U) 
                                       + (0xfU & (((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                  >> 5U)))] 
                                      >> (0x1fU & ((IData)(4U) 
                                                   + 
                                                   ((IData)(0x94U) 
                                                    * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))
                                : 0U) >> 0x1cU)));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
            = ((0xfffffff3U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]) 
               | (((0x127U >= (0x1ffU & ((IData)(2U) 
                                         + ((IData)(0x94U) 
                                            * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                    ? (3U & (((0U == (0x1fU & ((IData)(2U) 
                                               + ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))
                               ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                       (((IData)(1U) 
                                         + (0x1ffU 
                                            & ((IData)(2U) 
                                               + ((IData)(0x94U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(2U) 
                                            + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))))) 
                             | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                                (0xfU & (((IData)(2U) 
                                          + ((IData)(0x94U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                         >> 5U))] >> 
                                (0x1fU & ((IData)(2U) 
                                          + ((IData)(0x94U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))))
                    : 0U) << 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
            = ((0xfffffffdU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]) 
               | (((0x127U >= (0x1ffU & ((IData)(1U) 
                                         + ((IData)(0x94U) 
                                            * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))) 
                   & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                      (0xfU & (((IData)(1U) + ((IData)(0x94U) 
                                               * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + ((IData)(0x94U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))))) 
                  << 1U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
            = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]) 
               | ((0x127U >= (0x1ffU & ((IData)(0x94U) 
                                        * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                  & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                     (0xfU & (((IData)(0x94U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x94U) 
                                            * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = (0xfff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                 >> 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
              >> 0x13U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                 >> 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
              >> 0x13U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                 >> 0x11U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
              >> 0x11U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                 >> 0x12U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
              >> 0x12U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                 >> 0x12U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
              >> 0x12U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            >> 0x10U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_b_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            >> 8U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_r_spill_reg__ready_o));
}

extern const VlWide<11>/*351:0*/ Vsauria_tester__ConstPool__CONST_h57746229_0;
extern const VlWide<10>/*319:0*/ Vsauria_tester__ConstPool__CONST_h07f035d4_0;
extern const VlWide<10>/*319:0*/ Vsauria_tester__ConstPool__CONST_h76b4ba05_0;
extern const VlWide<9>/*287:0*/ Vsauria_tester__ConstPool__CONST_he1d8535f_0;
extern const VlWide<10>/*319:0*/ Vsauria_tester__ConstPool__CONST_hbe742c84_0;
extern const VlWide<9>/*287:0*/ Vsauria_tester__ConstPool__CONST_h8b0a34f6_0;
extern const VlWide<10>/*319:0*/ Vsauria_tester__ConstPool__CONST_h8bd19c32_0;
extern const VlWide<9>/*287:0*/ Vsauria_tester__ConstPool__CONST_haff46cbc_0;

VL_ATTR_COLD void Vsauria_tester___024root___initial__TOP__0(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___initial__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0U == (IData)(vlSelf->file_opts)))) {
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(11, Vsauria_tester__ConstPool__CONST_h57746229_0)
                     , vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                     , 0U, ~0ULL);
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(10, Vsauria_tester__ConstPool__CONST_h07f035d4_0)
                     , vlSelf->sauria_tester__DOT__gold_dram
                     , 0U, ~0ULL);
    } else if (VL_UNLIKELY((1U == (IData)(vlSelf->file_opts)))) {
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(10, Vsauria_tester__ConstPool__CONST_h76b4ba05_0)
                     , vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                     , 0U, ~0ULL);
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(9, Vsauria_tester__ConstPool__CONST_he1d8535f_0)
                     , vlSelf->sauria_tester__DOT__gold_dram
                     , 0U, ~0ULL);
    } else if (VL_UNLIKELY((2U == (IData)(vlSelf->file_opts)))) {
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(10, Vsauria_tester__ConstPool__CONST_hbe742c84_0)
                     , vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                     , 0U, ~0ULL);
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(9, Vsauria_tester__ConstPool__CONST_h8b0a34f6_0)
                     , vlSelf->sauria_tester__DOT__gold_dram
                     , 0U, ~0ULL);
    } else if (VL_UNLIKELY((3U == (IData)(vlSelf->file_opts)))) {
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(10, Vsauria_tester__ConstPool__CONST_h8bd19c32_0)
                     , vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                     , 0U, ~0ULL);
        VL_READMEM_N(true, 8, VL_CVT_PACK_STR_NW(9, Vsauria_tester__ConstPool__CONST_haff46cbc_0)
                     , vlSelf->sauria_tester__DOT__gold_dram
                     , 0U, ~0ULL);
    }
}

VL_ATTR_COLD void Vsauria_tester___024root___eval_initial(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_sys = vlSelf->clk_sys;
    vlSelf->__Vclklast__TOP__clk_sauria = vlSelf->clk_sauria;
    vlSelf->__Vclklast__TOP__rstn_sys = vlSelf->rstn_sys;
    vlSelf->__Vclklast__TOP__check_flag = vlSelf->check_flag;
    vlSelf->__Vclklast__TOP__rstn_sauria = vlSelf->rstn_sauria;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn 
        = vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn;
    Vsauria_tester___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vsauria_tester___024root___final(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___final\n"); );
}

VL_ATTR_COLD void Vsauria_tester___024root___ctor_var_reset(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rstn_sauria = VL_RAND_RESET_I(1);
    vlSelf->clk_sauria = VL_RAND_RESET_I(1);
    vlSelf->rstn_sys = VL_RAND_RESET_I(1);
    vlSelf->clk_sys = VL_RAND_RESET_I(1);
    vlSelf->file_opts = VL_RAND_RESET_I(2);
    vlSelf->cfg_bus_lite_ar_addr = VL_RAND_RESET_I(32);
    vlSelf->cfg_bus_lite_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_r_data = VL_RAND_RESET_I(32);
    vlSelf->cfg_bus_lite_r_valid = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_r_ready = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_aw_addr = VL_RAND_RESET_I(32);
    vlSelf->cfg_bus_lite_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_w_data = VL_RAND_RESET_I(32);
    vlSelf->cfg_bus_lite_w_valid = VL_RAND_RESET_I(1);
    vlSelf->cfg_bus_lite_w_ready = VL_RAND_RESET_I(1);
    vlSelf->test_idx = VL_RAND_RESET_I(8);
    vlSelf->check_flag = VL_RAND_RESET_I(1);
    vlSelf->dram_startoffs = VL_RAND_RESET_I(32);
    vlSelf->dram_endoffs = VL_RAND_RESET_I(32);
    vlSelf->errors = VL_RAND_RESET_I(32);
    vlSelf->ctrl_interrupt = VL_RAND_RESET_I(1);
    vlSelf->sauria_interrupt = VL_RAND_RESET_I(1);
    vlSelf->dma_interrupt = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(289, vlSelf->sauria_tester__DOT__axi_mem_req);
    vlSelf->sauria_tester__DOT__n_errs = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__n_errs_prev = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__gold_dram.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__n_checks = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__real_exp = 0;
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__real_acq = 0;
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__exp_byte = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__acq_byte = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__dram_region = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__unnamedblk1__DOT__exp_data_out);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__unnamedblk1__DOT__acq_data_out);
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    vlSelf->sauria_tester__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__i_cfg_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_intr2cdc = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_rd_intr2control = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_wr_intr2control = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req);
    VL_RAND_RESET_W(205, vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps);
    VL_RAND_RESET_W(555, vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o = VL_RAND_RESET_Q(41);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_readies = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__b_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__r_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_chan = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT____Vlvbound_hcca00c02__0 = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_Q(36);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(36);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(36);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT____Vlvbound_hcca00c02__0 = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(38);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_n = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_q = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT____Vlvbound_hcca00c02__0 = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state = 0;
    VL_RAND_RESET_W(222, vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs);
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__mst_resp = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(222, vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res);
    VL_RAND_RESET_W(219, vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o = VL_RAND_RESET_Q(41);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(578, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs);
    VL_RAND_RESET_W(150, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp);
    VL_RAND_RESET_W(291, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o);
    VL_RAND_RESET_W(296, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_readies = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(292, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(134, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_readies = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_b_spill_reg__ready_i = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_r_spill_reg__ready_i = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__0__KET__ = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp = VL_RAND_RESET_Q(41);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(140, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(144, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(140, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_bin_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(35);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(35);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_bin_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(36);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(36);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_bin_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(35);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(35);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(136, vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr_bin = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(291, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req);
    VL_RAND_RESET_W(150, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp);
    VL_RAND_RESET_W(150, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o);
    VL_RAND_RESET_W(291, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(584, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(1168, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__dst_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(536, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__dst_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_bin_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__dst_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_bin_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__dst_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_bin_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__dst_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__dst_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(67, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(1096, vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q_prv = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1088, vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d);
    VL_RAND_RESET_W(1088, vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q);
    VL_RAND_RESET_W(1088, vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_arready_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_awready_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_wready_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_bvalid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__reg_write__DOT__unnamedblk1__DOT__bb = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMA_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMB_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMC_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__loop_order = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = VL_RAND_RESET_I(13);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_dma_controller = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_A = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_B = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_C = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_wresp_sync = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(456, vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ch_eq = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__btt = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter = VL_RAND_RESET_I(24);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_reg = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__single_tile = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_ifmaps_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_weights_change = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_tile_offset = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_tile_offset = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__tmp_SRAMC_tile_offset = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__send_SRAMC_tile_offset = VL_RAND_RESET_I(25);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(289, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__src_woffs_init_0_to_1 = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__src_woffs_init_1_to_0 = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_btt_reg = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(296, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_new_transaction = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__r_transaction_complete = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_new_transaction = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT____Vcellinp__realigner_I__i_writer_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bresp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rstart_addr_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__wstart_addr_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__btt_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__actual_btt = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_d = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_init = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_end = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_end = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_addr_end = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_addr_end = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__elm_number = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__start_idx = VL_RAND_RESET_I(6);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shamt = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(384, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded);
    VL_RAND_RESET_W(384, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__byte_cnt_d = VL_RAND_RESET_Q(33);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__byte_cnt_q = VL_RAND_RESET_Q(33);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_shim_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop_shim_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_force_finish = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT____Vcellinp__transaction_generator_I__advance = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr = VL_RAND_RESET_I(28);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__actual_btt = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(289, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_chan = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_chan = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_w_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_b_spill_reg__ready_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_r_spill_reg__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(578, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o);
    VL_RAND_RESET_W(72, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(136, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(136, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h7578d0af__1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(291, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req);
    VL_RAND_RESET_W(111, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__psm_sramc_rden = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__psm_sramc_wdata);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(150, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__aw_chunk_idx = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_chan = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ar_chunk_idx = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__lat_cnt_trigger = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_valid_delayed = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_Q(34);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_ctx_status = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_feed_status = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_out_status = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_incntlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_act_reps = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_wei_reps = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_outbuf_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_finalwrite = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_act_til_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_wei_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_xlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_xstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_ylim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_ystep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_chlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_chstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_til_xlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_til_xstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_til_ylim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_til_ystep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_clearfifo = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_waligned = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_auxlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_auxstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_til_klim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_til_kstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_valid = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_clearfifo = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_preload_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ncontexts = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cxlim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cxstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cklim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ckstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cylim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cystep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cklim = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_ckstep = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_outbuf_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_outbuf_reset = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_inactive_cols = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_reg_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__config_regs_i__o_loc_woffs = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__ifmap_feeder_i__o_a_arr);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_cnt_clear = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__weight_feeder_i__o_b_arr);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_cnt_clear = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__psm_top_i__i_fsm_reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q2 = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(288, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q);
    VL_RAND_RESET_W(288, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q2);
    VL_RAND_RESET_W(288, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q2);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d);
    VL_RAND_RESET_W(160, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q);
    VL_RAND_RESET_W(160, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q2);
    VL_RAND_RESET_W(160, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d);
    VL_RAND_RESET_W(288, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_default);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_default);
    VL_RAND_RESET_W(160, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_default);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_q_prv = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__ready_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_q_prv = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_q_prv = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cycle_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cycle_cnt_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_d = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__Dil_pat_BE = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk1__DOT__bb = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk3__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk5__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk6__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h409c692a__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h0a89d078__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h7f76d56e__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_hf6050e16__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h10ea63e3__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_he57259c4__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h6dc7572f__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h54d84cbe__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h5ce47a26__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h7741b97d__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h1a1a312b__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_hf2df7b09__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h79ba5d8e__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h545bf750__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h14408ba0__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h71930d05__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_hcafc2cf6__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h9eb67ed0__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_hd479b529__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3b82f380__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h47a5ab94__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_hbad16525__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h7ce1b604__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h263529de__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h0657fd73__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_reset = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_force = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT____Vcellinp__context_switch_controller_i__i_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT____Vcellinp__feeders_fsm_i__i_fsm_reset = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__computation_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__force_stall = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_reset = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_enable_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_enable_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__incnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__incnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_shim_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_trigger = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cswitch_arr_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cswitch_arr_q = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__b_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__b_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__b_cnt = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_done_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_done_edge = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pipeline_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_pop_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_pop_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pre_feeding_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_ov_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__valid_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__valid_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__valid_data = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__pipeline_regs_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__outbounds_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__outbounds_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__outbounds_q3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__lane_dout);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__sram_data_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__glob_woffs_mux = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__loc_woffs_mux = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux = VL_RAND_RESET_Q(64);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_transition_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__0__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__1__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__2__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__3__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__4__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__5__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__x_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__x_ov_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__y_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__ch_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_x_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_y_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__sram_idx_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__xyc_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__cnt_clear_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__woffs_outshim = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__x_ov_flag_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__outbounds_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__outbounds_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__x_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__x_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__y_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__y_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__ch_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__ch_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_x_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_x_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_y_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_y_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__1__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__pipeline_regs_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__outbounds_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__outbounds_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__outbounds_q3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__lane_dout);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sram_data_q);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any_shim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__0__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__1__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__2__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__3__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__4__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__5__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__6__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__7__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__12__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__13__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__14__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__15__KET____DOT__act_row_feeder_i__i_feeder_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__w_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__til_k_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__aux_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__w_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__cnt_clear_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__sram_idx_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__sram_idx_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__transition_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__transition_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__transition_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__woffs_outshim = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__outbounds_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__til_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__outbounds_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__aux_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__aux_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__w_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__w_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__1__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__175__03a160__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__191__03a176__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__175__03a160__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__207__03a192__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__191__03a176__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__175__03a160__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__223__03a208__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__207__03a192__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__191__03a176__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__175__03a160__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__239__03a224__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__223__03a208__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__207__03a192__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__191__03a176__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__175__03a160__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__159__03a144__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__143__03a128__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__127__03a112__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__111__03a96__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__95__03a80__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__79__03a64__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__63__03a48__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__47__03a32__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__31__03a16__KET__ = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__feed_registers_i__DOT__reg_q__BRA__15__03a0__KET__ = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_rdata_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_fsm = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_feed_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_feed_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_start = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_wren_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_wren_q1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_wren_q2 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_wren_q3 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_addr_q1 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_addr_q2 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_addr_q3 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_dout_arr);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__2047__03a1920__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1919__03a1792__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1791__03a1664__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1663__03a1536__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1535__03a1408__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1407__03a1280__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1279__03a1152__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1151__03a1024__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__1023__03a896__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__895__03a768__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__767__03a640__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__639__03a512__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__511__03a384__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__383__03a256__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__255__03a128__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_register_i__DOT__reg_q__BRA__127__03a0__KET__);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q1 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__par_sums = VL_RAND_RESET_Q(40);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__elm_idx = VL_RAND_RESET_Q(40);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__shift_idx = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__order_pat = VL_RAND_RESET_Q(40);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__upload_idx = VL_RAND_RESET_Q(40);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_en = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_q);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__fifo_push = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_obus);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__buff_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__wofs = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q2 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__fifo_pop_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__outbuf_en = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__outbuf_d);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__outbuf_q);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__kk_idx = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_end = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_zero_current = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__last_pos_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__xk_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__transition_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_addr_q = VL_RAND_RESET_I(12);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d_mux = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_outshim = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__done_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_done_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__wr_fifo_pop_outshim = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_done_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__outbounds_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__x_counter_i__i_clear = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__til_xy_counter_i__i_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__til_k_counter_i__i_en = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_d = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_q = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d1 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q1 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d2 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q2 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_insel = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d1 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q1 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d2 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q2 = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_insel = VL_RAND_RESET_I(15);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel = VL_RAND_RESET_I(15);
    VL_RAND_RESET_W(2176, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A);
    VL_RAND_RESET_W(2304, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_B);
    VL_RAND_RESET_W(2176, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C);
    VL_RAND_RESET_W(144, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch);
    VL_RAND_RESET_W(144, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cell_en);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__q0 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__q1 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__q2 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__q3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__addr_delay[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__mask_delay[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__wren_delay[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__addr_mod4 = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__mask_new = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT____Vlvbound_h007a097b__0 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT____Vlvbound_h88a2419d__0 = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT____Vlvbound_h1764f85b__0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT____Vlvbound_h9ebf736d__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_product);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_product_biased);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_shifted);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_scaled = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_with_zeropoint = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__comb_saturated = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage1_product_reg);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage1_biased_reg);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage2_scaled_reg = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage2_zpoint_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage2_shifted_wire);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage2_scaled_wire = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u0__DOT__stage3_saturated_reg = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_product);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_product_biased);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_shifted);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_scaled = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_with_zeropoint = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__comb_saturated = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage1_product_reg);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage1_biased_reg);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage2_scaled_reg = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage2_zpoint_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage2_shifted_wire);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage2_scaled_wire = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u1__DOT__stage3_saturated_reg = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_product);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_product_biased);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_shifted);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_scaled = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_with_zeropoint = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__comb_saturated = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage1_product_reg);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage1_biased_reg);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage2_scaled_reg = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage2_zpoint_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage2_shifted_wire);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage2_scaled_wire = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u2__DOT__stage3_saturated_reg = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_product);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_product_biased);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_shifted);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_scaled = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_with_zeropoint = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__comb_saturated = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage1_product_reg);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage1_biased_reg);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage2_scaled_reg = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage2_zpoint_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage2_shifted_wire);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage2_scaled_wire = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__u3__DOT__stage3_saturated_reg = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(150, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__149__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__148__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__147__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arid_d = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arid_q = VL_RAND_RESET_I(5);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__aw_wrap_size = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__ar_wrap_size = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__latency_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__latency_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__latency_cnt_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rlast_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rlast_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_b_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_r_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT____Vcellout__i_b_spill_register__valid_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT____Vcellout__i_r_spill_register__valid_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__unnamedblk1__DOT__dummy_thing = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(8);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_select_q = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_rden = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_wren = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__srama_output_q);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__sramb_output_q);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__sramc_output_q);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__accel_word_sel = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__accel_word_sel_shim_q = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__accel_rdata_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__host_word_sel = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__host_word_sel_shim_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__host_rdata_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1 = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__accel_word_sel = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__accel_word_sel_shim_q = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__accel_rdata_elements);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0 = VL_RAND_RESET_I(10);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1 = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__accel_word_sel = VL_RAND_RESET_I(16);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__accel_word_sel_shim_q = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__accel_rdata_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__host_word_sel = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__host_word_sel_shim_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__host_rdata_elements);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0 = VL_RAND_RESET_I(11);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1 = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_1 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_0 = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem[__Vi0]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__ram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wren = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout);
    VL_RAND_RESET_W(128, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout_q1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.atDefault() = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__cen = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__rdwen = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram__DOT__unnamedblk2__DOT__t = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(148, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__147__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__146__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__ = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_d = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_d = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_q = VL_RAND_RESET_I(4);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__aw_wrap_size = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__ar_wrap_size = VL_RAND_RESET_I(32);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_d = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q = VL_RAND_RESET_I(9);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_b_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_b_spill_register__valid_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_r_spill_register__valid_o = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__unnamedblk1__DOT__dummy_thing = VL_RAND_RESET_I(3);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(7);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(136, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(136, vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v5 = 0;
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15 = 0;
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(578, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o);
    VL_RAND_RESET_W(148, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o);
    VL_RAND_RESET_W(150, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d);
    VL_RAND_RESET_W(148, vlSelf->__Vchglast__TOP__sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i____Vcellinp__genblk1__DOT__fma_i__i_rstn = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i__genblk1__DOT__fma_i__DOT__fma_i__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes);
    for (int __Vi0=0; __Vi0<267; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
