// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester___024root.h"

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__3(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfcbff775__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[7U] 
            << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
                      >> 0x1eU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U] 
            << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[7U] 
                      >> 0x1eU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U] 
            << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U] 
                      >> 0x1eU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U] 
        = ((0xffff8000U & vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U]) 
           | (0x7fffU & ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU] 
                          << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U] 
                                    >> 0x1eU))));
    __Vtemp_hfcbff775__0[1U] = (((IData)((((QData)((IData)(
                                                           ((((2U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                              & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent))) 
                                                             | (4U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                            | (8U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata)))) 
                                 << 0xbU) | (IData)(
                                                    ((0x78000000000ULL 
                                                      | (((QData)((IData)(
                                                                          ((((2U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent))) 
                                                                            | (5U 
                                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                                           | (9U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                                          << 0x26U) 
                                                         | ((QData)((IData)(
                                                                            (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state) 
                                                                              | (0xaU 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                                             | (6U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                                            << 0x25U))) 
                                                     >> 0x20U)));
    __Vtemp_hfcbff775__0[2U] = (((IData)((((QData)((IData)(
                                                           ((((2U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                              & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent))) 
                                                             | (4U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                            | (8U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata)))) 
                                 >> 0x15U) | (((IData)((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr))) 
                                               << 0xfU) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((((2U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent))) 
                                                                              | (4U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                                             | (8U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata))) 
                                                          >> 0x20U)) 
                                                 << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U] 
        = ((0x7fffU & vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[3U]) 
           | ((IData)((0x78000000000ULL | (((QData)((IData)(
                                                            ((((2U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent))) 
                                                              | (5U 
                                                                 == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                             | (9U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                            << 0x26U) 
                                           | ((QData)((IData)(
                                                              (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state) 
                                                                | (0xaU 
                                                                   == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                               | (6U 
                                                                  == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                              << 0x25U)))) 
              << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[4U] 
        = (((IData)((0x78000000000ULL | (((QData)((IData)(
                                                          ((((2U 
                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent))) 
                                                            | (5U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                           | (9U 
                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                          << 0x26U) 
                                         | ((QData)((IData)(
                                                            (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state) 
                                                              | (0xaU 
                                                                 == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                             | (6U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                            << 0x25U)))) 
            >> 0x11U) | (__Vtemp_hfcbff775__0[1U] << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[5U] 
        = ((__Vtemp_hfcbff775__0[1U] >> 0x11U) | (__Vtemp_hfcbff775__0[2U] 
                                                  << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__slv_reqs[6U] 
        = (0x3fffffffU & ((__Vtemp_hfcbff775__0[2U] 
                           >> 0x11U) | ((0x3ff8000U 
                                         & (((IData)((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr))) 
                                             >> 2U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((((2U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent))) 
                                                                            | (4U 
                                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
                                                                           | (8U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata))) 
                                                        >> 0x20U)) 
                                               >> 6U))) 
                                        | (0x3c000000U 
                                           & ((IData)((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr))) 
                                              >> 2U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U] 
            << 0x11U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U] 
                         >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U] 
            << 0x11U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U] 
                         >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
            << 0x11U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U] 
                         >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U] 
        = ((0xffff8000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U]) 
           | (0x7fffU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
                         >> 0xfU)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[0U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.mst_req_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.mst_req_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.mst_req_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[3U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.mst_req_o[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb 
        = (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                              >> 0xaU)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                              >> 9U)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                                             >> 8U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                                              >> 7U))))))));
}

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__4(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[2U] 
        = ((0x3ffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[2U]) 
           | ((IData)((0x1ffffffffffULL & (((QData)((IData)(
                                                            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[0U]))))) 
              << 0x12U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[3U] 
        = ((0xf8000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[3U]) 
           | (((IData)((0x1ffffffffffULL & (((QData)((IData)(
                                                             vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[0U]))))) 
               >> 0xeU) | ((IData)(((0x1ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[0U])))) 
                                    >> 0x20U)) << 0x12U)));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_hb3b2ab35_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h5c4e377f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h7a61d9e9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h08fa367e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_hec48bbea_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h498e45c5_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h25c34ae7_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h6025bbce_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h2a6b1d3a_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h086c20a0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_h148250a9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_hd1936453_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_hf919b247_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsauria_tester__ConstPool__TABLE_hadf27503_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vsauria_tester__ConstPool__TABLE_h8c829085_0;

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__8(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__8\n"); );
    // Init
    SData/*8:0*/ __Vtableidx6;
    VlWide<3>/*95:0*/ __Vtemp_hbc15a9b9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc5e86a84__0;
    VlWide<5>/*159:0*/ __Vtemp_h738bff86__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__0__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__1__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xeU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__2__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xdU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__3__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xcU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__4__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xbU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__5__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 0xaU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__6__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 9U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__7__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 8U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 4U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__12__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__13__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__14__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE) 
              >> 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_clear) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_pop_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__15__KET____DOT__act_row_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_clearfifo) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full 
        = (((4U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__0__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
            << 0xfU) | (((4U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__1__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                         << 0xeU) | (((4U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                      << 0xdU) | ((
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                   << 0xcU) 
                                                  | (((4U 
                                                       == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                      << 0xbU) 
                                                     | (((4U 
                                                          == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                         << 0xaU) 
                                                        | (((4U 
                                                             == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                            << 9U) 
                                                           | (((4U 
                                                                == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                               << 8U) 
                                                              | (((4U 
                                                                   == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                  << 7U) 
                                                                 | (((4U 
                                                                      == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                     << 6U) 
                                                                    | (((4U 
                                                                         == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                        << 5U) 
                                                                       | (((4U 
                                                                            == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                           << 4U) 
                                                                          | (((4U 
                                                                               == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                              << 3U) 
                                                                             | (((4U 
                                                                                == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                                << 2U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__ptr_q)))))))))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__0__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
            << 0xfU) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__1__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                         << 0xeU) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                      << 0xdU) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__act_row_feeder_i.__PVT__fifo_i__DOT__empty))))))))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__0__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__1__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__2__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__3__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 4U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__4__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__5__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE) 
              >> 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_clear) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_pop_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_clearfifo) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full 
        = (((5U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__0__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
            << 7U) | (((5U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__1__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                       << 6U) | (((5U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                  << 5U) | (((5U == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                             << 4U) 
                                            | (((5U 
                                                 == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                << 3U) 
                                               | (((5U 
                                                    == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                   << 2U) 
                                                  | (((5U 
                                                       == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)) 
                                                      << 1U) 
                                                     | (5U 
                                                        == (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__ptr_q)))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__0__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
            << 7U) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__1__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                       << 6U) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                                  << 5U) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i.__PVT__fifo_i__DOT__empty))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3bU] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3bU]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3cU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3dU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3eU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3fU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x40U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x41U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x42U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x43U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x43U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x33U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x34U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x35U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x36U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x37U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x38U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x39U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x3aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2aU] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2aU]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2bU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2cU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2dU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2eU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x2fU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x30U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x31U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x32U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x32U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x22U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x23U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x24U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x25U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x26U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x27U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x28U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x29U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x19U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1aU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1bU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1cU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1dU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1eU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x1fU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x20U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x21U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x21U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x11U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x12U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x13U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x14U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x15U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x16U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x17U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x18U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[8U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[8U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[9U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xaU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xbU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xcU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xdU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xeU] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0xfU] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x10U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0x10U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3cU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3dU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3eU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3fU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x40U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x41U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x42U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x43U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x33U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x33U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x34U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x35U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x36U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x37U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x38U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x39U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3aU] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2bU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2cU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2dU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2eU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2fU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x30U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x31U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x32U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x22U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x22U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x23U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x24U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x25U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x26U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x27U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x28U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x29U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1aU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1bU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1cU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1dU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1eU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x1fU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x20U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x21U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x11U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x11U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x12U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x13U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x14U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x15U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x16U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x17U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x18U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[9U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xaU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xbU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xcU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xdU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xeU] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0xfU] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x10U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                   >> 0x20U));
    __Vtableidx6 = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt) 
                     << 4U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en 
        = Vsauria_tester__ConstPool__TABLE_hb3b2ab35_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag 
        = Vsauria_tester__ConstPool__TABLE_h5c4e377f_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_start 
        = Vsauria_tester__ConstPool__TABLE_h7a61d9e9_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en 
        = Vsauria_tester__ConstPool__TABLE_h08fa367e_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_clear 
        = Vsauria_tester__ConstPool__TABLE_hec48bbea_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_feed_en 
        = Vsauria_tester__ConstPool__TABLE_h5c4e377f_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_feed_clear 
        = Vsauria_tester__ConstPool__TABLE_h498e45c5_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_outbuf_done 
        = Vsauria_tester__ConstPool__TABLE_h25c34ae7_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done 
        = Vsauria_tester__ConstPool__TABLE_h6025bbce_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__sramc_wren_d 
        = Vsauria_tester__ConstPool__TABLE_h2a6b1d3a_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__psm_sramc_rden 
        = Vsauria_tester__ConstPool__TABLE_h08fa367e_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en 
        = Vsauria_tester__ConstPool__TABLE_h086c20a0_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_fsm 
        = Vsauria_tester__ConstPool__TABLE_h148250a9_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt_en 
        = Vsauria_tester__ConstPool__TABLE_hd1936453_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt_clear 
        = Vsauria_tester__ConstPool__TABLE_hf919b247_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt_en 
        = Vsauria_tester__ConstPool__TABLE_h086c20a0_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt_clear 
        = Vsauria_tester__ConstPool__TABLE_hadf27503_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt_en 
        = Vsauria_tester__ConstPool__TABLE_h25c34ae7_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_out_status 
        = Vsauria_tester__ConstPool__TABLE_h8c829085_0
        [__Vtableidx6];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[0U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[1U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[2U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[3U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[4U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[5U] 
        = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__a_q) 
            << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__a_q));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[6U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                      << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                  << 0x10U) 
                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_A[7U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__a_q)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__a_q) 
                                                   << 0x10U) 
                                                  | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__a_q))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0U]) 
           | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[1U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[2U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[3U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[4U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[5U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[6U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)) 
            | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
                             << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[7U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[8U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[8U]) 
           | ((IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                           << 0x10U) 
                                          | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q) 
                                                       << 0x10U) 
                                                      | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__mac_sc_q))))) 
                       >> 0x20U)) >> 0x10U));
    __Vtemp_hbc15a9b9__0[0U] = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                 << 0x1fU) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                               << 0x1eU) 
                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__3__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__4__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))))))))))))))));
    __Vtemp_hbc15a9b9__0[1U] = (IData)((((QData)((IData)(
                                                         (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cswitch_arr_q) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                               << 0x1eU) 
                                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))))))))))))))))))));
    __Vtemp_hbc15a9b9__0[2U] = (IData)(((((QData)((IData)(
                                                          (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cswitch_arr_q) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                               << 0xfU) 
                                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                     << 0xdU) 
                                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                           << 0xbU) 
                                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__0__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                             << 0x1fU) 
                                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                << 0x1eU) 
                                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                   << 0x1dU) 
                                                                  | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                      << 0x1cU) 
                                                                     | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                         << 0x1bU) 
                                                                        | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                            << 0x1aU) 
                                                                           | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__1__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__2__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hc5e86a84__0[0U] = (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                 << 0x1fU) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                               << 0x1eU) 
                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__5__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__6__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q))))))))))))))))))))))))))))))));
    __Vtemp_h738bff86__0[0U] = ((__Vtemp_hc5e86a84__0[0U] 
                                 << 0x10U) | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__0__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                               << 0xfU) 
                                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__1__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__2__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__3__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__4__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__5__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__6__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                 << 9U) 
                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__7__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__8__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__9__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__10__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__11__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__12__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__13__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__14__KET____DOT__sa_processing_element_i.__PVT__cswitch_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__y_axis__BRA__7__KET____DOT__x_axis__BRA__15__KET____DOT__sa_processing_element_i.__PVT__cswitch_q)))))))))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[0U] 
        = __Vtemp_h738bff86__0[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[1U] 
        = ((__Vtemp_hc5e86a84__0[0U] >> 0x10U) | (__Vtemp_hbc15a9b9__0[0U] 
                                                  << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[2U] 
        = ((__Vtemp_hbc15a9b9__0[0U] >> 0x10U) | (__Vtemp_hbc15a9b9__0[1U] 
                                                  << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[3U] 
        = ((__Vtemp_hbc15a9b9__0[1U] >> 0x10U) | (__Vtemp_hbc15a9b9__0[2U] 
                                                  << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_cswitch[4U] 
        = (__Vtemp_hbc15a9b9__0[2U] >> 0x10U);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__sa_array_i__i_reg_clear 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_reg_clear) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                 >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 0xeU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 0xdU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 0xcU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 0xaU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 9U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any) 
                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                 >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 0xeU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 0xdU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 0xcU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 0xaU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 9U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE)) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cols_active_BE))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT____Vcellinp__context_switch_controller_i__i_clear) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_d = 0U;
    } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__pop_shim_init_d = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                 >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                 >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE)) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                 >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 6U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 5U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 4U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 3U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1) 
                             >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step 
        = (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step) 
                    + (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__mask_q1))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_d 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__fifo_pop_q) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_feed_clear))
            ? 0U : (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_q) 
                             + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__elm_cnt_step))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_outbuf_done) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_q)) 
           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_outbuf_start) 
                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_outbuf_reset))));
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_clear)))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__i = 8U;
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__fifo_push = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en) {
        if ((0xffU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__fifo_push = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d1 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q1;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d2 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q2;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_ov_flag = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_insel 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q1;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_insel 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q1;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_insel 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q2;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_insel 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q2;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel 
        = (0x7fffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_insel) 
                      + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_ckstep)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d1 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q1;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d2 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q2;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_ov_flag = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel 
        = (0x7fffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_insel) 
                      + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cystep)));
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__psm_top_i__i_fsm_reset) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d1 = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d2 = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d1 = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d2 = 0U;
    } else {
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel) 
             >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cklim))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_ov_flag = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel = 0U;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel) 
             >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_til_cylim))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_ov_flag = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel = 0U;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d1 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d1 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel;
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_d2 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__sum_outsel;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_d2 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__sum_outsel;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__kk_idx 
        = (0xffffU & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag)
                         ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q1)
                         : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_counter_i__DOT__cnt_q2)) 
                       + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag)
                           ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q1)
                           : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_k_counter_i__DOT__cnt_q2))) 
                      + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__mask 
        = ((1U & (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en)) 
                   & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__done_outshim))) 
                  | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_start) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__wr_flag))))
            ? 0U : (0xffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_outshim)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_done 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__done_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__x_counter_i__i_clear 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__psm_top_i__i_fsm_reset) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en))));
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_dout_arr[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_dout_arr[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_dout_arr[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_dout_arr[3U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[3U] = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d) 
           | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_ctx_status) 
               << 3U) | (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any)) 
                           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any) 
                              & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any))) 
                          << 2U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any)) 
                                     << 1U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                                               & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d 
        = ((0xfffc00ffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_d) 
           | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_out_status) 
               << 0xdU) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_feed_status) 
                           << 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_clear) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d = 0U;
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__fifo_push) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d = 0U;
        }
        if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 7U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U));
                }
            }
        }
        if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              << 0x10U));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              << 0x10U));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              << 0x10U));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U] 
                              << 0x10U));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 6U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[3U]));
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              >> 0x10U));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              >> 0x10U));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              >> 0x10U));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 5U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              >> 0x10U));
                }
            }
        }
        if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              << 0x10U));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              << 0x10U));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              << 0x10U));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U] 
                              << 0x10U));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 4U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[2U]));
                }
            }
        }
        if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              >> 0x10U));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              >> 0x10U));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              >> 0x10U));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 3U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              >> 0x10U));
                }
            }
        }
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              << 0x10U));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              << 0x10U));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              << 0x10U));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U] 
                              << 0x10U));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 2U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[1U]));
                }
            }
        }
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              >> 0x10U));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              >> 0x10U));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              >> 0x10U));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                             >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags) 
                                 >> 1U))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              >> 0x10U));
                }
            }
        }
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__mask_q2))) {
            if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 7U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              << 0x10U));
                }
            }
            if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 6U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[3U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 5U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              << 0x10U));
                }
            }
            if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 4U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[2U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 3U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              << 0x10U));
                }
            }
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 2U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[1U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                               >> 1U)) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U] 
                              << 0x10U));
                }
            }
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))) {
                if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d)) 
                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags 
                        = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__map_flags));
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U] 
                        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_d[0U]) 
                           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__sram_elements[0U]));
                }
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d 
        = (0xffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_active_d) 
                    | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rows_active_BE))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d 
        = (0xffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_q) 
                      + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__kk_idx)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_ov_flag = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_ov_flag = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__x_counter_i__i_clear) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_d = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_d 
            = (0x7fffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_q) 
                          + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cxstep)));
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_d) 
             >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cxlim))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_ov_flag = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_counter_i__DOT__cnt_d = 0U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_d 
            = (0x7fffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_q) 
                          + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ckstep)));
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_d) 
             >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cklim))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_ov_flag = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_counter_i__DOT__cnt_d = 0U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU]) 
           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[3U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x33U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x33U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[3U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU]) 
           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[2U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x22U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x22U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[2U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U]) 
           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[1U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x11U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x11U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[1U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[8U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[8U]) 
           | (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__psm_top_i__o_c_arr[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_zero_current 
        = (0x7ff8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_end 
        = (0xffffU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__kk_idx) 
                       + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_cxlim)) 
                      - (IData)(9U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end 
        = (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_end));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__last_pos_flag 
        = (((IData)(7U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_zero_current)) 
           >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_end));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_zero_current) 
         > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__idx_end))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = 0xffU;
        if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__transition_flag_q) 
              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_start)) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__last_pos_flag))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk1__DOT__i = 8U;
            if ((0U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((1U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((2U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (2U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((3U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (3U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (4U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((5U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (5U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if (((6U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d))) 
                 & (6U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((7U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
        } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__transition_flag_q) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_start))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk2__DOT__i = 8U;
            if ((0U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((1U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((2U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((3U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((5U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((6U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__sram_idx_d)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__last_pos_flag) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__unnamedblk3__DOT__i = 8U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                = (0x80U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            if ((1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x40U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((2U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x20U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((3U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (0x10U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((4U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (8U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((5U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (4U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((6U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (2U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
            if ((7U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__woffs_end))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d 
                    = (1U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__mask_d));
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__til_k_counter_i__i_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en) 
           & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_ov_flag) 
               & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_ov_flag)) 
              & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__til_xy_ov_flag)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__xk_flag 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__x_ov_flag) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__k_ov_flag));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x10U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[8U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[1U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x21U]) 
           | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x19U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x43U]) 
                                     | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU])))) 
                    << 0x20U) | (QData)((IData)(((0xffff0000U 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x32U]) 
                                                 | (0xffffU 
                                                    & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU]))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[3U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x43U]) 
                                      | (0xffffU & 
                                         vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x3bU])))) 
                     << 0x20U) | (QData)((IData)(((0xffff0000U 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x32U]) 
                                                  | (0xffffU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_array_i__DOT__mat_C[0x2aU]))))) 
                   >> 0x20U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__til_xy_counter_i__i_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__xk_flag));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[0U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[3U] 
              >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[0U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[0U]) 
           | ((IData)((((QData)((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                          << 0x10U) 
                                         | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                            >> 0x10U)))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[3U]))))) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[1U] 
        = (((IData)((((QData)((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                        << 0x10U) | 
                                       (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                        >> 0x10U)))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[3U]))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                                      << 0x10U) 
                                                     | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[2U] 
                                                        >> 0x10U)))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[3U])))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[0U]) 
                                     | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[1U])))) 
                    << 0x10U) | (QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[1U] 
                                                 >> 0x10U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[3U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[3U]) 
           | (IData)(((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[0U]) 
                                         | (0xffffU 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[1U])))) 
                        << 0x10U) | (QData)((IData)(
                                                    (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[1U] 
                                                     >> 0x10U)))) 
                      >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[3U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[3U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__sa_array_i__o_c_arr[0U] 
              << 0x10U));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_fsm) 
         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_arr_din[3U];
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__rd_feed_en) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_obus[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_obus[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_obus[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__buff_obus[3U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_din[3U] = 0U;
    }
}

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__9(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall 
        = (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__0__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
              > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__0__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
            << 0xfU) | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__1__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                           > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__1__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                          & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                         << 0xeU) | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                        > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__2__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                       & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                      << 0xdU) | ((
                                                   (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                     > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__3__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                   << 0xcU) 
                                                  | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                        > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__4__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                       & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                      << 0xbU) 
                                                     | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                           > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__5__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                          & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                         << 0xaU) 
                                                        | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                              > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__6__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                            << 9U) 
                                                           | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                 > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                               << 8U) 
                                                              | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                    > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                   & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                  << 7U) 
                                                                 | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                       > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                      & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                     << 6U) 
                                                                    | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                          > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                        << 5U) 
                                                                       | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                             > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                           << 4U) 
                                                                          | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                                > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                              << 3U) 
                                                                             | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                                > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__13__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                                > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__14__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                                                > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__15__KET____DOT__act_row_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__finalpush_q2))))))))))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall 
        = (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__0__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
              > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__0__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
            << 7U) | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__1__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                         > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__1__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                        & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                       << 6U) | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                    > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__2__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                   & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                                  << 5U) | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                               > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__3__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                              & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                  > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__4__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                                                << 3U) 
                                               | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                     > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__5__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                                                   << 2U) 
                                                  | (((((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                        > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                       & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))) 
                                                      << 1U) 
                                                     | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__elm_number) 
                                                         > (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i.__PVT__feed_data_manager_i__DOT__n_free_regs)) 
                                                        & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__finalpush_q2))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                 >> 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 0xeU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 0xdU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 0xcU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 0xaU)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 9U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any) 
                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                 >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall) 
                    >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any) 
                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__pipeline_regs_en 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_feeder_en) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__cnt_en 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_cnt_en) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_q) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_cnt_en)) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any)) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__pipeline_regs_en 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_feeder_en) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_q) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_cnt_en)) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any)) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__cnt_en 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_cnt_en) 
            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
    if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
    } else if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
        } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear 
                = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q));
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            if ((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 1U;
            }
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            if ((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 1U;
            }
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 0U;
            if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt))) {
                if ((1U & ((((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any)) 
                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any))) 
                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
                }
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
        }
    } else if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            if ((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 1U;
            }
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            if ((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 1U;
            }
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 0U;
            if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt))) {
                if ((1U & ((((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any)) 
                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any))) 
                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any))))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
                }
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear 
                = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate));
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt_clear = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_wei_done 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__done_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__cnt_en));
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_d = 1U;
        if ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_d = 0U;
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_d = 0U;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pre_feeding_flag) 
             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag_shim)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_d = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush)
            ? 0U : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__woffs_outshim));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_valid) 
             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__outbounds_q1))) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush)) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_finalpush)) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__transition_q2))));
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_d = 1U;
        if ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_d = 0U;
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_d = 0U;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pre_feeding_flag) 
             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag_shim)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_d = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT____Vcellinp__feeders_fsm_i__i_fsm_reset) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0U;
    } else if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0U;
    } else if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0U;
            } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
                if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT____Vcellinp__feeders_fsm_i__i_fsm_reset) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0U;
                }
            } else if ((0x14U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__b_cnt))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
                if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any)) 
                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate)) 
                     & (0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q)))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0xcU;
                }
            } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0xbU;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
                   & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0xaU;
            }
        } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag_shim))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 9U;
        }
    } else if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
                if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag_shim))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 9U;
                }
            } else if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim) 
                          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag_shim)) 
                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q)) 
                        & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag_shim)) 
                           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 9U;
            } else if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_til_done_shim) 
                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_ov_flag_shim)) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 7U;
            } else if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_til_done_shim) 
                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_ov_flag_shim)) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 8U;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)) 
                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_full_any))) 
                   & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_full_any))) 
                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any))) 
                 & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__stall_any)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 0xaU;
            }
        } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 5U;
        } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__pop_gate) 
                    & (0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__a_cnt)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 6U;
        }
    } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
            if ((1U & (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any)) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q)) 
                       & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any)) 
                          | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 4U;
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 2U;
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_start) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_d = 1U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__glob_woffs_mux = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__loc_woffs_mux = 0ULL;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__glob_woffs_mux 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__woffs_outshim;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__loc_woffs_mux 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellout__config_regs_i__o_loc_woffs;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__valid_data 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_valid) 
             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__outbounds_q1))) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush)) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__stall_any));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_transition_flag 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_ov_flag_q) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__start_q)) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_finalpush));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_act_til_done 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__til_done_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__cnt_en));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_done_edge 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_wei_done;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_q) 
         == ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_wei_reps) 
             - (IData)(1U)))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_done_edge) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_d = 0U;
        }
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_done_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_d 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_rep_cnt_q)));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_done_edge 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_act_til_done;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_q) 
         == ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_act_reps) 
             - (IData)(1U)))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_done_edge) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_d = 0U;
        }
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_done_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_d 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_rep_cnt_q)));
    }
}

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__10(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__10\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hd4fa11be__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U] 
        = ((0xfeffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U]) 
           | ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)) 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[7U] 
        = (0x111000U | (((IData)((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                                  << 4U)))) 
                         << 0x1dU) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__awlen) 
                                      << 0x15U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[8U] 
        = (((IData)((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                     << 4U)))) >> 3U) 
           | ((IData)(((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                        << 4U))) >> 0x20U)) 
              << 0x1dU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[9U] 
        = (1U & ((IData)(((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                           << 4U))) 
                          >> 0x20U)) >> 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[0U] 
        = ((0xfffffffcU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[0U]) 
           | (((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state)) 
               << 1U) | (1U & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.full)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[0U] 
        = (0x888000U | ((7U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[0U]) 
                        | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen) 
                           << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[1U] 
        = ((7U & ((IData)((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                           << 4U)))) 
                  | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen) 
                     >> 8U))) | (0xfffffff8U & (IData)((QData)((IData)(
                                                                       (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                                                        << 4U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
        = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U]) 
           | ((7U & (IData)(((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                              << 4U))) 
                             >> 0x20U))) | (0xfffffff8U 
                                            & (IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                                                        << 4U))) 
                                                       >> 0x20U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
        = ((0xffffffcfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U]) 
           | (0xfffffff0U & (((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
                              << 5U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state) 
                                        << 4U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
        = ((0x7fU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U]) 
           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                 ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[0U]) 
               << 0x18U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb) 
                             << 8U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                                        == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)) 
                                       << 7U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[3U] 
        = (((0x7fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                        ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[0U]) 
                      >> 8U)) | ((0x7fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb) 
                                           >> 0x18U)) 
                                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)) 
                                    >> 0x19U))) | (
                                                   (0xffff80U 
                                                    & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                                         ? 0U
                                                         : 
                                                        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[0U]) 
                                                       >> 8U)) 
                                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                                        ? 0U
                                                        : 
                                                       vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[1U]) 
                                                      << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[4U] 
        = ((0x7fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                       ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[1U]) 
                     >> 8U)) | ((0xffff80U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                                ? 0U
                                                : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[1U]) 
                                              >> 8U)) 
                                | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                     ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[2U]) 
                                   << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[5U] 
        = ((0x7fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                       ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[2U]) 
                     >> 8U)) | ((0xffff80U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                                ? 0U
                                                : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[2U]) 
                                              >> 8U)) 
                                | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                     ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[3U]) 
                                   << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U]) 
           | ((0x7fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                          ? 0U : vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[3U]) 
                        >> 8U)) | (0xffff80U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)
                                                  ? 0U
                                                  : 
                                                 vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[3U]) 
                                                >> 8U))));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.full 
        = (((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx)) 
            == (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx))) 
           & ((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx) 
                     >> 1U)) != (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx) 
                                       >> 1U))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U]) 
           | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U] 
              << 4U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[1U] 
        = ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U] 
            >> 0x1cU) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U] 
                         << 4U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[2U] 
        = ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U] 
            >> 0x1cU) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U] 
                         << 4U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[3U] 
        = ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U] 
            >> 0x1cU) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U] 
                         << 4U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = ((0xffff0U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]) 
           | (0xfffffU & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U] 
                          >> 0x1cU)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[5U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[5U]) 
           | ((IData)((0x5d6d6e90ULL | (((QData)((IData)(
                                                         (0xcU 
                                                          | (((0U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                              << 5U) 
                                                             | (((1U 
                                                                  == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                 << 4U) 
                                                                | (((2U 
                                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                    << 1U) 
                                                                   | (1U 
                                                                      & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state))))))))) 
                                         << 0x23U) 
                                        | (QData)((IData)(
                                                          (6U 
                                                           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state))))))) 
              << 4U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[6U] 
        = (0x1fffU & (((IData)((0x5d6d6e90ULL | (((QData)((IData)(
                                                                  (0xcU 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                       << 5U) 
                                                                      | (((1U 
                                                                           == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                          << 4U) 
                                                                         | (((2U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                             << 1U) 
                                                                            | (1U 
                                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state))))))))) 
                                                  << 0x23U) 
                                                 | (QData)((IData)(
                                                                   (6U 
                                                                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state))))))) 
                       >> 0x1cU) | ((IData)(((0x5d6d6e90ULL 
                                              | (((QData)((IData)(
                                                                  (0xcU 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                       << 5U) 
                                                                      | (((1U 
                                                                           == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                          << 4U) 
                                                                         | (((2U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state)) 
                                                                             << 1U) 
                                                                            | (1U 
                                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state))))))))) 
                                                  << 0x23U) 
                                                 | (QData)((IData)(
                                                                   (6U 
                                                                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state)))))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__mst_resp 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp;
    __Vtemp_hd4fa11be__0[1U] = (((IData)((((QData)((IData)(
                                                           ((((1U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                              & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent))) 
                                                             | (8U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                            | (5U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata)))) 
                                 << 0xbU) | (IData)(
                                                    ((0x78000000000ULL 
                                                      | (((QData)((IData)(
                                                                          ((((1U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent))) 
                                                                            | (9U 
                                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                           | (6U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                          << 0x26U) 
                                                         | ((QData)((IData)(
                                                                            (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state) 
                                                                              | (0xaU 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                             | (7U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                            << 0x25U))) 
                                                     >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U] 
        = ((0x7fffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[3U]) 
           | ((IData)((0x78000000000ULL | (((QData)((IData)(
                                                            ((((1U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent))) 
                                                              | (9U 
                                                                 == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                             | (6U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                            << 0x26U) 
                                           | ((QData)((IData)(
                                                              (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state) 
                                                                | (0xaU 
                                                                   == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                               | (7U 
                                                                  == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                              << 0x25U)))) 
              << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[4U] 
        = (((IData)((0x78000000000ULL | (((QData)((IData)(
                                                          ((((1U 
                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent))) 
                                                            | (9U 
                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                           | (6U 
                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                          << 0x26U) 
                                         | ((QData)((IData)(
                                                            (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state) 
                                                              | (0xaU 
                                                                 == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                             | (7U 
                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                            << 0x25U)))) 
            >> 0x11U) | (__Vtemp_hd4fa11be__0[1U] << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[5U] 
        = ((__Vtemp_hd4fa11be__0[1U] >> 0x11U) | ((0x3ff8000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((((1U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent))) 
                                                                                | (8U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                                | (5U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata)))) 
                                                      >> 6U)) 
                                                  | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                                      << 0x1eU) 
                                                     | ((IData)(
                                                                ((((QData)((IData)(
                                                                                ((((1U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent))) 
                                                                                | (8U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                                | (5U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata))) 
                                                                 >> 0x20U)) 
                                                        << 0x1aU))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__slv_reqs[6U] 
        = (0x3fffffffU & ((0x7fffU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                       >> 2U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((((1U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                                               & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent))) 
                                                                              | (8U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                             | (5U 
                                                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata))) 
                                                          >> 0x20U)) 
                                                 >> 6U))) 
                          | ((0x3ff8000U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                             >> 2U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((((1U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
                                                                             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent))) 
                                                                            | (8U 
                                                                               == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
                                                                           | (5U 
                                                                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata))) 
                                                        >> 0x20U)) 
                                               >> 6U))) 
                             | (0x3c000000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                               >> 2U)))));
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__cen)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__rdwen)))) {
            if ((1U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr) 
                    = (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                       >> 0x18U);
            }
            if ((0x100U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(1U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & vlSelf->sauria_tester__DOT__axi_mem_req[3U]);
            }
            if ((0x10000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(2U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[3U] 
                                >> 8U));
            }
            if ((0x1000000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(3U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[3U] 
                                >> 0x10U));
            }
            if ((1U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(4U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (vlSelf->sauria_tester__DOT__axi_mem_req[3U] 
                       >> 0x18U);
            }
            if ((0x100U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(5U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & vlSelf->sauria_tester__DOT__axi_mem_req[4U]);
            }
            if ((0x10000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(6U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[4U] 
                                >> 8U));
            }
            if ((0x1000000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(7U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[4U] 
                                >> 0x10U));
            }
            if ((1U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(8U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (vlSelf->sauria_tester__DOT__axi_mem_req[4U] 
                       >> 0x18U);
            }
            if ((0x100U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(9U) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & vlSelf->sauria_tester__DOT__axi_mem_req[5U]);
            }
            if ((0x10000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xaU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[5U] 
                                >> 8U));
            }
            if ((0x1000000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xbU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[5U] 
                                >> 0x10U));
            }
            if ((1U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xcU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (vlSelf->sauria_tester__DOT__axi_mem_req[5U] 
                       >> 0x18U);
            }
            if ((0x100U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xdU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & vlSelf->sauria_tester__DOT__axi_mem_req[6U]);
            }
            if ((0x10000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xeU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[6U] 
                                >> 8U));
            }
            if ((0x1000000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U])) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem.at(
                                                                     ((IData)(0xfU) 
                                                                      + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                    = (0xffU & (vlSelf->sauria_tester__DOT__axi_mem_req[6U] 
                                >> 0x10U));
            }
        }
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                             >> 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                             >> 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U] 
            = ((0xfffffff8U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U]) 
               | (7U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                        >> 2U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (1U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U] 
            = ((7U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U]) 
               | (0xfffffff8U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[3U] 
            = (((6U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                       << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                  >> 0x1fU)) | (0xfffffff8U 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                                   << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[4U] 
            = ((0xffffffc0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[4U]) 
               | (((6U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                          << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                     >> 0x1fU)) | (0x38U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                                      << 1U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (2U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[4U] 
            = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[4U]) 
               | (0xffffffc0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 4U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[5U] 
            = (((0x30U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                          << 4U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                     >> 0x1cU)) | (0xffffffc0U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                                      << 4U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[6U] 
            = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[6U]) 
               | (((0x30U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                             << 4U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                        >> 0x1cU)) 
                  | (0x1c0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                               << 4U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (3U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[6U] 
            = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[6U]) 
               | (0xfffffe00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 7U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[7U] 
            = (((0x180U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                           << 7U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                      >> 0x19U)) | 
               (0xfffffe00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                               << 7U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[8U] 
            = ((0xfffff000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[8U]) 
               | (((0x180U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                              << 7U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                         >> 0x19U)) 
                  | (0xe00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                               << 7U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (4U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[8U] 
            = ((0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[8U]) 
               | (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 0xaU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[9U] 
            = (((0xc00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                           << 0xaU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                        >> 0x16U)) 
               | (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                 << 0xaU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xaU] 
            = ((0xffff8000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xaU]) 
               | (((0xc00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                              << 0xaU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                           >> 0x16U)) 
                  | (0x7000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                << 0xaU))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (5U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xaU] 
            = ((0x7fffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xaU]) 
               | (0xffff8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 0xdU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xbU] 
            = (((0x6000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                            << 0xdU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                         >> 0x13U)) 
               | (0xffff8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                 << 0xdU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xcU] 
            = ((0xfffc0000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xcU]) 
               | (((0x6000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                               << 0xdU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                            >> 0x13U)) 
                  | (0x38000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 0xdU))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (6U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xcU] 
            = ((0x3ffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xcU]) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 0x10U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xdU] 
            = (((0x30000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                             << 0x10U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                           >> 0x10U)) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                 << 0x10U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xeU] 
            = ((0xffe00000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xeU]) 
               | (((0x30000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                << 0x10U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                              >> 0x10U)) 
                  | (0x1c0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                  << 0x10U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (7U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xeU] 
            = ((0x1fffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xeU]) 
               | (0xffe00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0xfU] 
            = (((0x180000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                              << 0x13U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[0U] 
                                            >> 0xdU)) 
               | (0xffe00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0x10U] 
            = (0xffffffU & (((0x180000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                           << 0x13U)) 
                             | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[1U] 
                                >> 0xdU)) | (0xe00000U 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                                << 0x13U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                << 6U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                          >> 0x1aU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                << 6U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                          >> 0x1aU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U] 
            = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U]) 
               | (0x1ffU & ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                             << 6U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                       >> 0x1aU))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (1U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U] 
            = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                   << 0xfU) | (0x7e00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                          >> 0x11U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[3U] 
            = ((0x1ffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                          >> 0x11U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                         << 0xfU) | 
                                        (0x7e00U & 
                                         (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                          >> 0x11U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[4U] 
            = ((0xfffc0000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[4U]) 
               | ((0x1ffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                             >> 0x11U)) | (0x3fe00U 
                                           & ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                               << 0xfU) 
                                              | (0x7e00U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                    >> 0x11U))))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (2U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[4U] 
            = ((0x3ffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[4U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                   << 0x18U) | (0xfc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                             >> 8U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[5U] 
            = ((0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                            >> 8U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                        << 0x18U) | 
                                       (0xfc0000U & 
                                        (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                         >> 8U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[6U] 
            = ((0xf8000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[6U]) 
               | ((0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                               >> 8U)) | (0x7fc0000U 
                                          & ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                              << 0x18U) 
                                             | (0xfc0000U 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                   >> 8U))))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (3U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[6U] 
            = ((0x7ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[6U]) 
               | (0xf8000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[7U] 
            = (((0x7fffffeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                               << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                          >> 0x1fU)) 
               | (0xf8000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                 << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[8U] 
            = (((0x7fffffeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                               << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                          >> 0x1fU)) 
               | (0xf8000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                 << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[9U] 
            = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[9U]) 
               | (0xfU & ((0x7fffffeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                         << 1U)) | 
                          (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                           >> 0x1fU))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (4U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[9U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[9U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                   << 0xaU) | (0x3f0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                         >> 0x16U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xaU] 
            = ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                        >> 0x16U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                       << 0xaU) | (0x3f0U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                                      >> 0x16U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xbU] 
            = ((0xffffe000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xbU]) 
               | ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                           >> 0x16U)) | (0x1ff0U & 
                                         ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                           << 0xaU) 
                                          | (0x3f0U 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                >> 0x16U))))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (5U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xbU] 
            = ((0x1fffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xbU]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                   << 0x13U) | (0x7e000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                            >> 0xdU))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xcU] 
            = ((0x1fffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                           >> 0xdU)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                         << 0x13U) 
                                        | (0x7e000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                              >> 0xdU))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xdU] 
            = ((0xffc00000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xdU]) 
               | ((0x1fffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                              >> 0xdU)) | (0x3fe000U 
                                           & ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                               << 0x13U) 
                                              | (0x7e000U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                    >> 0xdU))))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (6U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xdU] 
            = ((0x3fffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xdU]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                   << 0x1cU) | (0xfc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                              >> 4U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xeU] 
            = ((0x3fffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                             >> 4U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                         << 0x1cU) 
                                        | (0xfc00000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                              >> 4U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xfU] 
            = ((0x80000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xfU]) 
               | ((0x3fffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                >> 4U)) | (0x7fc00000U 
                                           & ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                               << 0x1cU) 
                                              | (0xfc00000U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                    >> 4U))))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
           >> 0x19U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (7U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xfU] 
            = ((0x7fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0xfU]) 
               | (0x80000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0x10U] 
            = (((0x7fffffe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                           >> 0x1bU)) 
               | (0x80000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                 << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0x11U] 
            = (((0x7fffffe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[7U] 
                                           >> 0x1bU)) 
               | (0x80000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                 << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0x12U] 
            = (0xffU & ((0x7fffffe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[9U] 
                                        << 5U)) | (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[8U] 
                                                   >> 0x1bU)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                << 0x19U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                             >> 7U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                << 0x19U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                             >> 7U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                << 0x19U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                             >> 7U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                << 0x19U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                             >> 7U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[4U] 
            = ((0xfffc0000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[4U]) 
               | (0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                              >> 7U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (1U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[4U] 
            = ((0x3ffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[4U]) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 0xbU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[5U] 
            = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                             << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                          >> 0x15U)) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                 << 0xbU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[6U] 
            = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                             << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                          >> 0x15U)) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                 << 0xbU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[7U] 
            = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                             << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                          >> 0x15U)) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                 << 0xbU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[8U] 
            = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                             << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                          >> 0x15U)) 
               | (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 0xbU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[9U] 
            = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[9U]) 
               | (0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                          >> 0x15U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (2U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[9U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[9U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                   << 0x1dU) | (0x1ffffff0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                               >> 3U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xaU] 
            = ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                        >> 3U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                    << 0x1dU) | (0x1ffffff0U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                                    >> 3U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xbU] 
            = ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                        >> 3U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                    << 0x1dU) | (0x1ffffff0U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                                    >> 3U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xcU] 
            = ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                        >> 3U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                    << 0x1dU) | (0x1ffffff0U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                                    >> 3U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xdU] 
            = ((0xffc00000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xdU]) 
               | ((0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                           >> 3U)) | (0x3ffff0U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                                   >> 3U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (3U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xdU] 
            = ((0x3fffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xdU]) 
               | (0xffc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 0xfU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xeU] 
            = (((0x3f8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                              << 0xfU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                           >> 0x11U)) 
               | (0xffc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                 << 0xfU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0xfU] 
            = (((0x3f8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                              << 0xfU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                           >> 0x11U)) 
               | (0xffc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                 << 0xfU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x10U] 
            = (((0x3f8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                              << 0xfU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                           >> 0x11U)) 
               | (0xffc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                 << 0xfU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x11U] 
            = (((0x3f8000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                              << 0xfU)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                           >> 0x11U)) 
               | (0xffc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 0xfU)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x12U] 
            = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x12U]) 
               | (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                           >> 0x11U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (4U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x12U] 
            = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x12U]) 
               | (0xffffff00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x13U] 
            = (((0xfeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                          << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                     >> 0x1fU)) | (0xffffff00U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                                      << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x14U] 
            = (((0xfeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                          << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                     >> 0x1fU)) | (0xffffff00U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                                      << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x15U] 
            = (((0xfeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                          << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                     >> 0x1fU)) | (0xffffff00U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                                      << 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x16U] 
            = ((0xfc000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x16U]) 
               | (((0xfeU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                             << 1U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                        >> 0x1fU)) 
                  | (0x3ffff00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                   << 1U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (5U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x16U] 
            = ((0x3ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x16U]) 
               | (0xfc000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x17U] 
            = (((0x3f80000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                               << 0x13U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                             >> 0xdU)) 
               | (0xfc000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x18U] 
            = (((0x3f80000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                               << 0x13U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                             >> 0xdU)) 
               | (0xfc000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x19U] 
            = (((0x3f80000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                               << 0x13U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                             >> 0xdU)) 
               | (0xfc000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1aU] 
            = (((0x3f80000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                               << 0x13U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                             >> 0xdU)) 
               | (0xfc000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 0x13U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1bU] 
            = ((0xfffff000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1bU]) 
               | (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                            >> 0xdU)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (6U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1bU] 
            = ((0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1bU]) 
               | (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1cU] 
            = (((0xfe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                           << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                      >> 0x1bU)) | 
               (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                               << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1dU] 
            = (((0xfe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                           << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                      >> 0x1bU)) | 
               (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                               << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1eU] 
            = (((0xfe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                           << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                      >> 0x1bU)) | 
               (0xfffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                               << 5U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1fU] 
            = ((0xc0000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1fU]) 
               | (((0xfe0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                              << 5U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                         >> 0x1bU)) 
                  | (0x3ffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                    << 5U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (7U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1fU] 
            = ((0x3fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x1fU]) 
               | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                 << 0x17U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x20U] 
            = (((0x3f800000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                << 0x17U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[2U] 
                                              >> 9U)) 
               | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                 << 0x17U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x21U] 
            = (((0x3f800000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                << 0x17U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[3U] 
                                              >> 9U)) 
               | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                 << 0x17U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x22U] 
            = (((0x3f800000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                << 0x17U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[4U] 
                                              >> 9U)) 
               | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                 << 0x17U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x23U] 
            = (((0x3f800000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                << 0x17U)) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[5U] 
                                              >> 9U)) 
               | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                                 << 0x17U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0x24U] 
            = (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__src_req[6U] 
                          >> 9U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (0U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[0U] 
            = (IData)((0x7ffffffffULL & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                            >> 2U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[1U] 
            = ((0xfffffff8U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[1U]) 
               | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U))) 
                          >> 0x20U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (1U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[1U] 
            = ((7U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[1U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U)))) 
                  << 3U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U] 
            = ((0xffffffc0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U]) 
               | (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                 >> 2U)))) 
                   >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U))) 
                                         >> 0x20U)) 
                                << 3U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (2U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U] 
            = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[2U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U)))) 
                  << 6U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[3U] 
            = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[3U]) 
               | (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                 >> 2U)))) 
                   >> 0x1aU) | ((IData)(((0x7ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U))) 
                                         >> 0x20U)) 
                                << 6U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U] 
           >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_ar__src_ready_o)) 
         & (3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[3U] 
            = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[3U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                >> 2U)))) 
                  << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__data_q[4U] 
            = (0xfffU & (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                  >> 2U)))) 
                          >> 0x17U) | ((IData)(((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 9U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (0U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[0U] 
            = (IData)((0xfffffffffULL & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                            >> 7U))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[1U] 
            = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[1U]) 
               | (IData)(((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U))) 
                          >> 0x20U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (1U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[1U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[1U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U)))) 
                  << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[2U] 
            = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[2U]) 
               | (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                 >> 7U)))) 
                   >> 0x1cU) | ((IData)(((0xfffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 4U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (2U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[2U] 
            = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[2U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U)))) 
                  << 8U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[3U] 
            = ((0xfffff000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[3U]) 
               | (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                 >> 7U)))) 
                   >> 0x18U) | ((IData)(((0xfffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 8U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U] 
           >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_w__src_ready_o)) 
         & (3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[3U] 
            = ((0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[3U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                                >> 7U)))) 
                  << 0xcU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__data_q[4U] 
            = (0xffffU & (((IData)((0xfffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                        >> 7U)))) >> 0x14U) 
                          | ((IData)(((0xfffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[1U])) 
                                             >> 7U))) 
                                      >> 0x20U)) << 0xcU)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U] 
           >> 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (0U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[0U] 
            = (IData)((0x7ffffffffULL & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                            >> 0xcU))));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[1U] 
            = ((0xfffffff8U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[1U]) 
               | (IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU))) 
                          >> 0x20U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U] 
           >> 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (1U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[1U] 
            = ((7U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[1U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU)))) 
                  << 3U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U] 
            = ((0xffffffc0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U]) 
               | (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                 >> 0xcU)))) 
                   >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU))) 
                                         >> 0x20U)) 
                                << 3U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U] 
           >> 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (2U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U] 
            = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[2U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU)))) 
                  << 6U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[3U] 
            = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[3U]) 
               | (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                 >> 0xcU)))) 
                   >> 0x1aU) | ((IData)(((0x7ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU))) 
                                         >> 0x20U)) 
                                << 6U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U] 
           >> 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT____Vcellout__i_cdc_fifo_gray_src_aw__src_ready_o)) 
         & (3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[3U] 
            = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[3U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                >> 0xcU)))) 
                  << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__data_q[4U] 
            = (0xfffU & (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                     << 0x14U) | ((QData)((IData)(
                                                                  vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                  >> 0xcU)))) 
                          >> 0x17U) | ((IData)(((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[3U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__src_req[2U])) 
                                                       >> 0xcU))) 
                                                >> 0x20U)) 
                                       << 9U)));
    }
}

