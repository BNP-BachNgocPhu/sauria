// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester___024root.h"

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__11(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__11\n"); );
    // Body
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[4U] 
            = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[4U]) 
               | (0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U]));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (1U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[4U] 
            = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[4U]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[5U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                             << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[6U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                             << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[7U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 0x17U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                             << 9U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[8U] 
            = ((0xfffc0000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[8U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                   >> 0x17U) | (0x3fe00U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            << 9U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (2U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[8U] 
            = ((0x3ffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[8U]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 0x12U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[9U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 0xeU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                            << 0x12U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xaU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 0xeU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                            << 0x12U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xbU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 0xeU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                            << 0x12U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xcU] 
            = ((0xf8000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xcU]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                   >> 0xeU) | (0x7fc0000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                             << 0x12U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (3U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xcU] 
            = ((0x7ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xcU]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 0x1bU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xdU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 5U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                          << 0x1bU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xeU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 5U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                          << 0x1bU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0xfU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 5U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                          << 0x1bU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x10U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                >> 5U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                          << 0x1bU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x11U] 
            = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x11U]) 
               | (0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                          >> 5U)));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (4U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x11U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x11U]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x12U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                             << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x13U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                             << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x14U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                             << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x15U] 
            = ((0xffffe000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x15U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                   >> 0x1cU) | (0x1ff0U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                           << 4U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (5U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x15U] 
            = ((0x1fffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x15U]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 0xdU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x16U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                             << 0xdU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x17U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                             << 0xdU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x18U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                             << 0xdU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x19U] 
            = ((0xffc00000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x19U]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                   >> 0x13U) | (0x3fe000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                             << 0xdU))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (6U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x19U] 
            = ((0x3fffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x19U]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 0x16U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1aU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 0xaU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                            << 0x16U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1bU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 0xaU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                            << 0x16U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1cU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 0xaU) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                            << 0x16U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1dU] 
            = ((0x80000000U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1dU]) 
               | ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                   >> 0xaU) | (0x7fc00000U & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                              << 0x16U))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 9U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (7U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1dU] 
            = ((0x7fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1dU]) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                  << 0x1fU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1eU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
                >> 1U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                          << 0x1fU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x1fU] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
                >> 1U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                          << 0x1fU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x20U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
                >> 1U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                          << 0x1fU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x21U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
                >> 1U) | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                          << 0x1fU));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0x22U] 
            = (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                        >> 1U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffffffffffff00ULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | (IData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                           >> 0xaU)))));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (1U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffffffffff00ffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 8U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (2U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffffffff00ffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x10U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (3U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffffff00ffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x18U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (4U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffff00ffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x20U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (5U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffff00ffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x28U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (6U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xff00ffffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x30U));
    }
    if ((((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
           >> 0x12U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (7U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xffffffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
               | ((QData)((IData)((0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                                            >> 0xaU)))) 
                  << 0x38U));
    }
    if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp) 
          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (0U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[0U] 
            = (IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                         >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[1U] 
            = ((0xfffffffcU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[1U]) 
               | (IData)(((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U)) 
                          >> 0x20U)));
    }
    if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp) 
          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (1U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[1U] 
            = ((3U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[1U]) 
               | ((IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U))) 
                  << 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[2U] 
            = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[2U]) 
               | (((IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                              >> 1U))) 
                   >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                          & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U)) 
                                         >> 0x20U)) 
                                << 2U)));
    }
    if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp) 
          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (2U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[2U] 
            = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[2U]) 
               | ((IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U))) 
                  << 4U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[3U] 
            = ((0xffffffc0U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[3U]) 
               | (((IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                              >> 1U))) 
                   >> 0x1cU) | ((IData)(((0x3ffffffffULL 
                                          & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U)) 
                                         >> 0x20U)) 
                                << 4U)));
    }
    if ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp) 
          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)) 
         & (3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[3U] 
            = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[3U]) 
               | ((IData)((0x3ffffffffULL & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                             >> 1U))) 
                  << 6U));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[4U] 
            = (0xffU & (((IData)((0x3ffffffffULL & 
                                  (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                   >> 1U))) >> 0x1aU) 
                        | ((IData)(((0x3ffffffffULL 
                                     & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                        >> 1U)) >> 0x20U)) 
                           << 6U)));
    }
    if ((((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                   >> 0x24U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (0U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xfcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q)) 
               | (3U & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                >> 0x25U))));
    }
    if ((((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                   >> 0x24U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (1U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xf3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q)) 
               | (0xcU & ((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                   >> 0x25U)) << 2U)));
    }
    if ((((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                   >> 0x24U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (2U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0xcfU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q)) 
               | (0x30U & ((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                    >> 0x25U)) << 4U)));
    }
    if ((((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                   >> 0x24U)) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)) 
         & (3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
            = ((0x3fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q)) 
               | (0xc0U & ((IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__dst_resp 
                                    >> 0x25U)) << 6U)));
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_0)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_0)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][3U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][4U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[5U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][5U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[6U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][6U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[7U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_0][7U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_1)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_1)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][3U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][4U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[5U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][5U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[6U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][6U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[7U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__addr_1][7U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_0)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_0)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_0][3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_1)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_1)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__addr_1][3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_0)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_0)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_0][3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__cen_1)))) {
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__wren_1)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1][0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1][1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1][2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                [vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__addr_1][3U];
        }
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v16);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v17);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v18);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v19);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v20);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v21);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v22);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v23);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v24);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v25);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v26);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v27);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v28);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v29);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v30);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_0_i__DOT__mem__v31);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v16);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v17);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v18);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v19);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v20);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v21);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v22);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v23);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v24);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v25);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v26);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v27);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v28);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v29);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v30);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31) {
        VL_ASSIGNSEL_WI(256,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__sram_1_i__DOT__mem__v31);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_0_i__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__sram_1_i__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_0_i__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15), 
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem
                        [vlSelf->__Vdlyvdim0__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15], vlSelf->__Vdlyvval__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__sram_1_i__DOT__mem__v15);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vsauria_tester__ConstPool__TABLE_hd68868ce_0;
