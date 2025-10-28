// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester___024root.h"

extern const VlWide<8>/*255:0*/ Vsauria_tester__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vsauria_tester___024root___settle__TOP__1(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___settle__TOP__1\n"); );
    // Init
    VlWide<3>/*71:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h81ed4103__0;
    VlWide<5>/*145:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h96da388b__0;
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_h740212ab__0;
    VlWide<3>/*65:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_haab0f4de__0;
    CData/*0:0*/ sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT____Vlvbound_hdc238e0d__0;
    VlWide<6>/*191:0*/ __Vtemp_h608ae408__0;
    VlWide<12>/*383:0*/ __Vtemp_h3527998e__0;
    VlWide<3>/*95:0*/ __Vtemp_hcfbf28c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hc52f42f2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha280b222__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4259c2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e65a331__0;
    VlWide<3>/*95:0*/ __Vtemp_h13fe0747__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c9a8add__0;
    VlWide<3>/*95:0*/ __Vtemp_h5277219f__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[4U] 
              >> 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[4U] 
            >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                 >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U]);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arid_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arid_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_q;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_q)))) {
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arid_d 
                = (0x1fU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U]);
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_d 
                = (0x1ffU & ((IData)(1U) + (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U] 
                                            >> 0x18U)));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_d 
                = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U] 
                         >> 0x13U));
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__aw_wrap_size 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__ar_wrap_size 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[3U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[4U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[5U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[6U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[7U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
            << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                      >> 0x19U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
        = (0x1fffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q)))) {
        if ((0x2000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_d 
                = (0x1fU & ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[9U] 
                             << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[8U] 
                                       >> 0x1eU)));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_d 
                = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[7U] 
                         >> 0x11U));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_d 
                = (0x1ffU & ((IData)(1U) + (0xffU & 
                                            (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[7U] 
                                             >> 0x16U))));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                = (0x200000U | vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
        = (0x37ffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q) {
        if (((IData)((0x140U == (0x140U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U]))) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__147__KET__))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_d = 0U;
        }
        if (((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
              >> 6U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__147__KET__))) {
            if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_q) 
                 < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awlen_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_d 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_q)));
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d 
                    = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_q))
                        ? vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q
                        : ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_q))
                            ? ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d) 
                               | (((IData)(1U) + (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q 
                                                  >> 4U)) 
                                  << 4U)) : ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awburst_q))
                                              ? (((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__aw_wrap_size) 
                                                  == vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__aw_wrap_size)
                                                  ? 
                                                 (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q 
                                                  - vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__aw_wrap_size)
                                                  : 
                                                 ((0xfU 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d) 
                                                  | (((IData)(1U) 
                                                      + 
                                                      (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q 
                                                       >> 4U)) 
                                                     << 4U)))
                                              : vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q)));
            }
        }
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
            = ((0x37ffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]) 
               | (0x80000U & ((~ ((IData)((0x140U == 
                                           (0x140U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U]))) 
                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_q__BRA__147__KET__))) 
                              << 0x13U)));
    } else if ((0x2000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wburst_cnt_d = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_d 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[8U] 
                << 2U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[7U] 
                          >> 0x1eU));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
        = ((0x3807ffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]) 
           | (0x3ff800U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT____Vcellout__i_b_spill_register__valid_o) 
                            << 0x12U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awid_q) 
                                          << 0xdU) 
                                         | (0x1800U 
                                            & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                               << 0xaU))))));
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT____Vcellout__i_b_spill_register__valid_o) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_b_ready) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                = (0x3bffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
        }
    } else if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q) 
                 & (0x140U == (0x140U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U]))) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_b_ready))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
            = (0x40000U | vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
            = (0x3fe7ffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                            >> 0xaU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                            >> 9U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                >> 0xcU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                             >> 0xbU)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                            >> 0xeU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                            >> 0xdU)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                >> 0x10U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                             >> 0xfU)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                            >> 0x12U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                            >> 0x11U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                >> 0x14U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                             >> 0x13U)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U]) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                            >> 0x16U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                            >> 0x15U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U]) 
           | (0xffff0000U & (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                >> 0x18U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                                                             >> 0x17U)))) 
                                              << 0x10U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__wr_flag_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
              >> 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_chan = 2U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                 >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[0U]);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan = 0x2e9787954ULL;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan 
        = ((3ULL & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan) 
           | ((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_q)) 
              << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_valid = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o 
        = (0x7fffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o);
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask) 
           | ((0xff00U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                            >> 8U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                            >> 7U)))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask) 
           | (((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                 >> 0xaU)))) << 0x18U) 
              | (0xff0000U & ((- (IData)((1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                >> 9U)))) 
                              << 0x10U))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_wren = 0U;
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
           >> 0xbU) & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                       >> 6U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_ready))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_chan = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_valid = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o 
            = (0x18000000000ULL | vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o);
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_wren = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__lat_cnt_trigger = 0U;
    if (((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[0U] 
          >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_ready))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan 
            = (0x3fffffffcULL & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__r_chan);
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__lat_cnt_trigger = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o 
        = (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q) 
                 >> (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q) 
                           << 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty 
        = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o 
        = (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q) 
                 >> (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q) 
                           << 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty 
        = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT____Vcellinp__til_xy_counter_i__i_en 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_idxcnt_i__DOT__xk_flag));
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
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_d)
            ? (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q) 
                << 0x10U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q))
            : (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q) 
                << 0x10U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)));
    if ((IData)((0x80000000U == (0xc0000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 1U;
    }
    if ((IData)((0x40000000U == (0x60000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 2U;
    }
    if ((IData)((0x20000000U == (0x30000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 3U;
    }
    if ((IData)((0x10000000U == (0x18000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 4U;
    }
    if ((IData)((0x8000000U == (0xc000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 5U;
    }
    if ((IData)((0x4000000U == (0x6000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 6U;
    }
    if ((IData)((0x2000000U == (0x3000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 7U;
    }
    if ((IData)((0x1000000U == (0x1800000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 8U;
    }
    if ((IData)((0x800000U == (0xc00000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 9U;
    }
    if ((IData)((0x400000U == (0x600000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xaU;
    }
    if ((IData)((0x200000U == (0x300000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xbU;
    }
    if ((IData)((0x100000U == (0x180000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xcU;
    }
    if ((IData)((0x80000U == (0xc0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xdU;
    }
    if ((IData)((0x40000U == (0x60000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xeU;
    }
    if ((IData)((0x20000U == (0x30000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0xfU;
    }
    if ((IData)((0x10000U == (0x18000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x10U;
    }
    if ((IData)((0x8000U == (0xc000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x11U;
    }
    if ((IData)((0x4000U == (0x6000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x12U;
    }
    if ((IData)((0x2000U == (0x3000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x13U;
    }
    if ((IData)((0x1000U == (0x1800U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x14U;
    }
    if ((IData)((0x800U == (0xc00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x15U;
    }
    if ((IData)((0x400U == (0x600U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x16U;
    }
    if ((IData)((0x200U == (0x300U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x17U;
    }
    if ((IData)((0x100U == (0x180U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x18U;
    }
    if ((IData)((0x80U == (0xc0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x19U;
    }
    if ((IData)((0x40U == (0x60U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1aU;
    }
    if ((IData)((0x20U == (0x30U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1bU;
    }
    if ((IData)((0x10U == (0x18U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1cU;
    }
    if ((IData)((8U == (0xcU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1dU;
    }
    if ((IData)((4U == (6U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1eU;
    }
    if ((IData)((2U == (3U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx = 0x1fU;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx 
        = (0x7fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx) 
                    + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__elm_number)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new = 0U;
    if (((0U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x80000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((1U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (1U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x40000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((2U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (2U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x20000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((3U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (3U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x10000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((4U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (4U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x8000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((5U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (5U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x4000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((6U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (6U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x2000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((7U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (7U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x1000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((8U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (8U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x800000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((9U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (9U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x400000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xaU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xaU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x200000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xbU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xbU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x100000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xcU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xcU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x80000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xdU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xdU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x40000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xeU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xeU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x20000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0xfU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0xfU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x10000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x10U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x10U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x8000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x11U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x11U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x4000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x12U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x12U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x2000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x13U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x13U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x1000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x14U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x14U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x800U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x15U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x15U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x400U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x16U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x16U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x200U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x17U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x17U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x100U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x18U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x18U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x80U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x19U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x19U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x40U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1aU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1aU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x20U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1bU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1bU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (0x10U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1cU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1cU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (8U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1dU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1dU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (4U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1eU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1eU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (2U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (((0x1fU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
         & (0x1fU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__new_active_idx)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new 
            = (1U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
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
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_q) 
             != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arlen_q))) {
            if ((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_r_ready) 
                       | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__latency_cnt_flag))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_d 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_q)));
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d 
                    = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_q))
                        ? vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q
                        : ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_q))
                            ? ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d) 
                               | (((IData)(1U) + (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q 
                                                  >> 4U)) 
                                  << 4U)) : ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__arburst_q))
                                              ? (((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__ar_wrap_size) 
                                                  == vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__ar_wrap_size)
                                                  ? 
                                                 (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q 
                                                  - vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__ar_wrap_size)
                                                  : 
                                                 ((0xfU 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d) 
                                                  | (((IData)(1U) 
                                                      + 
                                                      (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q 
                                                       >> 4U)) 
                                                     << 4U)))
                                              : vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q)));
            }
        }
        if ((((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[0U] 
               >> 1U) & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                         >> 9U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__reg_r_ready))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 0U;
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 0U;
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U])) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_d = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U] 
                = (0x100000U | vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__axi_resp_d[4U]);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren)
            ? vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__awaddr_q
            : ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_rden)
                ? vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_q
                : 0U));
    if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0 
            = (0x7ffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__sram_idx_q) 
                         >> 3U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 4U));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_0[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__indata_1[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wmask_1[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1 
            = (0x7ffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__ifmap_idxcnt_i__DOT__sram_idx_q) 
                         >> 3U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_valid) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__b_ready));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_cfg_axi_lite__axi_resp_o;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_d = 0U;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__lat_cnt_trigger) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_d 
                = (1U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q)));
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_rden = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q)))) {
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__lat_cnt_trigger) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__latency_cnt_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_rden = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]) 
           | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))));
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o 
            = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                     >> 0x11U));
    }
    __Vtemp_h608ae408__0[1U] = ((0xffe00000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                << 0xaU)) 
                                | (IData)(((((QData)((IData)(
                                                             ((0xfU 
                                                               >= 
                                                               ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                                << 2U))
                                                               ? 
                                                              (0xffffU 
                                                               & ((0xfU 
                                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                                      >> 7U)) 
                                                                  << 
                                                                  ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                                   << 2U)))
                                                               : 0U))) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                                     >> 6U) 
                                                                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))))) 
                                                << 0x24U) 
                                               | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U])) 
                                                        >> 2U))))) 
                                           >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
        = ((3U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]) 
           | ((IData)((((QData)((IData)(((0xfU >= ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                   << 2U))
                                          ? (0xffffU 
                                             & ((0xfU 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                    >> 7U)) 
                                                << 
                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                 << 2U)))
                                          : 0U))) << 0x25U) 
                       | (((QData)((IData)((1U & ((
                                                   vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                   >> 6U) 
                                                  & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))))) 
                           << 0x24U) | (0xfffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U])) 
                                              >> 2U)))))) 
              << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
        = (((IData)((((QData)((IData)(((0xfU >= ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                 << 2U))
                                        ? (0xffffU 
                                           & ((0xfU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                  >> 7U)) 
                                              << ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o) 
                                                  << 2U)))
                                        : 0U))) << 0x25U) 
                     | (((QData)((IData)((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                 >> 6U) 
                                                & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty)))))) 
                         << 0x24U) | (0xfffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U])) 
                                            >> 2U)))))) 
            >> 0x1eU) | (__Vtemp_h608ae408__0[1U] << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[2U] 
        = ((__Vtemp_h608ae408__0[1U] >> 0x1eU) | ((
                                                   (0x7ff000U 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                                                       << 0xcU)) 
                                                   | (0xffcU 
                                                      & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                         >> 0x14U))) 
                                                  | (0xff800000U 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                        << 0xcU))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[3U] 
        = ((3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                  >> 0x14U)) | (((0x7ff000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                                               << 0xcU)) 
                                 | (0xffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                              >> 0x14U))) 
                                | (0xff800000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                  << 0xcU))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[4U] 
        = ((3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                  >> 0x14U)) | (((0x7ff000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                                               << 0xcU)) 
                                 | (0xffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                              >> 0x14U))) 
                                | (0xff800000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                  << 0xcU))));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
        = ((0xff800000U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U]) 
           | ((3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                     >> 0x14U)) | ((0x7ff000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                                                 << 0xcU)) 
                                   | (0xffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
                                                >> 0x14U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__start_idx = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[0U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[1U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[2U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[3U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[4U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[5U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[6U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[7U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[8U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[9U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[0xaU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[0xbU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shamt = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[1U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[2U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[3U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[0U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[1U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[2U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded[3U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[3U];
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__start_idx 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_init;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shamt 
            = (0x3fU & (((IData)(0x10U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_used_idx)) 
                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__start_idx)));
        VL_SHIFTL_WWI(384,384,32, __Vtemp_h3527998e__0, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_padded, 
                      ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shamt) 
                       << 3U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0U] 
            = __Vtemp_h3527998e__0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[1U] 
            = __Vtemp_h3527998e__0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[2U] 
            = __Vtemp_h3527998e__0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[3U] 
            = __Vtemp_h3527998e__0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] 
            = __Vtemp_h3527998e__0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] 
            = __Vtemp_h3527998e__0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] 
            = __Vtemp_h3527998e__0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] 
            = __Vtemp_h3527998e__0[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] 
            = __Vtemp_h3527998e__0[8U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] 
            = __Vtemp_h3527998e__0[9U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] 
            = __Vtemp_h3527998e__0[0xaU];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] 
            = __Vtemp_h3527998e__0[0xbU];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U] 
        = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U]) 
           | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] 
                                                 >> 8U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U]) 
           | (0xffff0000U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] 
                                              << 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U] 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U]) 
           | (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[4U] 
                         >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U]) 
           | (0xffffffU & ((0xff00U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] 
                                       >> 8U)) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[5U] 
                                                  >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[6U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U] 
        = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U]) 
           | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] 
                                                 >> 8U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U]) 
           | (0xffff0000U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] 
                                              << 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U] 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U]) 
           | (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[7U] 
                         >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U]) 
           | (0xffffffU & ((0xff00U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] 
                                       >> 8U)) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[8U] 
                                                  >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[9U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U] 
        = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U]) 
           | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] 
                                                 >> 8U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U]) 
           | (0xffff0000U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] 
                                              << 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U] 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U]) 
           | (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xaU] 
                         >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U]) 
           | ((0xff00U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] 
                          >> 8U)) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdata_shifted[0xbU] 
                                     >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d = 0U;
            if ((0U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x80000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((1U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x40000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((2U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x20000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((3U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x10000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((4U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x8000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((5U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x4000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((6U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x2000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((7U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x1000000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((8U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x800000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((9U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x400000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((0xaU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x200000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((0xbU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x100000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((0xcU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x80000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((0xdU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x40000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
            if ((0xeU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                    = (0x20000U | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
            }
        }
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d = 0U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__push) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
            = (0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop_shim_q) 
         & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.full)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
            = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
               | vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_new);
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_d) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d 
            = (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d 
            = (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d 
                          >> 0x10U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d 
            = (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d 
            = (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                          >> 0x10U));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_d[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d 
            = (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d 
                          >> 0x10U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d 
            = (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_en_d);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d 
            = (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d 
                          >> 0x10U));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d 
            = (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__regs_active_d);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[0U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[1U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[2U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[3U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[4U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[5U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[6U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[7U] = 0U;
    if ((1U & (~ (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                  >> 4U)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
    }
    if ((0x10U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr)) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
    }
    if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[0U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[1U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[2U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[3U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[4U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[5U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[6U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[7U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0 
            = (0x3ffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__sram_idx_q) 
                         >> 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1 
            = (0x3ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 5U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[0U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[1U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[2U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[3U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[4U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[5U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[6U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[7U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[7U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_0[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_data[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[0U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[1U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[2U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[3U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[4U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[5U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[6U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__indata_1[7U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0 
            = (0x3ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 5U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1 
            = (0x3ffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__wei_idxcnt_i__DOT__sram_idx_q) 
                         >> 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_0[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_phys_wmask[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[0U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[1U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[2U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[3U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[4U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[5U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[6U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wmask_1[7U] 
            = Vsauria_tester__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_rden = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_rden = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_rden = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_wren = 0U;
    if ((0x10000U == (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_rden 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_rden;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_wren 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_wren = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_wren = 0U;
    if ((0x10000U != (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr))) {
        if ((0x20000U == (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_rden 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_rden;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_wren 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren;
        }
        if ((0x20000U != (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr))) {
            if ((0x30000U == (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_rden 
                    = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_rden;
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_wren 
                    = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wren;
            }
        }
    }
    if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__addr_delay
                         [5U] >> 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_0 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__wren_delay
            [5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_1 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_wren;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_0[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
                << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
                          >> 0x19U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__indata_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__combined_output[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_0[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_wmask[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wmask_1[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_wmask_expanded[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_addr 
                         >> 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1 
            = (0x7ffU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__addr_delay
                         [5U] >> 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_0 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_wren;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_1 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__wren_delay
            [5U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                         >> 0x28U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                      >> 0x28U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                         >> 0x27U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                      >> 0x27U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                         >> 0x23U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                      >> 0x23U)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_wren)
            ? ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[3U] 
                << 0x11U) | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                             >> 0xfU)) : ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_rden)
                                           ? ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                               << 0x1bU) 
                                              | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[0U] 
                                                 >> 5U))
                                           : 0U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U] 
        = ((1U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[9U]) 
           | ((IData)((((QData)((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                          << 0x1bU) 
                                         | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
                                            >> 5U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0x800000U 
                                                     | (3U 
                                                        & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U])))))) 
              << 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xaU] 
        = (((IData)((((QData)((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                        << 0x1bU) | 
                                       (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
                                        >> 5U)))) << 0x20U) 
                     | (QData)((IData)((0x800000U | 
                                        (3U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U])))))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                                      << 0x1bU) 
                                                     | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
                                                        >> 5U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0x800000U 
                                                                 | (3U 
                                                                    & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]))))) 
                                  >> 0x20U)) << 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xbU] 
        = (0x100U | (((IData)(((((QData)((IData)(((
                                                   vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
                                                     >> 5U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0x800000U 
                                                              | (3U 
                                                                 & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]))))) 
                               >> 0x20U)) >> 0x1fU) 
                     | ((0xfe000000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                        << 2U)) | (
                                                   (0x1fffe00U 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                                       << 2U)) 
                                                   | ((0x40U 
                                                       & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U]) 
                                                      | (0x20U 
                                                         & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U]))))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xcU] 
        = ((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                  >> 0x1eU)) | (((0x1fffffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[2U] 
                                                << 2U)) 
                                 | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[1U] 
                                          >> 0x1eU))) 
                                | (0xfe000000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[2U] 
                                                  << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xdU] 
        = ((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[2U] 
                  >> 0x1eU)) | (((0x1fffffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[3U] 
                                                << 2U)) 
                                 | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[2U] 
                                          >> 0x1eU))) 
                                | (0xfe000000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[3U] 
                                                  << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xeU] 
        = ((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[3U] 
                  >> 0x1eU)) | (((0x1fffffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[4U] 
                                                << 2U)) 
                                 | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[3U] 
                                          >> 0x1eU))) 
                                | (0xfe000000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[4U] 
                                                  << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0xfU] 
        = ((1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[4U] 
                  >> 0x1eU)) | ((0x2000000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                               << 2U)) 
                                | ((0x1fffffcU & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                  << 2U)) 
                                   | (2U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[4U] 
                                            >> 0x1eU)))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x10U] 
        = ((0x3f80000U & ((IData)((4ULL | ((QData)((IData)(
                                                           ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                             << 5U) 
                                                            | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                               >> 0x1bU)))) 
                                           << 0xbU))) 
                          << 0x13U)) | (0xfc000000U 
                                        & ((IData)(
                                                   (4ULL 
                                                    | ((QData)((IData)(
                                                                       ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                                         << 5U) 
                                                                        | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                                           >> 0x1bU)))) 
                                                       << 0xbU))) 
                                           << 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x11U] 
        = ((1U & ((IData)((4ULL | ((QData)((IData)(
                                                   ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                     << 5U) 
                                                    | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                       >> 0x1bU)))) 
                                   << 0xbU))) >> 0xdU)) 
           | (((0x7fffeU & ((IData)((4ULL | ((QData)((IData)(
                                                             ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                               << 5U) 
                                                              | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                                 >> 0x1bU)))) 
                                             << 0xbU))) 
                            >> 0xdU)) | (0x3f80000U 
                                         & ((IData)(
                                                    ((4ULL 
                                                      | ((QData)((IData)(
                                                                         ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                                           << 5U) 
                                                                          | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                                             >> 0x1bU)))) 
                                                         << 0xbU)) 
                                                     >> 0x20U)) 
                                            << 0x13U))) 
              | (0xfc000000U & ((IData)(((4ULL | ((QData)((IData)(
                                                                  ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                                    << 5U) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                                      >> 0x1bU)))) 
                                                  << 0xbU)) 
                                         >> 0x20U)) 
                                << 0x13U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__slv_reqs[0x12U] 
        = (3U & ((1U & ((IData)(((4ULL | ((QData)((IData)(
                                                          ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                            << 5U) 
                                                           | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                              >> 0x1bU)))) 
                                          << 0xbU)) 
                                 >> 0x20U)) >> 0xdU)) 
                 | (0x7fffeU & ((IData)(((4ULL | ((QData)((IData)(
                                                                  ((vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
                                                                    << 5U) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
                                                                      >> 0x1bU)))) 
                                                  << 0xbU)) 
                                         >> 0x20U)) 
                                >> 0xdU))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_0 
        = ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q) 
               >> 2U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_wren));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_1 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q) 
            >> 2U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_wren));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_0 
        = ((~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q) 
               >> 1U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_wren));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_1 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q) 
            >> 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_wren));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rden 
        = ((0U == (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_rden));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__wren 
        = ((0U == (0xf0000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_cfg_axi_lite__DOT__ram_wren));
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
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_0 
        = (1U & (~ (((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay
                     [5U] : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_rden)) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_0))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_1 
        = (1U & (~ (((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramc_rden)
                      : vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__quantize_wrapper_i__DOT__quant_core__DOT__rden_delay
                     [5U]) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_1))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = 0x2badadd2U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__rden) {
        if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__ready_q) 
                       << 3U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_q) 
                                  << 2U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_q) 
                                             << 1U) 
                                            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_q)))));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xffffff7fU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_q) 
                      << 7U));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xfff0ffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_q) 
                       << 0x13U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_q) 
                                     << 0x12U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_q) 
                                                   << 0x11U) 
                                                  | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_q) 
                                                     << 0x10U)))));
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = (0xac000000U | ((0x7fffffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                                  | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_q) 
                                     << 0x17U)));
        } else if ((IData)((4U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_q));
        } else if ((IData)((8U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_q));
        } else if ((IData)((0xcU == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d) 
                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_q));
        } else if ((IData)((0x10U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__status_q;
        } else if ((IData)((0x14U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__cycle_cnt_q;
        } else if ((IData)((0x18U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_q;
        } else if ((0x200U == (0xffe00U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
            if ((2U > (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                >> 2U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                    = (IData)((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q 
                               >> (0x3fU & (((IData)(1U) 
                                             - (0x3fU 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                   >> 2U))) 
                                            << 5U))));
            }
        } else if ((0x400U == (0xffe00U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
            if ((9U > (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                >> 2U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                    = ((0x11fU >= (0x1ffU & (((IData)(8U) 
                                              - (0x3fU 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                    >> 2U))) 
                                             << 5U)))
                        ? (((0U == (0x1fU & (((IData)(8U) 
                                              - (0x3fU 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                    >> 2U))) 
                                             << 5U)))
                             ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          (((IData)(8U) 
                                            - (0x3fU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                  >> 2U))) 
                                           << 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[
                              (0xfU & ((IData)(8U) 
                                       - (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                   >> 2U))))] 
                              >> (0x1fU & (((IData)(8U) 
                                            - (0x3fU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                  >> 2U))) 
                                           << 5U))))
                        : 0U);
            }
        } else if ((0x600U == (0xffe00U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
            if ((4U > (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                >> 2U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                    = (((0U == (0x1fU & (((IData)(3U) 
                                          - (0x3fU 
                                             & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                >> 2U))) 
                                         << 5U))) ? 0U
                         : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[
                            (((IData)(0x1fU) + (0x7fU 
                                                & (((IData)(3U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(3U) 
                                              - (0x3fU 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                    >> 2U))) 
                                             << 5U))))) 
                       | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[
                          (3U & ((IData)(3U) - (0x3fU 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                   >> 2U))))] 
                          >> (0x1fU & (((IData)(3U) 
                                        - (0x3fU & 
                                           (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                            >> 2U))) 
                                       << 5U))));
            }
        } else if ((0x800U == (0xffe00U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
            if ((5U > (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                >> 2U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__out_databuf_d 
                    = ((0x9fU >= (0xffU & (((IData)(4U) 
                                            - (0x3fU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                  >> 2U))) 
                                           << 5U)))
                        ? (((0U == (0x1fU & (((IData)(4U) 
                                              - (0x3fU 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                    >> 2U))) 
                                             << 5U)))
                             ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[
                                     (((IData)(0x1fU) 
                                       + (0xffU & (
                                                   ((IData)(4U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) 
                           | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[
                              (7U & ((IData)(4U) - 
                                     (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                               >> 2U))))] 
                              >> (0x1fU & (((IData)(4U) 
                                            - (0x3fU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                  >> 2U))) 
                                           << 5U))))
                        : 0U);
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_d = 0U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[5U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[5U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[6U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[6U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[7U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[7U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[8U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_q[8U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_q[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_q;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__wren) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__unnamedblk1__DOT__bb = 0x20U;
        if ((1U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                                << 5U)))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0xbU)))) 
                                          << (0x3fU 
                                              & (((IData)(1U) 
                                                  - 
                                                  (0x3fU 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                      >> 2U))) 
                                                 << 5U))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & ((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & ((IData)(3U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xbU)) 
                                                  << 
                                                  (0x1fU 
                                                   & (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xbU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & (((IData)(4U) 
                                                      - 
                                                      (0x3fU 
                                                       & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                          >> 2U))) 
                                                     << 5U)))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & ((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & ((IData)(4U) 
                                                          - 
                                                          (0x3fU 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                              >> 2U))))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xbU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          (((IData)(8U) 
                                            - (0x3fU 
                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                  >> 2U))) 
                                           << 5U)))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & ((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & ((IData)(8U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))));
                                    }
                                }
                            }
                        }
                        if ((IData)((0xcU == (0xffeffU 
                                              & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_d 
                                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_q) 
                                   & (~ (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                         >> 0xbU)));
                        }
                    }
                    if ((IData)((8U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_ien_d 
                            = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                     >> 0xbU));
                    }
                }
                if ((IData)((4U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__global_ien_d 
                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                 >> 0xbU));
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0xbU));
            }
        }
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(1U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0xcU)))) 
                                          << (0x3fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xcU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xcU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(1U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xcU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(1U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_d 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_q) 
                       & (~ (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0xcU)));
            }
        }
        if ((4U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(2U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0xdU)))) 
                                          << (0x3fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(2U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xdU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xdU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(2U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xdU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(2U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(2U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((8U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(3U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0xeU)))) 
                                          << (0x3fU 
                                              & ((IData)(3U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(3U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xeU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xeU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(3U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xeU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(3U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(3U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x10U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(4U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0xfU)))) 
                                          << (0x3fU 
                                              & ((IData)(4U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(4U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xfU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0xfU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(4U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(4U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(4U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xfU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(4U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(5U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x10U)))) 
                                          << (0x3fU 
                                              & ((IData)(5U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(5U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x10U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x10U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(5U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x10U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(5U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(5U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x40U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(6U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x11U)))) 
                                          << (0x3fU 
                                              & ((IData)(6U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(6U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x11U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x11U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(6U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x11U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(6U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(6U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(7U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x12U)))) 
                                          << (0x3fU 
                                              & ((IData)(7U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(7U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x12U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x12U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(7U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(7U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(7U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x12U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(7U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(7U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__auto_restart_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0x12U));
            }
        }
        if ((0x100U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(8U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x13U)))) 
                                          << (0x3fU 
                                              & ((IData)(8U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(8U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x13U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x13U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(8U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x13U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(8U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(8U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x200U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(9U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x14U)))) 
                                          << (0x3fU 
                                              & ((IData)(9U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(9U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x14U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x14U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(9U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(9U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(9U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x14U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(9U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(9U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x400U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xaU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x15U)))) 
                                          << (0x3fU 
                                              & ((IData)(0xaU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xaU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x15U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x15U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xaU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x15U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xaU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xaU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x800U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xbU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x16U)))) 
                                          << (0x3fU 
                                              & ((IData)(0xbU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xbU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x16U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x16U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xbU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xbU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xbU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x16U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xbU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xbU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x1000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xcU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x17U)))) 
                                          << (0x3fU 
                                              & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xcU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x17U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x17U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xcU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xcU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xcU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x17U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xcU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xcU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x2000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xdU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x18U)))) 
                                          << (0x3fU 
                                              & ((IData)(0xdU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xdU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x18U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x18U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xdU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xdU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xdU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x18U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xdU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xdU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x4000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xeU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x19U)))) 
                                          << (0x3fU 
                                              & ((IData)(0xeU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xeU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x19U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x19U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xeU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xeU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xeU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x19U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xeU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xeU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x8000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0xfU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x1aU)))) 
                                          << (0x3fU 
                                              & ((IData)(0xfU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0xfU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1aU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1aU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xfU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0xfU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0xfU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x1aU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0xfU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0xfU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x10000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x1bU)))) 
                                          << (0x3fU 
                                              & ((IData)(0x10U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x10U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1bU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1bU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x10U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x10U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x10U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x10U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x1bU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x10U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x10U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_switch_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0x1bU));
            }
        }
        if ((0x20000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x11U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x1cU)))) 
                                          << (0x3fU 
                                              & ((IData)(0x11U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x11U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1cU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1cU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x11U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x11U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x11U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x11U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x1cU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x11U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x11U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_A_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0x1cU));
            }
        }
        if ((0x40000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x12U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x1dU)))) 
                                          << (0x3fU 
                                              & ((IData)(0x12U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x12U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1dU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1dU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x12U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x12U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x12U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x12U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x1dU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x12U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x12U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_B_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0x1dU));
            }
        }
        if ((0x80000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x13U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                              >> 0x1eU)))) 
                                          << (0x3fU 
                                              & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x13U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1eU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                      >> 0x1eU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x13U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x13U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x13U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x13U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                 >> 0x1eU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x13U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x13U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__mem_keep_C_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                             >> 0x1eU));
            }
        }
        if ((0x100000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x14U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                           >> 0x1fU))) 
                                          << (0x3fU 
                                              & ((IData)(0x14U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x14U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                   >> 0x1fU) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                                   >> 0x1fU);
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x14U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x14U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
                                           >> 0x1fU);
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x14U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x14U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x200000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x15U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U]))) 
                                          << (0x3fU 
                                              & ((IData)(0x15U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x15U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U]) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U]);
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x15U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x15U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x15U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x15U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U]);
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x15U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x15U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x400000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x16U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 1U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x16U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x16U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 1U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 1U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x16U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x16U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x16U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x16U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 1U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x16U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x16U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x800000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x17U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 2U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x17U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 2U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 2U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x17U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x17U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x17U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 2U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x17U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x17U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                             >> 2U));
            }
        }
        if ((0x1000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x18U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 3U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x18U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x18U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 3U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 3U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x18U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x18U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 3U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x18U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x18U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x2000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x19U) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 4U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x19U) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x19U) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 4U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 4U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x19U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x19U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x19U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x19U) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 4U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x19U) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x19U) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x4000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1aU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 5U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1aU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 5U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 5U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1aU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1aU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1aU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1aU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 5U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1aU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1aU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x8000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1bU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 6U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1bU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1bU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 6U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 6U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1bU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1bU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1bU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1bU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 6U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1bU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1bU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x10000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1cU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 7U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1cU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1cU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 7U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 7U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1cU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1cU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1cU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1cU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 7U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1cU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1cU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x20000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1dU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 8U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1dU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1dU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 8U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 8U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1dU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1dU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1dU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1dU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 8U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1dU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1dU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x40000000U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1eU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 9U)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1eU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1eU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 9U)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 9U));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1eU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1eU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1eU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1eU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 9U));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1eU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1eU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_wmask 
             >> 0x1fU)) {
            if ((1U & (~ (IData)((0U == (0xffeffU & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                if ((1U & (~ (IData)((4U == (0xffeffU 
                                             & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                    if ((1U & (~ (IData)((8U == (0xffeffU 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                        if ((1U & (~ (IData)((0xcU 
                                              == (0xffeffU 
                                                  & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr)))))) {
                            if ((0x200U == (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d 
                                    = (((~ (1ULL << 
                                            (0x3fU 
                                             & ((IData)(0x1fU) 
                                                + (
                                                   ((IData)(1U) 
                                                    - 
                                                    (0x3fU 
                                                     & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                        >> 2U))) 
                                                   << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_con_d) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                              >> 0xaU)))) 
                                          << (0x3fU 
                                              & ((IData)(0x1fU) 
                                                 + 
                                                 (((IData)(1U) 
                                                   - 
                                                   (0x3fU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                       >> 2U))) 
                                                  << 5U)))));
                            }
                            if ((0x200U != (0xffe00U 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                if ((0x400U != (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    if ((0x600U == 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[(3U 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                (((IData)(3U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_wei_d[
                                                (3U 
                                                 & (((IData)(0x1fU) 
                                                     + 
                                                     (((IData)(3U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 0xaU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      + 
                                                      (((IData)(3U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                    if ((0x600U != 
                                         (0xffe00U 
                                          & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                        if ((0x800U 
                                             == (0xffe00U 
                                                 & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0 
                                                = (1U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                      >> 0xaU));
                                            if ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x1fU) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U))))) {
                                                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[(7U 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                (((IData)(4U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                                    = 
                                                    (((~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1fU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U))))) 
                                                      & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_out_d[
                                                      (7U 
                                                       & (((IData)(0x1fU) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - 
                                                             (0x3fU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                 >> 2U))) 
                                                            << 5U)) 
                                                          >> 5U))]) 
                                                     | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h3c656d9e__0) 
                                                        << 
                                                        (0x1fU 
                                                         & ((IData)(0x1fU) 
                                                            + 
                                                            (((IData)(4U) 
                                                              - 
                                                              (0x3fU 
                                                               & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                  >> 2U))) 
                                                             << 5U)))));
                                            }
                                        }
                                    }
                                }
                                if ((0x400U == (0xffe00U 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr))) {
                                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0 
                                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
                                                 >> 0xaU));
                                    if ((0x11fU >= 
                                         (0x1ffU & 
                                          ((IData)(0x1fU) 
                                           + (((IData)(8U) 
                                               - (0x3fU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                     >> 2U))) 
                                              << 5U))))) {
                                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[(0xfU 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                (((IData)(8U) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U))))) 
                                                & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__reg_act_d[
                                                (0xfU 
                                                 & (((IData)(0x1fU) 
                                                     + 
                                                     (((IData)(8U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                           >> 2U))) 
                                                      << 5U)) 
                                                    >> 5U))]) 
                                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT____Vlvbound_h94fc9cfe__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      + 
                                                      (((IData)(8U) 
                                                        - 
                                                        (0x3fU 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_addr 
                                                            >> 2U))) 
                                                       << 5U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__cg_done;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_d) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__idle_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_intr_d = 1U;
    }
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
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_edge 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_d) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_edge) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__ready_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_d = 1U;
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__done_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_d = 0U;
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
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o 
            = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
                     >> 7U));
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
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q) 
                                          << 1U)))) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n)) 
               | (0xffU & ((3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                                  >> 0x11U)) << (7U 
                                                 & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q) 
                                                    << 1U)))));
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
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (IData)(((0xa0U == (0xa0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U])) 
                       & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
                          >> 5U)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xdffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0x20000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[4U]));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
            = ((0xdffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]) 
               | (0x20000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellinp__axi_demux_i__mst_resps_i[9U] 
                              << 0xcU)));
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
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q) 
                                          << 1U)))) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n)) 
               | (0xffU & ((3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
                                  >> 7U)) << (7U & 
                                              ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q) 
                                               << 1U)))));
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
}