VL_INLINE_OPT void Vsauria_tester___024root___combo__TOP__1(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___combo__TOP__1\n"); );
    // Init
    VlWide<3>/*71:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0;
    VlWide<5>/*145:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0;
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0;
    VlWide<3>/*65:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0;
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0;
    VlWide<3>/*95:0*/ __Vtemp_hcfbf28c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hc52f42f2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha280b222__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4259c2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e65a331__0;
    VlWide<3>/*95:0*/ __Vtemp_h13fe0747__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c9a8add__0;
    VlWide<3>/*95:0*/ __Vtemp_h5277219f__0;
    VlWide<9>/*287:0*/ __Vtemp_hf5861dbc__0;
    VlWide<10>/*319:0*/ __Vtemp_hbd93860e__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel = 4U;
    if ((0x44100000U == (0xffffff00U & vlSelf->cfg_bus_lite_ar_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel = 0U;
    } else if ((0x44300000U == (0xffffffc0U & vlSelf->cfg_bus_lite_ar_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel = 1U;
    } else if ((0x44200000U == (0xfff00000U & vlSelf->cfg_bus_lite_ar_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel 
            = ((0U == (0xf0000U & vlSelf->cfg_bus_lite_ar_addr))
                ? 2U : 3U);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel = 4U;
    if ((0x44100000U == (0xffffff00U & vlSelf->cfg_bus_lite_aw_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel = 0U;
    } else if ((0x44300000U == (0xffffffc0U & vlSelf->cfg_bus_lite_aw_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel = 1U;
    } else if ((0x44200000U == (0xfff00000U & vlSelf->cfg_bus_lite_aw_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel 
            = ((0U == (0xf0000U & vlSelf->cfg_bus_lite_aw_addr))
                ? 2U : 3U);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[0U] 
        = (IData)((0x7a000000000ULL | (((QData)((IData)(vlSelf->cfg_bus_lite_w_valid)) 
                                        << 0x26U) | 
                                       (((QData)((IData)(vlSelf->cfg_bus_lite_ar_addr)) 
                                         << 5U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->cfg_bus_lite_ar_valid) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->cfg_bus_lite_r_ready))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U] 
        = (((IData)((((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__i_cfg_axi_awprot)) 
                      << 0x21U) | (((QData)((IData)(vlSelf->cfg_bus_lite_aw_valid)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cfg_bus_lite_w_data))))) 
            << 0xbU) | (IData)(((0x7a000000000ULL | 
                                 (((QData)((IData)(vlSelf->cfg_bus_lite_w_valid)) 
                                   << 0x26U) | (((QData)((IData)(vlSelf->cfg_bus_lite_ar_addr)) 
                                                 << 5U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->cfg_bus_lite_ar_valid) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->cfg_bus_lite_r_ready))))))) 
                                >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[2U] 
        = (((IData)((((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__i_cfg_axi_awprot)) 
                      << 0x21U) | (((QData)((IData)(vlSelf->cfg_bus_lite_aw_valid)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cfg_bus_lite_w_data))))) 
            >> 0x15U) | ((vlSelf->cfg_bus_lite_aw_addr 
                          << 0xfU) | ((IData)(((((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__i_cfg_axi_awprot)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(vlSelf->cfg_bus_lite_aw_valid)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->cfg_bus_lite_w_data)))) 
                                               >> 0x20U)) 
                                      << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[3U] 
        = (((0x7ffU & (vlSelf->cfg_bus_lite_aw_addr 
                       >> 0x11U)) | ((IData)(((((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__i_cfg_axi_awprot)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(vlSelf->cfg_bus_lite_aw_valid)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cfg_bus_lite_w_data)))) 
                                              >> 0x20U)) 
                                     >> 0x15U)) | (0x7800U 
                                                   & (vlSelf->cfg_bus_lite_aw_addr 
                                                      >> 0x11U)));
    __Vtemp_hcfbf28c0__0[0U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[1U] 
                                 << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0U] 
                                              >> 2U));
    __Vtemp_hcfbf28c0__0[1U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                                 << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[1U] 
                                              >> 2U));
    __Vtemp_hcfbf28c0__0[2U] = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                                      >> 2U));
    VL_EXTEND_WW(67,66, __Vtemp_hc52f42f2__0, __Vtemp_hcfbf28c0__0);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_hc52f42f2__0[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_hc52f42f2__0[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_hc52f42f2__0[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
              << 0x1eU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                 >> 2U));
    __Vtemp_ha280b222__0[0U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xaU] 
                                 << 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U] 
                                              >> 3U));
    __Vtemp_ha280b222__0[1U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                                 << 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xaU] 
                                              >> 3U));
    __Vtemp_ha280b222__0[2U] = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                                      >> 3U));
    VL_EXTEND_WW(67,66, __Vtemp_hd4259c2b__0, __Vtemp_ha280b222__0);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_hd4259c2b__0[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_hd4259c2b__0[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_hd4259c2b__0[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                             << 0x1dU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (7U & (4U | (3U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                             >> 3U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (1U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                    >> 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (2U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U]));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                    >> 4U)));
    __Vtemp_h9e65a331__0[0U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[7U] 
                                 << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[6U] 
                                           >> 0x19U));
    __Vtemp_h9e65a331__0[1U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[8U] 
                                 << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[7U] 
                                           >> 0x19U));
    __Vtemp_h9e65a331__0[2U] = (0xffU & ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U] 
                                          << 7U) | 
                                         (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[8U] 
                                          >> 0x19U)));
    VL_EXTEND_WW(73,72, __Vtemp_h13fe0747__0, __Vtemp_h9e65a331__0);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h13fe0747__0[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h13fe0747__0[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h13fe0747__0[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U] 
                        << 7U) | (0x70U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[8U] 
                                           >> 0x19U)))));
    __Vtemp_h0c9a8add__0[0U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x10U] 
                                 << 6U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
                                           >> 0x1aU));
    __Vtemp_h0c9a8add__0[1U] = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x11U] 
                                 << 6U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x10U] 
                                           >> 0x1aU));
    __Vtemp_h0c9a8add__0[2U] = (0xffU & ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x12U] 
                                          << 6U) | 
                                         (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x11U] 
                                          >> 0x1aU)));
    VL_EXTEND_WW(73,72, __Vtemp_h5277219f__0, __Vtemp_h0c9a8add__0);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h5277219f__0[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h5277219f__0[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h5277219f__0[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x1f0U & (0x100U | (0xf0U & ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x12U] 
                                            << 6U) 
                                           | (0x30U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x11U] 
                                                 >> 0x1aU)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((2U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                  >> 5U)) | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                                   >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[3U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[2U] 
                         >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[4U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[3U] 
                         >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[5U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[4U] 
                         >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[6U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[5U] 
                         >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[4U] 
        = ((0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                           << 0xbU)) | (0x3ffffU & 
                                        (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[6U] 
                                         >> 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[5U] 
        = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xcU] 
                         << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
                                      >> 0x15U)) | 
           (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xcU] 
                           << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[6U] 
        = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xdU] 
                         << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xcU] 
                                      >> 0x15U)) | 
           (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xdU] 
                           << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[7U] 
        = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xeU] 
                         << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xdU] 
                                      >> 0x15U)) | 
           (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xeU] 
                           << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[8U] 
        = (((0x3f800U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
                         << 0xbU)) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xeU] 
                                      >> 0x15U)) | 
           (0xfffc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
                           << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[9U] 
        = (0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
                   >> 0x15U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((2U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U] 
                  >> 1U)) | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0U] 
                                   >> 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((2U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
                  >> 0x18U)) | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[6U] 
                                      >> 0x18U)));
    __Vtemp_hf5861dbc__0[6U] = ((((IData)((0x1ffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                    >> 8U))))) 
                                  << 0x1dU) | (((0x1e000000U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                                    << 0x15U)) 
                                                | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.aw_region) 
                                                    << 0x15U) 
                                                   | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.aw_atop) 
                                                      << 0xfU))) 
                                               | ((0x4000U 
                                                   & ((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.aw_user) 
                                                      << 0xeU)) 
                                                  | (0x2000U 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                                                        >> 0xbU))))) 
                                | (0x1fffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                                              >> 0xbU)));
    __Vtemp_hf5861dbc__0[7U] = ((0x1fffU & (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                               >> 8U))))) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.aw_region) 
                                                >> 0xbU) 
                                               | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.aw_atop) 
                                                  >> 0x11U)))) 
                                | ((0x1fffe000U & ((IData)(
                                                           (0x1ffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                                   << 0x18U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                                     >> 8U))))) 
                                                   >> 3U)) 
                                   | ((IData)(((0x1ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                         >> 8U)))) 
                                               >> 0x20U)) 
                                      << 0x1dU)));
    __Vtemp_hf5861dbc__0[8U] = ((0x1fffU & ((IData)(
                                                    ((0x1ffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                               >> 8U)))) 
                                                     >> 0x20U)) 
                                            >> 3U)) 
                                | (0x1fffe000U & ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
                                                                   << 0x18U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
                                                                     >> 8U)))) 
                                                           >> 0x20U)) 
                                                  >> 3U)));
    __Vtemp_hbd93860e__0[1U] = (((IData)((((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.w_user)))) 
                                           << 0x3bU) 
                                          | (0x7ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) 
                                                      >> 0xbU)))))) 
                                 >> 0x15U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.w_user)))) 
                                                         << 0x3bU) 
                                                        | (0x7ffffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U])) 
                                                                  << 0x15U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) 
                                                                    >> 0xbU))))) 
                                                       >> 0x20U)) 
                                              << 0xbU));
    __Vtemp_hbd93860e__0[2U] = (((0x780U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
                                 | ((IData)(((((QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.w_user)))) 
                                               << 0x3bU) 
                                              | (0x7ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U])) 
                                                        << 0x15U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) 
                                                          >> 0xbU))))) 
                                             >> 0x20U)) 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->sauria_tester__DOT__axi_mem_req[0U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.w_user)))) 
                                                              << 0x3bU) 
                                                             | (0x7ffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) 
                                                                    << 0x35U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U])) 
                                                                       << 0x15U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) 
                                                                         >> 0xbU)))))) 
                                                    << 0xbU) 
                                                   | (((0x780U 
                                                        & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
                                                       | ((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.ar_region) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(vlSymsp->TOP__sauria_tester__DOT__dat_bus.ar_user) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]))));
    vlSelf->sauria_tester__DOT__axi_mem_req[1U] = __Vtemp_hbd93860e__0[1U];
    vlSelf->sauria_tester__DOT__axi_mem_req[2U] = __Vtemp_hbd93860e__0[2U];
    vlSelf->sauria_tester__DOT__axi_mem_req[3U] = (
                                                   ((0x7fU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
                                                    | (0x780U 
                                                       & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])) 
                                                   | (0xfffff800U 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
    vlSelf->sauria_tester__DOT__axi_mem_req[4U] = (
                                                   ((0x7fU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
                                                    | (0x780U 
                                                       & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) 
                                                   | (0xfffff800U 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]));
    vlSelf->sauria_tester__DOT__axi_mem_req[5U] = (
                                                   ((0x7fU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
                                                    | (0x780U 
                                                       & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U])) 
                                                   | (0xfffff800U 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]));
    vlSelf->sauria_tester__DOT__axi_mem_req[6U] = (
                                                   ((0x7fU 
                                                     & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
                                                    | (0x780U 
                                                       & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U])) 
                                                   | (__Vtemp_hf5861dbc__0[6U] 
                                                      << 0xbU));
    vlSelf->sauria_tester__DOT__axi_mem_req[7U] = (
                                                   (__Vtemp_hf5861dbc__0[6U] 
                                                    >> 0x15U) 
                                                   | (__Vtemp_hf5861dbc__0[7U] 
                                                      << 0xbU));
    vlSelf->sauria_tester__DOT__axi_mem_req[8U] = (
                                                   (__Vtemp_hf5861dbc__0[7U] 
                                                    >> 0x15U) 
                                                   | (__Vtemp_hf5861dbc__0[8U] 
                                                      << 0xbU));
    vlSelf->sauria_tester__DOT__axi_mem_req[9U] = (
                                                   __Vtemp_hf5861dbc__0[8U] 
                                                   >> 0x15U);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[2U] 
            >> 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U] 
            >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U] 
                 >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U] 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[0U] 
            >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[0U]);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            << 3U) | vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
            >> 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         << 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
            >> 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                         << 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_r_spill_reg__ready_i 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies) 
                 >> (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U] 
                           >> 8U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_b_spill_reg__ready_i 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies) 
                 >> (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                           >> 7U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            << 9U) | vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
            >> 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         << 9U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
            >> 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                         << 9U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0x123U >= (0x1ffU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[0U] 
            = (((0U == (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                         ((IData)(1U) + (0xfU & (((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                  (0xfU & (((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x92U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[1U] 
            = (((0U == (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                         ((IData)(2U) + (0xfU & (((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                  ((IData)(1U) + (0xfU & (((IData)(0x92U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[2U] 
            = (((0U == (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                         ((IData)(3U) + (0xfU & (((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                  ((IData)(2U) + (0xfU & (((IData)(0x92U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[3U] 
            = (((0U == (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                 ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                         ((IData)(4U) + (0xfU & (((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                  ((IData)(3U) + (0xfU & (((IData)(0x92U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x92U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[4U] 
            = (0x3ffffU & (((0U == (0x1fU & ((IData)(0x92U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                             ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                                     ((IData)(5U) + 
                                      (0xfU & (((IData)(0x92U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                               >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x92U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[
                              ((IData)(4U) + (0xfU 
                                              & (((IData)(0x92U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x92U) 
                                           * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[4U] = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                 >> 4U)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
              >> 4U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ vlSelf->sauria_tester__DOT__axi_mem_req[0U]));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->sauria_tester__DOT__axi_mem_req[0U]);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q)))) {
        if ((2U & vlSelf->sauria_tester__DOT__axi_mem_req[0U])) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_d 
                = (0xfU & vlSelf->sauria_tester__DOT__axi_mem_req[2U]);
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_d 
                = (0x1ffU & ((IData)(1U) + (vlSelf->sauria_tester__DOT__axi_mem_req[0U] 
                                            >> 0x18U)));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_d 
                = (3U & (vlSelf->sauria_tester__DOT__axi_mem_req[0U] 
                         >> 0x13U));
        }
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__aw_wrap_size 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__ar_wrap_size 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d 
        = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                            >> 9U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                            >> 8U)))))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[0U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                >> 0xbU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                             >> 0xaU)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                            >> 0xdU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                            >> 0xcU)))))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[1U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                >> 0xfU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                             >> 0xeU)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                            >> 0x11U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                            >> 0x10U)))))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[2U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                >> 0x13U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                             >> 0x12U)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                            >> 0x15U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                            >> 0x14U)))))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wmask[3U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                >> 0x17U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
                                                             >> 0x16U)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wren 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q) 
           & (vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
              >> 5U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = (0x7ffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q)))) {
        if ((0x1000000U & vlSelf->sauria_tester__DOT__axi_mem_req[6U])) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_d 
                = (0xfU & ((vlSelf->sauria_tester__DOT__axi_mem_req[9U] 
                            << 3U) | (vlSelf->sauria_tester__DOT__axi_mem_req[8U] 
                                      >> 0x1dU)));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_d 
                = (3U & (vlSelf->sauria_tester__DOT__axi_mem_req[7U] 
                         >> 0x10U));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_d 
                = (0x1ffU & ((IData)(1U) + (0xffU & 
                                            (vlSelf->sauria_tester__DOT__axi_mem_req[7U] 
                                             >> 0x15U))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                = (0x80000U | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = (0xdffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q) {
        if (((IData)((0xa0U == (0xa0U & vlSelf->sauria_tester__DOT__axi_mem_req[2U]))) 
             & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_d = 0U;
        }
        if (((vlSelf->sauria_tester__DOT__axi_mem_req[2U] 
              >> 5U) & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__))) {
            if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q) 
                 < (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_d 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q)));
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d 
                    = ((0U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q))
                        ? vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q
                        : ((1U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q))
                            ? ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d) 
                               | (((IData)(1U) + (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q 
                                                  >> 4U)) 
                                  << 4U)) : ((2U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q))
                                              ? (((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q 
                                                   & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__aw_wrap_size) 
                                                  == vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__aw_wrap_size)
                                                  ? 
                                                 (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q 
                                                  - vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__aw_wrap_size)
                                                  : 
                                                 ((0xfU 
                                                   & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d) 
                                                  | (((IData)(1U) 
                                                      + 
                                                      (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q 
                                                       >> 4U)) 
                                                     << 4U)))
                                              : vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q)));
            }
        }
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            = ((0xdffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]) 
               | (0x20000U & ((~ ((IData)((0xa0U == 
                                           (0xa0U & 
                                            vlSelf->sauria_tester__DOT__axi_mem_req[2U]))) 
                                  & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__))) 
                              << 0x11U)));
    } else if ((0x1000000U & vlSelf->sauria_tester__DOT__axi_mem_req[6U])) {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_d = 1U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_d = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d 
            = ((vlSelf->sauria_tester__DOT__axi_mem_req[8U] 
                << 3U) | (vlSelf->sauria_tester__DOT__axi_mem_req[7U] 
                          >> 0x1dU));
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = ((0xe03ffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]) 
           | (0xffc00U & (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_b_spill_register__valid_o) 
                           << 0x10U) | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_q) 
                                         << 0xcU) | 
                                        (0xc00U & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                   << 9U))))));
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_b_spill_register__valid_o) {
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_b_ready) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                = (0xeffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
        }
    } else if ((((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q) 
                 & (0xa0U == (0xa0U & vlSelf->sauria_tester__DOT__axi_mem_req[2U]))) 
                & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_b_ready))) {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            = (0x10000U | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            = (0xff3ffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_r_spill_reg__ready_i)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_r_spill_reg__ready_i));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_b_spill_reg__ready_i)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellinp__gen_mux__DOT__i_b_spill_reg__ready_i));
    if ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_valid 
            = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids) 
                     >> (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop 
            = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids) 
                 >> (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_ready)) 
               & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[0U] 
                  >> 1U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__cen 
        = (1U & (~ ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wren) 
                    | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__rdwen 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wren))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_wren)
            ? vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q
            : ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden)
                ? vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q
                : 0U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            >> 0x10U) & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_b_ready));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            >> 8U) & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__unnamedblk1__DOT__dummy_thing 
        = ((4U & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
                  << 1U)) | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q) 
                              << 1U) | (1U & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                                              >> 8U))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = (0xbffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q) {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d = 1U;
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q) 
             != (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q))) {
            if ((1U & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready) 
                       | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag))))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_d 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q)));
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d 
                    = ((0U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q))
                        ? vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q
                        : ((1U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q))
                            ? ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d) 
                               | (((IData)(1U) + (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q 
                                                  >> 4U)) 
                                  << 4U)) : ((2U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q))
                                              ? (((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q 
                                                   & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__ar_wrap_size) 
                                                  == vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__ar_wrap_size)
                                                  ? 
                                                 (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q 
                                                  - vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__ar_wrap_size)
                                                  : 
                                                 ((0xfU 
                                                   & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d) 
                                                  | (((IData)(1U) 
                                                      + 
                                                      (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q 
                                                       >> 4U)) 
                                                     << 4U)))
                                              : vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q)));
            }
        }
        if ((((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
               >> 1U) & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                         >> 8U)) & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d = 0U;
        }
    } else {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d = 0U;
        if ((2U & vlSelf->sauria_tester__DOT__axi_mem_req[0U])) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_d = 0U;
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d 
                = vlSelf->sauria_tester__DOT__axi_mem_req[1U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d = 1U;
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                = (0x40000U | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_readies 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 1U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready) 
                      & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[3U] 
                << 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U] 
                             >> 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U] 
                << 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[3U] 
                             >> 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = (0x1ffU & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U] 
                         >> 9U));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = (0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__load_aw_lock = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_valid = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q)))) {
        if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__load_aw_lock = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready = 1U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_valid = 1U;
    } else if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_d = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__load_aw_lock = 1U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_valid = 1U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
        = ((0xfff801ffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U]) 
           | (0xfffffe00U & ((0x40000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_readies) 
                                          << 0x12U)) 
                             | ((0x20000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies) 
                                             << 0x11U)) 
                                | ((0x10000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_valids) 
                                                << 0x10U)) 
                                   | (0xfe00U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                 << 9U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
        = ((0x1fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U]) 
           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
              << 0x1dU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U] 
        = ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U]) 
           | (0xffU & ((0x40U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_readies) 
                                 << 5U)) | ((0x20U 
                                             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies) 
                                                << 4U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_valids) 
                                                   << 3U)) 
                                               | (0xfU 
                                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                     >> 3U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_pop)) 
          & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(1U) << (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffU & ((1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                  >> 8U)) << (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_readies 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 1U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready) 
                      & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
        = ((0xfff7ffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U]) 
           | (0x80000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_readies) 
                          << 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U] 
        = ((0x7fU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U]) 
           | (0x80U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_readies) 
                       << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[0U] 
        = (((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[5U] 
             << 0xbU) | (0x7f8U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
                                   >> 0x15U))) | ((6U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
                                                      >> 0x15U)) 
                                                  | (1U 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
                                                        >> 0x1cU))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[1U] 
        = ((7U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[5U] 
                  >> 0x15U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[6U] 
                                 << 0xbU) | (0x7f8U 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[5U] 
                                                >> 0x15U))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[2U] 
        = ((7U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[6U] 
                  >> 0x15U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[7U] 
                                 << 0xbU) | (0x7f8U 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[6U] 
                                                >> 0x15U))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[3U] 
        = ((7U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[7U] 
                  >> 0x15U)) | ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
                                 << 0xbU) | (0x7f8U 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[7U] 
                                                >> 0x15U))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
        = ((0xfffffff8U & ((0x100U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U] 
                                      << 1U)) | ((0x80U 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U] 
                                                     << 2U)) 
                                                 | ((0x60U 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
                                                        >> 0x19U)) 
                                                    | ((0x10U 
                                                        & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U]) 
                                                       | (8U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[9U] 
                                                             >> 3U))))))) 
           | (7U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
                    >> 0x15U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[4U] 
        = (0xfffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U]);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_aw_lock = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_ar_lock = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop 
        = (1U & ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                  >> 6U) & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                            >> 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
        = ((0x10fffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
           | ((QData)((IData)(((8U & ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                       >> 4U) & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)) 
                                                 << 3U))) 
                               | (7U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                        >> 4U))))) 
              << 0x24U));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
        = (0xffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o);
    if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q) {
        if ((0x100U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_aw_lock = 1U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
            = ((0xffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
               | ((QData)((IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                         >> 8U)))) 
                  << 0x28U));
    } else if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q))) {
        if ((0x800U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U])) {
            if ((1U & (~ (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                          >> 8U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_aw_lock = 1U;
            }
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
            = ((0xffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
               | ((QData)((IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
        = (0x1f7ffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o);
    if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q) {
        if ((8U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_ar_lock = 1U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
            = ((0x1f7ffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
               | ((QData)((IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                         >> 3U)))) 
                  << 0x23U));
    } else if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q))) {
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U])) {
            if ((1U & (~ (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                          >> 3U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_ar_lock = 1U;
            }
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
            = ((0x1f7ffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
               | ((QData)((IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[4U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
        = ((0x1f800000000ULL & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
           | (((QData)((IData)(((0x88U >= ((IData)(3U) 
                                           + (0x7fU 
                                              & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                                 << 5U))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(3U) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                                      << 5U)))))
                                      ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[
                                              (((IData)(0x22U) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                                          << 5U))))))) 
                                    | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[
                                       (((IData)(3U) 
                                         + (0x7fU & 
                                            ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                             << 5U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o) 
                                                     << 5U))))))
                                 : 0U))) << 3U) | (QData)((IData)(
                                                                  ((6U 
                                                                    & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[0U]) 
                                                                   | (1U 
                                                                      & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__mst_res[0U] 
                                                                         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[0U] 
            << 0x14U) | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[4U]);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[5U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[0U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[1U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[6U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[1U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[2U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[7U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[2U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[3U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[8U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[3U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[4U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__sauria_axi_resp[4U] 
           >> 0xcU);
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push) 
         & (4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop)) 
          & (4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_pop) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q;
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q;
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
                 & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[3U] 
        = ((0x7ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[3U]) 
           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
              << 0x1bU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[4U] 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o) 
            >> 5U) | ((IData)((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
                               >> 0x20U)) << 0x1bU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[5U] 
        = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[5U]) 
           | ((IData)((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__slv_res_o 
                       >> 0x20U)) >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
        = (0xdffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0xa0U == (0xa0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U])) 
                             & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U] 
                                >> 0x11U))));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xdffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0x20000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U]));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
           & ((0x127U >= (0x1ffU & ((IData)(0x92U) 
                                    + ((IData)(0x94U) 
                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                 (0xfU & (((IData)(0x92U) + ((IData)(0x94U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) 
                          >> 5U))] >> (0x1fU & ((IData)(0x92U) 
                                                + ((IData)(0x94U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
           & ((0x127U >= (0x1ffU & ((IData)(0x93U) 
                                    + ((IData)(0x94U) 
                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[
                 (0xfU & (((IData)(0x93U) + ((IData)(0x94U) 
                                             * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) 
                          >> 5U))] >> (0x1fU & ((IData)(0x93U) 
                                                + ((IData)(0x94U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids)) 
           | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U] 
                    >> 0x10U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids)) 
           | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U] 
                    >> 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids)) 
           | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
                    >> 3U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids)) 
           | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[8U] 
                    >> 0x1bU)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push) 
         & (4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop)) 
          & (4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_pop) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q;
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q;
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_n 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (IData)(((0xa0U == (0xa0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U])) 
                       & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
                          >> 5U)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
         ^ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down)
                        ? ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                           - (IData)(1U)) : ((IData)(1U) 
                                             + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 0U;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xdffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0x20000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
                              << 0xcU)));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
        = (0xbffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                = (0x40000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
        }
    } else if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U])) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                = (0x40000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
        = (0x7ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                = (0x80000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
        }
    } else if ((7U != (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) {
        if (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
              >> 0x18U) & ((0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) {
            if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                    = (0x80000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_valids));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_valids));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies 
        = ((0x1ffffffeU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                            >> 3U) & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                      << 1U))) | (1U 
                                                  & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                                                      >> 4U) 
                                                     & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
        = ((0xeffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
           | (0xfffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                          << 0x10U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies 
        = (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 1U) | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
                            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
        = ((0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
           | (0xfffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                          << 8U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                   >> 4U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x12U] = 0U;
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[7U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
                      >> 0x19U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[8U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[7U] 
                      >> 0x19U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
        = (0xffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[9U] 
                     << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[8U] 
                               >> 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
              << 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xffffffU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
                                                   >> 7U)) 
                                    | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                                       << 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0xffffffU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                         >> 7U)) | ((0x1000000U & (
                                                   sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                                                   >> 7U)) 
                                    | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
                                       << 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U]) 
           | (0xffffffU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
                           >> 7U)));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
            = (0x1000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]);
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[3U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[4U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[3U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[5U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[4U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[5U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[4U] 
        = (0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
                       >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0x1fU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
              << 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x1fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
                     >> 0x1aU)) | ((0x20U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
                                             >> 0x1aU)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                                      << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x1fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                     >> 0x1aU)) | ((0x20U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                                             >> 0x1aU)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                                      << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0x1fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                     >> 0x1aU)) | ((0x20U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                                             >> 0x1aU)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                                      << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
           | ((0x1fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                        >> 0x1aU)) | ((0x20U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                                                >> 0x1aU)) 
                                      | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[4U] 
                                         << 6U))));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h7578d0af__1 
            = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                     >> 5U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffffffdfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h7578d0af__1) 
                  << 5U));
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0 
        = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffffffefU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0) 
              << 4U));
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
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
              << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
                  >> 0x1eU)) | ((2U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[0U] 
                                       >> 0x1eU)) | 
                                (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                                 << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                     >> 0x1eU)) | ((2U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[1U] 
                                          >> 0x1eU)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0 
        = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[7U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
                      >> 0x19U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[8U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[7U] 
                      >> 0x19U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
        = (0xffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[9U] 
                     << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[8U] 
                               >> 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x1ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
              << 0x1aU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x1ffffffU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
                          >> 6U)) | ((0x2000000U & 
                                      (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[0U] 
                                       >> 6U)) | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                                                  << 0x1aU)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x1ffffffU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                          >> 6U)) | ((0x2000000U & 
                                      (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[1U] 
                                       >> 6U)) | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
                                                  << 0x1aU)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = (3U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0[2U] 
                 >> 6U));
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
            = (0x2000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU]);
    }
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[3U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[4U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[3U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[5U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[4U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
            << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[5U] 
                         >> 6U));
    sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[4U] 
        = (0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
                       >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU]) 
           | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
              << 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0x3fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
                     >> 0x19U)) | ((0x40U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[0U] 
                                             >> 0x19U)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0x3fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                     >> 0x19U)) | ((0x40U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[1U] 
                                             >> 0x19U)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0x3fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                     >> 0x19U)) | ((0x40U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[2U] 
                                             >> 0x19U)) 
                                   | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xfe000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | ((0x3fU & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                        >> 0x19U)) | ((0x40U & (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[3U] 
                                                >> 0x19U)) 
                                      | (sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0[4U] 
                                         << 7U))));
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