extern const VlWide<8>/*255:0*/ Vsauria_tester__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__14(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__14\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    VlWide<4>/*127:0*/ __Vtemp_h69f10ec8__0;
    // Body
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en 
        = ((((0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q)) 
             | (0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q))) 
            | (0xdU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q)))
            ? ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q)) 
               & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pipeline_en))
            : (((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q)) 
                | (0xaU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__main_state_q)))
                ? (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q)) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pipeline_en)) 
                   & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any))))
                : (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q)) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__pipeline_en)) 
                   & (~ (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__fifo_empty_any) 
                          & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__act_cnt_hold_q))) 
                         | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__fifo_empty_any) 
                            & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_fsm_i__DOT__wei_cnt_hold_q))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT____Vcellout__i_data_axi_full__axi_resp_o[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_edge) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__ready_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_d = 0U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__count_enable_q) {
        if ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en)) 
                   | (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en) 
                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en)))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_d 
                = ((IData)(1U) + vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__stalls_cnt_q);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold;
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone) 
           & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_force))) 
          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold_d = 1U;
    } else if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_trigger) 
                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_en)) 
                 & (0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_q))) 
                & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_force)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_hold_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q;
    if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 0U;
        } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 0U;
            } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d 
                    = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_preload_en) 
                        & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt) 
                           < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ncontexts)))
                        ? 2U : 0xbU);
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 0xaU;
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_done) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 9U;
        }
    } else if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 8U;
            } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
                        & (0xfU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 7U;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt) 
                 == ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_inactive_cols) 
                     - (IData)(1U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 0xbU;
            }
        } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__cyc_cnt))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d 
                = ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_inactive_cols))
                    ? 5U : 0xbU);
        }
    } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
            if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__cnt_done) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 4U;
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_q))) {
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) 
             & (0xfU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__scan_cnt)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d 
                = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt) 
                    == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ncontexts))
                    ? 0xbU : 2U);
        }
    } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_outbuf_start) 
                & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt) 
                   != ((IData)(3U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ncontexts))))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__main_state_d 
            = ((3U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt))
                ? (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_preload_en) 
                    & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ob_ncontexts) 
                       >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt)))
                    ? ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_shift_fsm_i__DOT__ctx_cnt))
                        ? 2U : 1U) : 0xbU) : 6U);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cscnt_flag) 
            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en)) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_en));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone 
        = (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone_q) 
              | (((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_incntlim))
                   ? 1U : 0U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_switch_controller_i__DOT__cdone))) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en)) 
            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en)) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__af_act_pop_en));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_en 
        = (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_cscan_en) 
              & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en)) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__buff_shift_fsm)) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_rdata_manager_i__DOT__fifo_push)) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__psm_top_i__DOT__psm_wdata_manager_i__DOT__fifo_pop_q));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o 
        = (8U != ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin) 
                  ^ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr_bin)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                 >> 0x15U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
              >> 0x15U));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                 >> 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
              >> 0x13U));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
                 >> 0x14U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__dst_resp[4U] 
              >> 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o 
        = (8U != ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin) 
                  ^ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr_bin)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o 
        = (4U != ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_bin) 
                  ^ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__rptr_bin)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o 
        = (4U != ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_bin) 
                  ^ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__rptr_bin)));
    if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_1[7U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__outdata_0[7U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[5U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[6U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[7U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[5U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[6U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[7U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_outdata[3U];
    __Vtableidx4 = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__computation_ready) 
                     << 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) 
                                << 5U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__force_stall) 
                                           << 4U) | 
                                          (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge) 
                                            << 3U) 
                                           | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_reset) 
                                               << 2U) 
                                              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_q))))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__stall_state_d 
        = Vsauria_tester__ConstPool__TABLE_hd68868ce_0
        [__Vtableidx4];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__soft_rst_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0U;
    } else if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
        if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0U;
        } else if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0U;
            } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0U;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x15U;
            }
        } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x14U;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xeU;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold)
                    ? 0xeU : 0x12U);
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xeU;
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x11U;
        }
    } else if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done) {
                        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
                            = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_done) 
                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_finalwrite))
                                ? 0x13U : 0x10U);
                    }
                } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
                        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_done) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_finalwrite))
                            ? 0x13U : 0x10U);
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xfU;
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
                        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__feeders_done) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_finalwrite))
                            ? 0x13U : 0xbU);
                }
            } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xeU;
                }
            } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) 
                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xeU;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xdU;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x12U;
            }
        } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x11U;
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0x10U;
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xcU;
                }
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xeU;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone)
                    ? 0x10U : 0xbU);
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xaU;
        }
    } else if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
                if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) 
                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 0xaU;
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 8U;
                } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
                    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 9U;
                }
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 8U;
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) 
                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done))) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 8U;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cdone) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 6U;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__cswitch_done) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 7U;
            }
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
            if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__mc_shift_done) {
                vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 4U;
            }
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__outbuf_done_hold) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 2U;
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__start_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__main_controller_i__DOT__context_fsm_i__DOT__main_state_d = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[0U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            << 2U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                       << 1U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[1U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            >> 0x1eU) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                           ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                           : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                         << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[2U] 
        = (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
               ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
               : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
             << 7U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                        << 6U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o) 
                                  << 5U))) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                 : 
                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                               >> 0x1eU) 
                                              | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[3U] 
        = (((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                      >> 0x19U)) | ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                               | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                              >> 0x1aU)) 
                                    | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o) 
                                       >> 0x1bU))) 
           | ((0x60U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                          ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                          : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                        >> 0x19U)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[4U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                     >> 0x19U)) | ((0x60U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                               : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                             >> 0x19U)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[5U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                     >> 0x19U)) | ((0x60U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             >> 0x19U)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                      << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[6U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                     >> 0x19U)) | (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x1aU) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                  << 0x19U)) 
                                   | ((0x60U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                  ? 
                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                                  : 
                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                                >> 0x19U)) 
                                      | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                           : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                         << 7U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[7U] 
        = ((0x1fU & (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                         ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                         : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                       >> 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                  | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                 >> 7U)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                              : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                            >> 0x19U))) 
           | ((0x1ffffe0U & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                              >> 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        >> 7U))) | 
              ((0x2000000U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                              >> 6U)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                           : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                         << 0x1aU))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[8U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                     >> 6U)) | ((0x1ffffe0U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                 : 
                                                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                               >> 6U)) 
                                | ((0x2000000U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  >> 6U)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 0x1aU))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[9U] 
        = (0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                      ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                      : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                    >> 6U));
    __Vtemp_h69f10ec8__0[3U] = (((0x1fU & ((IData)(
                                                   ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                       | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))))) 
                                           >> 0x15U)) 
                                 | ((IData)((((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                 : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                               << 2U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o))))) 
                                             >> 0x20U)) 
                                    >> 0x1bU)) | ((0x7e0U 
                                                   & ((IData)(
                                                              ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                                  ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                                  : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))))) 
                                                      >> 0x15U)) 
                                                  | ((IData)(
                                                             (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                                  ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                                  : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))))) 
                                                              >> 0x20U)) 
                                                     << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[0U] 
        = (IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                      ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                      : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                    << 2U) | (QData)((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                               << 1U) 
                                              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o))))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[1U] 
        = (((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                      << 2U) | (QData)((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                  | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)))))) 
            << 5U) | (IData)((((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                  ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                  : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                << 2U) | (QData)((IData)(
                                                         ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_r__src_ready_o))))) 
                              >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[2U] 
        = (((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                        : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                      << 2U) | (QData)((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                  | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o)))))) 
            >> 0x1bU) | (((IData)(((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                      ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                      : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                    << 1U) | (QData)((IData)(
                                                             ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))))) 
                          << 0xbU) | ((IData)((((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                   : vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                                 << 2U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                     | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT____Vcellout__i_cdc_fifo_gray_src_b__src_ready_o))))) 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[3U] 
        = __Vtemp_h69f10ec8__0[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] = 0x4badadd2U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] = 0U;
    if ((0x10000U == vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_select_q)) {
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_1[3U];
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__outdata_0[3U];
        }
    } else if ((0x20000U == vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_select_q)) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] 
            = (((0U == (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                 << 7U))) ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                                                  ((IData)(1U) 
                                                   + 
                                                   (4U 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 7U))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                  (4U & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                         << 2U))] >> (0x1fU & (((IData)(1U) 
                                                - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                               << 7U))));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] 
            = (((0U == (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                 << 7U))) ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                                                  ((IData)(2U) 
                                                   + 
                                                   (4U 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 7U))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                  ((IData)(1U) + (4U & (((IData)(1U) 
                                         - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                        << 2U)))] >> 
                  (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                            << 7U))));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] 
            = (((0U == (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                 << 7U))) ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                                                  ((IData)(3U) 
                                                   + 
                                                   (4U 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 7U))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                  ((IData)(2U) + (4U & (((IData)(1U) 
                                         - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                        << 2U)))] >> 
                  (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                            << 7U))));
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] 
            = (((0U == (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                 << 7U))) ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                                                  ((IData)(4U) 
                                                   + 
                                                   (4U 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                                       << 7U))))) 
               | (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_rdata_elements[
                  ((IData)(3U) + (4U & (((IData)(1U) 
                                         - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                                        << 2U)))] >> 
                  (0x1fU & (((IData)(1U) - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__host_word_sel_shim_q)) 
                            << 7U))));
    } else if ((0x30000U == vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_select_q)) {
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_1[3U];
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sram_output[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMC_i__DOT__outdata_0[3U];
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[5U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[5U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[6U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[6U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[7U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[7U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[8U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[8U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[9U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[9U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__cfg_axi_req[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_dst__dst_req_o[3U];
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
    if (vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rd_flag_q) {
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
    } else if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[0U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__rburst_cnt_d = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__i_data_axi_full__DOT__araddr_d 
            = vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__dat_axi_req[1U];
    }
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
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_0 
        = (1U & (~ (((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_rden)) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_0))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__cen_1 
        = (1U & (~ (((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_srama_rden)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMA_i__DOT__wren_1))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_0 
        = (1U & (~ (((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_rden)) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_0))));
    vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__cen_1 
        = (1U & (~ (((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__config_regs_i__DOT__sram_select_q))
                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__host_sramb_rden)
                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sram_top_i__DOT__SRAMB_i__DOT__wren_1))));
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
}
