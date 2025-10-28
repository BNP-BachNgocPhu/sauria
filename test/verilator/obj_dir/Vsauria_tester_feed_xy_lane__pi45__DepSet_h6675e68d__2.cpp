// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_feed_xy_lane__pi45.h"

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i__2(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__7__KET____DOT__act_row_feeder_i__2\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__7__KET____DOT__act_row_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
           & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d)
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux)
            ? 0U : (0xffU & ((IData)(0x10U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__0(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__0\n"); );
    // Init
    CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0;
    CData/*1:0*/ __Vdly__fifo_i__DOT__out_woffs;
    VlWide<5>/*159:0*/ __Vtemp_h90625d74__0;
    // Body
    __Vtemp_h90625d74__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                            | (0xffffU 
                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                          | (0xffffU 
                                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                           >> 0x10U)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h90625d74__0[3U] = (((0xffffU & (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                | (0xffffU 
                                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                 >> 0x10U)))) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U] 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
            >> 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
                         << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
        = ((0xffffU & (IData)((((QData)((IData)(((0xffff0000U 
                                                  & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                << 0x10U) | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U)))))) 
           | (__Vtemp_h90625d74__0[2U] << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
        = ((__Vtemp_h90625d74__0[2U] >> 0x10U) | (__Vtemp_h90625d74__0[3U] 
                                                  << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
        = ((__Vtemp_h90625d74__0[3U] >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    __Vdly__fifo_i__DOT__out_woffs = vlSelf->__PVT__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d));
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP.rstn_sauria)) 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_d)));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__fifo_full_shim = (4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q));
        if (vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_d;
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
            vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        } else {
            if (vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) {
                vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 
                    = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data;
                vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
                vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
            }
            if (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux))) {
                vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q 
                    = (0xffU & ((IData)(8U) + (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux)));
            }
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
            vlSelf->__PVT__pop_en_q = 0U;
            vlSelf->__PVT__fifo_i__DOT__empty_public = 1U;
            __Vdly__fifo_i__DOT__out_woffs = 0U;
            vlSelf->__PVT__fifo_empty_q2 = 0U;
            vlSelf->__PVT__fifo_empty_q1 = 0U;
        } else {
            if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x30U))))) 
                          << 0x30U));
            }
            if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffff0000ffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x20U))))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffff0000ffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x10U))))) 
                          << 0x10U));
            }
            if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffff0000ULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | (IData)((IData)((0xffffU & (IData)(vlSelf->__PVT__fifo_i__DOT__data_mux)))));
            }
            if (vlSelf->__PVT__fifo_pop) {
                vlSelf->__PVT__fifo_i__DOT__outbuf_q 
                    = vlSelf->__PVT__fifo_i__DOT__outbuf_d;
                vlSelf->__PVT__fifo_i__DOT__empty_public 
                    = vlSelf->__PVT__fifo_i__DOT__empty;
                vlSelf->__PVT__fifo_empty_q2 = vlSelf->__PVT__fifo_empty_q1;
                vlSelf->__PVT__fifo_empty_q1 = vlSelf->__PVT__fifo_i__DOT__empty;
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__pop_en_q = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en;
            }
            if (((IData)(vlSelf->__PVT__fifo_pop) & 
                 (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)))) {
                __Vdly__fifo_i__DOT__out_woffs = ((0U 
                                                   == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))));
            }
        }
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d;
        }
        vlSelf->__PVT__fifo_i__DOT__ptr_q = vlSelf->__PVT__fifo_i__DOT__ptr_d;
    } else {
        vlSelf->__PVT__fifo_full_shim = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
        vlSelf->__PVT__pop_en_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__empty_public = 0U;
        __Vdly__fifo_i__DOT__out_woffs = 0U;
        vlSelf->__PVT__fifo_empty_q2 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = 0U;
        vlSelf->__PVT__fifo_empty_q1 = 0U;
        vlSelf->__PVT__fifo_i__DOT__ptr_q = 0U;
    }
    vlSelf->__PVT__fifo_i__DOT__out_woffs = __Vdly__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = (0xffffU 
                                              & (IData)(vlSelf->__PVT__fifo_i__DOT__data_q));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = vlSelf->__PVT__fifo_i__DOT__data_pop_q;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffff8000U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xfU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffc000U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xeU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffe000U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xdU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffff000U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xcU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffff800U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xbU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffc00U & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xaU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffe00U & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 9U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffff00U & (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 8U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xff3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xffcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfff3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfffcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
        = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
    feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                 >> 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
        = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
           | (0xffffU & ((IData)(feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0) 
                         << 0xbU)));
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 6U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 6U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 6U)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 1U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 1U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 1U)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             >> 4U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             >> 4U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             >> 4U)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x17U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x17U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x17U));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x12U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x12U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x12U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xdU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xdU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xdU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 8U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 8U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 3U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 3U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 3U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  >> 2U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  >> 2U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x19U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x19U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x19U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x14U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x14U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x14U));
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xfU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xfU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xfU));
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xaU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xaU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xaU));
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 5U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 5U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 5U));
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]);
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 0xbU)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 0xbU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 6U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 6U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 1U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 1U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             >> 4U)));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                              << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x17U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x17U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x12U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x12U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xdU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0xdU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 8U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 3U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 3U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 8U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  >> 2U));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                              << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                        >> 0x1eU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 9U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x19U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x19U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xaU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x14U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xbU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xfU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xfU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xcU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xaU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xaU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xdU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 5U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 5U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xeU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0));
        if ((1U >= (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xfU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 0xbU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 6U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 1U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 2U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                          << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                    >> 0x1cU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 3U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x17U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 4U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x12U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 5U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0xdU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 6U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 7U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 3U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 8U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                          << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                    >> 0x1eU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 9U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x19U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xaU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xbU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xfU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xcU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xaU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xdU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 5U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xeU;
    }
    if ((1U == (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xfU;
    }
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
           >> 0x10U);
    if ((1U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U]);
    }
    if ((2U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
               >> 0x10U);
    }
    if ((3U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U]);
    }
    if ((4U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
               >> 0x10U);
    }
    if ((5U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U]);
    }
    if ((6U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
               >> 0x10U);
    }
    if ((7U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U]);
    }
    if ((8U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
               >> 0x10U);
    }
    if ((9U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]);
    }
    if ((0xaU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
               >> 0x10U);
    }
    if ((0xbU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]);
    }
    if ((0xcU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
               >> 0x10U);
    }
    if ((0xdU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]);
    }
    if ((0xeU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
               >> 0x10U);
    }
    if ((0xfU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]);
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__1(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 1U;
        }
    }
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (1U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if ((0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 1U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en) 
                & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__2(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__8__KET____DOT__act_row_feeder_i__2\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__8__KET____DOT__act_row_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
           & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d)
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux)
            ? 0U : (0xffU & ((IData)(0x10U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__0(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__0\n"); );
    // Init
    CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0;
    CData/*1:0*/ __Vdly__fifo_i__DOT__out_woffs;
    VlWide<5>/*159:0*/ __Vtemp_h90625d74__0;
    // Body
    __Vtemp_h90625d74__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                            | (0xffffU 
                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                          | (0xffffU 
                                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                           >> 0x10U)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h90625d74__0[3U] = (((0xffffU & (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                | (0xffffU 
                                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                 >> 0x10U)))) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U] 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
            >> 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
                         << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
        = ((0xffffU & (IData)((((QData)((IData)(((0xffff0000U 
                                                  & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                << 0x10U) | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U)))))) 
           | (__Vtemp_h90625d74__0[2U] << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
        = ((__Vtemp_h90625d74__0[2U] >> 0x10U) | (__Vtemp_h90625d74__0[3U] 
                                                  << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
        = ((__Vtemp_h90625d74__0[3U] >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    __Vdly__fifo_i__DOT__out_woffs = vlSelf->__PVT__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d));
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP.rstn_sauria)) 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_d)));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__fifo_full_shim = (4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q));
        if (vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_d;
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
            vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        } else {
            if (vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) {
                vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 
                    = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data;
                vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
                vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
            }
            if (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux))) {
                vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q 
                    = (0xffU & ((IData)(9U) + (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux)));
            }
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
            vlSelf->__PVT__pop_en_q = 0U;
            vlSelf->__PVT__fifo_i__DOT__empty_public = 1U;
            __Vdly__fifo_i__DOT__out_woffs = 0U;
            vlSelf->__PVT__fifo_empty_q2 = 0U;
            vlSelf->__PVT__fifo_empty_q1 = 0U;
        } else {
            if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x30U))))) 
                          << 0x30U));
            }
            if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffff0000ffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x20U))))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffff0000ffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x10U))))) 
                          << 0x10U));
            }
            if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffff0000ULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | (IData)((IData)((0xffffU & (IData)(vlSelf->__PVT__fifo_i__DOT__data_mux)))));
            }
            if (vlSelf->__PVT__fifo_pop) {
                vlSelf->__PVT__fifo_i__DOT__outbuf_q 
                    = vlSelf->__PVT__fifo_i__DOT__outbuf_d;
                vlSelf->__PVT__fifo_i__DOT__empty_public 
                    = vlSelf->__PVT__fifo_i__DOT__empty;
                vlSelf->__PVT__fifo_empty_q2 = vlSelf->__PVT__fifo_empty_q1;
                vlSelf->__PVT__fifo_empty_q1 = vlSelf->__PVT__fifo_i__DOT__empty;
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__pop_en_q = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en;
            }
            if (((IData)(vlSelf->__PVT__fifo_pop) & 
                 (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)))) {
                __Vdly__fifo_i__DOT__out_woffs = ((0U 
                                                   == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))));
            }
        }
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d;
        }
        vlSelf->__PVT__fifo_i__DOT__ptr_q = vlSelf->__PVT__fifo_i__DOT__ptr_d;
    } else {
        vlSelf->__PVT__fifo_full_shim = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
        vlSelf->__PVT__pop_en_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__empty_public = 0U;
        __Vdly__fifo_i__DOT__out_woffs = 0U;
        vlSelf->__PVT__fifo_empty_q2 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = 0U;
        vlSelf->__PVT__fifo_empty_q1 = 0U;
        vlSelf->__PVT__fifo_i__DOT__ptr_q = 0U;
    }
    vlSelf->__PVT__fifo_i__DOT__out_woffs = __Vdly__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = (0xffffU 
                                              & (IData)(vlSelf->__PVT__fifo_i__DOT__data_q));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = vlSelf->__PVT__fifo_i__DOT__data_pop_q;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffff8000U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xfU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffc000U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xeU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffe000U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xdU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffff000U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xcU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffff800U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xbU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffc00U & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xaU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffe00U & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 9U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffff00U & (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 8U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xff3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xffcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfff3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfffcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
        = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
    feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                 >> 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
        = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
           | (0xffffU & ((IData)(feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0) 
                         << 0xbU)));
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 6U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 6U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 6U)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 1U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 1U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 1U)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             >> 4U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             >> 4U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             >> 4U)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x17U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x17U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x17U));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x12U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x12U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x12U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xdU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xdU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xdU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 8U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 8U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 3U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 3U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 3U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  >> 2U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  >> 2U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x19U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x19U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x19U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x14U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x14U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x14U));
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xfU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xfU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xfU));
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xaU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xaU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xaU));
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 5U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 5U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 5U));
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]);
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 0xbU)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 0xbU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 6U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 6U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 1U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 1U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             >> 4U)));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                              << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x17U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x17U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x12U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x12U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xdU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0xdU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 8U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 3U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 3U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 8U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  >> 2U));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                              << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                        >> 0x1eU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 9U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x19U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x19U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xaU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x14U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xbU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xfU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xfU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xcU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xaU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xaU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xdU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 5U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 5U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xeU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0));
        if ((1U >= (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xfU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 0xbU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 6U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 1U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 2U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                          << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                    >> 0x1cU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 3U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x17U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 4U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x12U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 5U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0xdU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 6U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 7U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 3U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 8U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                          << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                    >> 0x1eU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 9U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x19U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xaU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xbU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xfU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xcU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xaU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xdU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 5U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xeU;
    }
    if ((1U == (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xfU;
    }
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
           >> 0x10U);
    if ((1U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U]);
    }
    if ((2U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
               >> 0x10U);
    }
    if ((3U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U]);
    }
    if ((4U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
               >> 0x10U);
    }
    if ((5U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U]);
    }
    if ((6U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
               >> 0x10U);
    }
    if ((7U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U]);
    }
    if ((8U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
               >> 0x10U);
    }
    if ((9U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]);
    }
    if ((0xaU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
               >> 0x10U);
    }
    if ((0xbU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]);
    }
    if ((0xcU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
               >> 0x10U);
    }
    if ((0xdU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]);
    }
    if ((0xeU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
               >> 0x10U);
    }
    if ((0xfU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]);
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__1(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 1U;
        }
    }
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (1U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if ((0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 1U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en) 
                & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__2(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__9__KET____DOT__act_row_feeder_i__2\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__9__KET____DOT__act_row_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
           & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d)
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux)
            ? 0U : (0xffU & ((IData)(0x10U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__0(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__0\n"); );
    // Init
    CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0;
    CData/*1:0*/ __Vdly__fifo_i__DOT__out_woffs;
    VlWide<5>/*159:0*/ __Vtemp_h90625d74__0;
    // Body
    __Vtemp_h90625d74__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                            | (0xffffU 
                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                          | (0xffffU 
                                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                           >> 0x10U)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h90625d74__0[3U] = (((0xffffU & (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                | (0xffffU 
                                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                 >> 0x10U)))) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U] 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
            >> 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
                         << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
        = ((0xffffU & (IData)((((QData)((IData)(((0xffff0000U 
                                                  & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                << 0x10U) | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U)))))) 
           | (__Vtemp_h90625d74__0[2U] << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
        = ((__Vtemp_h90625d74__0[2U] >> 0x10U) | (__Vtemp_h90625d74__0[3U] 
                                                  << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
        = ((__Vtemp_h90625d74__0[3U] >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    __Vdly__fifo_i__DOT__out_woffs = vlSelf->__PVT__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d));
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP.rstn_sauria)) 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_d)));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__fifo_full_shim = (4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q));
        if (vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_d;
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
            vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        } else {
            if (vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) {
                vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 
                    = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data;
                vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
                vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
            }
            if (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux))) {
                vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q 
                    = (0xffU & ((IData)(0xaU) + (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux)));
            }
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
            vlSelf->__PVT__pop_en_q = 0U;
            vlSelf->__PVT__fifo_i__DOT__empty_public = 1U;
            __Vdly__fifo_i__DOT__out_woffs = 0U;
            vlSelf->__PVT__fifo_empty_q2 = 0U;
            vlSelf->__PVT__fifo_empty_q1 = 0U;
        } else {
            if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x30U))))) 
                          << 0x30U));
            }
            if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffff0000ffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x20U))))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffff0000ffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x10U))))) 
                          << 0x10U));
            }
            if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffff0000ULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | (IData)((IData)((0xffffU & (IData)(vlSelf->__PVT__fifo_i__DOT__data_mux)))));
            }
            if (vlSelf->__PVT__fifo_pop) {
                vlSelf->__PVT__fifo_i__DOT__outbuf_q 
                    = vlSelf->__PVT__fifo_i__DOT__outbuf_d;
                vlSelf->__PVT__fifo_i__DOT__empty_public 
                    = vlSelf->__PVT__fifo_i__DOT__empty;
                vlSelf->__PVT__fifo_empty_q2 = vlSelf->__PVT__fifo_empty_q1;
                vlSelf->__PVT__fifo_empty_q1 = vlSelf->__PVT__fifo_i__DOT__empty;
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__pop_en_q = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en;
            }
            if (((IData)(vlSelf->__PVT__fifo_pop) & 
                 (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)))) {
                __Vdly__fifo_i__DOT__out_woffs = ((0U 
                                                   == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))));
            }
        }
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d;
        }
        vlSelf->__PVT__fifo_i__DOT__ptr_q = vlSelf->__PVT__fifo_i__DOT__ptr_d;
    } else {
        vlSelf->__PVT__fifo_full_shim = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
        vlSelf->__PVT__pop_en_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__empty_public = 0U;
        __Vdly__fifo_i__DOT__out_woffs = 0U;
        vlSelf->__PVT__fifo_empty_q2 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = 0U;
        vlSelf->__PVT__fifo_empty_q1 = 0U;
        vlSelf->__PVT__fifo_i__DOT__ptr_q = 0U;
    }
    vlSelf->__PVT__fifo_i__DOT__out_woffs = __Vdly__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = (0xffffU 
                                              & (IData)(vlSelf->__PVT__fifo_i__DOT__data_q));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = vlSelf->__PVT__fifo_i__DOT__data_pop_q;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffff8000U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xfU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffc000U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xeU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffe000U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xdU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffff000U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xcU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffff800U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xbU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffc00U & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xaU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffe00U & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 9U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffff00U & (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 8U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xff3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xffcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfff3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfffcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
        = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
    feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                 >> 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
        = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
           | (0xffffU & ((IData)(feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0) 
                         << 0xbU)));
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 6U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 6U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 6U)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 1U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 1U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 1U)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             >> 4U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             >> 4U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             >> 4U)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x17U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x17U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x17U));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x12U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x12U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x12U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xdU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xdU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xdU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 8U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 8U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 3U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 3U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 3U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  >> 2U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  >> 2U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x19U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x19U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x19U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x14U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x14U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x14U));
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xfU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xfU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xfU));
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xaU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xaU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xaU));
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 5U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 5U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 5U));
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]);
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 0xbU)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 0xbU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 6U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 6U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 1U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 1U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             >> 4U)));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                              << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x17U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x17U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x12U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x12U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xdU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0xdU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 8U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 3U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 3U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 8U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  >> 2U));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                              << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                        >> 0x1eU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 9U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x19U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x19U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xaU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x14U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xbU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xfU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xfU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xcU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xaU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xaU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xdU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 5U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 5U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xeU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0));
        if ((1U >= (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xfU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 0xbU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 6U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 1U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 2U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                          << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                    >> 0x1cU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 3U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x17U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 4U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x12U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 5U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0xdU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 6U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 7U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 3U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 8U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                          << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                    >> 0x1eU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 9U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x19U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xaU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xbU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xfU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xcU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xaU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xdU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 5U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xeU;
    }
    if ((1U == (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xfU;
    }
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
           >> 0x10U);
    if ((1U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U]);
    }
    if ((2U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
               >> 0x10U);
    }
    if ((3U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U]);
    }
    if ((4U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
               >> 0x10U);
    }
    if ((5U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U]);
    }
    if ((6U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
               >> 0x10U);
    }
    if ((7U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U]);
    }
    if ((8U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
               >> 0x10U);
    }
    if ((9U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]);
    }
    if ((0xaU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
               >> 0x10U);
    }
    if ((0xbU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]);
    }
    if ((0xcU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
               >> 0x10U);
    }
    if ((0xdU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]);
    }
    if ((0xeU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
               >> 0x10U);
    }
    if ((0xfU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]);
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__1(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 1U;
        }
    }
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (1U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if ((0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 1U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en) 
                & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__2(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__10__KET____DOT__act_row_feeder_i__2\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__10__KET____DOT__act_row_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
           & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d)
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux)
            ? 0U : (0xffU & ((IData)(0x10U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__0(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__0\n"); );
    // Init
    CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0;
    CData/*1:0*/ __Vdly__fifo_i__DOT__out_woffs;
    VlWide<5>/*159:0*/ __Vtemp_h90625d74__0;
    // Body
    __Vtemp_h90625d74__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                            | (0xffffU 
                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                          | (0xffffU 
                                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                           >> 0x10U)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h90625d74__0[3U] = (((0xffffU & (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                | (0xffffU 
                                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                 >> 0x10U)))) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U] 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
            >> 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
                         << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
        = ((0xffffU & (IData)((((QData)((IData)(((0xffff0000U 
                                                  & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                << 0x10U) | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U)))))) 
           | (__Vtemp_h90625d74__0[2U] << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
        = ((__Vtemp_h90625d74__0[2U] >> 0x10U) | (__Vtemp_h90625d74__0[3U] 
                                                  << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
        = ((__Vtemp_h90625d74__0[3U] >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    __Vdly__fifo_i__DOT__out_woffs = vlSelf->__PVT__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d));
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP.rstn_sauria)) 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_d)));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__fifo_full_shim = (4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q));
        if (vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_d;
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
            vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        } else {
            if (vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) {
                vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 
                    = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data;
                vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
                vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
            }
            if (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux))) {
                vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q 
                    = (0xffU & ((IData)(0xbU) + (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux)));
            }
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
            vlSelf->__PVT__pop_en_q = 0U;
            vlSelf->__PVT__fifo_i__DOT__empty_public = 1U;
            __Vdly__fifo_i__DOT__out_woffs = 0U;
            vlSelf->__PVT__fifo_empty_q2 = 0U;
            vlSelf->__PVT__fifo_empty_q1 = 0U;
        } else {
            if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x30U))))) 
                          << 0x30U));
            }
            if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffff0000ffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x20U))))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffff0000ffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x10U))))) 
                          << 0x10U));
            }
            if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffff0000ULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | (IData)((IData)((0xffffU & (IData)(vlSelf->__PVT__fifo_i__DOT__data_mux)))));
            }
            if (vlSelf->__PVT__fifo_pop) {
                vlSelf->__PVT__fifo_i__DOT__outbuf_q 
                    = vlSelf->__PVT__fifo_i__DOT__outbuf_d;
                vlSelf->__PVT__fifo_i__DOT__empty_public 
                    = vlSelf->__PVT__fifo_i__DOT__empty;
                vlSelf->__PVT__fifo_empty_q2 = vlSelf->__PVT__fifo_empty_q1;
                vlSelf->__PVT__fifo_empty_q1 = vlSelf->__PVT__fifo_i__DOT__empty;
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__pop_en_q = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en;
            }
            if (((IData)(vlSelf->__PVT__fifo_pop) & 
                 (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)))) {
                __Vdly__fifo_i__DOT__out_woffs = ((0U 
                                                   == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))));
            }
        }
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d;
        }
        vlSelf->__PVT__fifo_i__DOT__ptr_q = vlSelf->__PVT__fifo_i__DOT__ptr_d;
    } else {
        vlSelf->__PVT__fifo_full_shim = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
        vlSelf->__PVT__pop_en_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__empty_public = 0U;
        __Vdly__fifo_i__DOT__out_woffs = 0U;
        vlSelf->__PVT__fifo_empty_q2 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = 0U;
        vlSelf->__PVT__fifo_empty_q1 = 0U;
        vlSelf->__PVT__fifo_i__DOT__ptr_q = 0U;
    }
    vlSelf->__PVT__fifo_i__DOT__out_woffs = __Vdly__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = (0xffffU 
                                              & (IData)(vlSelf->__PVT__fifo_i__DOT__data_q));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = vlSelf->__PVT__fifo_i__DOT__data_pop_q;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffff8000U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xfU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffc000U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xeU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffe000U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xdU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffff000U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xcU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffff800U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xbU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffc00U & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xaU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffe00U & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 9U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffff00U & (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 8U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xff3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xffcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfff3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfffcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
        = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
    feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                 >> 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
        = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
           | (0xffffU & ((IData)(feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0) 
                         << 0xbU)));
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 6U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 6U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 6U)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 1U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 1U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 1U)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             >> 4U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             >> 4U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             >> 4U)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x17U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x17U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x17U));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x12U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x12U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x12U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xdU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xdU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xdU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 8U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 8U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 3U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 3U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 3U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  >> 2U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  >> 2U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x19U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x19U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x19U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x14U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x14U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x14U));
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xfU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xfU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xfU));
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xaU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xaU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xaU));
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 5U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 5U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 5U));
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]);
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 0xbU)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 0xbU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 6U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 6U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 1U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 1U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             >> 4U)));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                              << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x17U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x17U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x12U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x12U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xdU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0xdU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 8U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 3U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 3U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 8U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  >> 2U));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                              << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                        >> 0x1eU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 9U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x19U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x19U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xaU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x14U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xbU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xfU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xfU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xcU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xaU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xaU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xdU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 5U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 5U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xeU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0));
        if ((1U >= (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xfU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 0xbU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 6U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 1U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 2U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                          << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                    >> 0x1cU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 3U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x17U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 4U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x12U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 5U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0xdU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 6U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 7U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 3U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 8U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                          << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                    >> 0x1eU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 9U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x19U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xaU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xbU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xfU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xcU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xaU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xdU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 5U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xeU;
    }
    if ((1U == (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xfU;
    }
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
           >> 0x10U);
    if ((1U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U]);
    }
    if ((2U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
               >> 0x10U);
    }
    if ((3U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U]);
    }
    if ((4U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
               >> 0x10U);
    }
    if ((5U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U]);
    }
    if ((6U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
               >> 0x10U);
    }
    if ((7U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U]);
    }
    if ((8U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
               >> 0x10U);
    }
    if ((9U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]);
    }
    if ((0xaU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
               >> 0x10U);
    }
    if ((0xbU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]);
    }
    if ((0xcU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
               >> 0x10U);
    }
    if ((0xdU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]);
    }
    if ((0xeU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
               >> 0x10U);
    }
    if ((0xfU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]);
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__1(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 1U;
        }
    }
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (1U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if ((0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 1U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en) 
                & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__2(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__11__KET____DOT__act_row_feeder_i__2\n"); );
    // Body
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__11__KET____DOT__act_row_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)) 
           & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d)
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux)
            ? 0U : (0xffU & ((IData)(0x10U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
}

VL_INLINE_OPT void Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i__0(Vsauria_tester_feed_xy_lane__pi45* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__pi45___sequent__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__x_axis__BRA__12__KET____DOT__act_row_feeder_i__0\n"); );
    // Init
    CData/*4:0*/ feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0;
    CData/*1:0*/ __Vdly__fifo_i__DOT__out_woffs;
    VlWide<5>/*159:0*/ __Vtemp_h90625d74__0;
    // Body
    __Vtemp_h90625d74__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                            | (0xffffU 
                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                          | (0xffffU 
                                                                             & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                           >> 0x10U)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h90625d74__0[3U] = (((0xffffU & (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                                | (0xffffU 
                                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                                 >> 0x10U)))) 
                                             >> 0x20U)) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[7U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[6U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U] 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[4U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[5U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
            >> 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[3U] 
                         << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
        = ((0xffffU & (IData)((((QData)((IData)(((0xffff0000U 
                                                  & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U]) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U])))) 
                                << 0x10U) | (QData)((IData)(
                                                            (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[2U] 
                                                             >> 0x10U)))))) 
           | (__Vtemp_h90625d74__0[2U] << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
        = ((__Vtemp_h90625d74__0[2U] >> 0x10U) | (__Vtemp_h90625d74__0[3U] 
                                                  << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
        = ((__Vtemp_h90625d74__0[3U] >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__sramb_data_mux[1U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    __Vdly__fifo_i__DOT__out_woffs = vlSelf->__PVT__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q 
        = ((IData)(vlSymsp->TOP.rstn_sauria) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d));
    vlSelf->__PVT__fifo_i__DOT__empty_start_q = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP.rstn_sauria)) 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_d)));
    if (vlSymsp->TOP.rstn_sauria) {
        vlSelf->__PVT__fifo_full_shim = (4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q));
        if (vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_d;
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_feeder_clear) {
            vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
            vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        } else {
            if (vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) {
                vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 
                    = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__valid_data;
                vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d;
                vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q 
                    = vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d;
            }
            if (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en) 
                 & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__transn_mux))) {
                vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q 
                    = (0xffU & ((IData)(0xcU) + (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT__glob_woffs_mux)));
            }
        }
        if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__weight_feeder_i__i_clearfifo) {
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                                  & vlSelf->__PVT__fifo_i__DOT__data_q);
            vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
            vlSelf->__PVT__pop_en_q = 0U;
            vlSelf->__PVT__fifo_i__DOT__empty_public = 1U;
            __Vdly__fifo_i__DOT__out_woffs = 0U;
            vlSelf->__PVT__fifo_empty_q2 = 0U;
            vlSelf->__PVT__fifo_empty_q1 = 0U;
        } else {
            if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x30U))))) 
                          << 0x30U));
            }
            if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffff0000ffffffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x20U))))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffff0000ffffULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->__PVT__fifo_i__DOT__data_mux 
                                                      >> 0x10U))))) 
                          << 0x10U));
            }
            if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en))) {
                vlSelf->__PVT__fifo_i__DOT__data_q 
                    = ((0xffffffffffff0000ULL & vlSelf->__PVT__fifo_i__DOT__data_q) 
                       | (IData)((IData)((0xffffU & (IData)(vlSelf->__PVT__fifo_i__DOT__data_mux)))));
            }
            if (vlSelf->__PVT__fifo_pop) {
                vlSelf->__PVT__fifo_i__DOT__outbuf_q 
                    = vlSelf->__PVT__fifo_i__DOT__outbuf_d;
                vlSelf->__PVT__fifo_i__DOT__empty_public 
                    = vlSelf->__PVT__fifo_i__DOT__empty;
                vlSelf->__PVT__fifo_empty_q2 = vlSelf->__PVT__fifo_empty_q1;
                vlSelf->__PVT__fifo_empty_q1 = vlSelf->__PVT__fifo_i__DOT__empty;
            }
            if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en) {
                vlSelf->__PVT__pop_en_q = vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__wf_wei_pop_en;
            }
            if (((IData)(vlSelf->__PVT__fifo_pop) & 
                 (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)))) {
                __Vdly__fifo_i__DOT__out_woffs = ((0U 
                                                   == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))));
            }
        }
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__weight_feeder_i__DOT____Vcellinp__x_axis__BRA__12__KET____DOT__act_row_feeder_i__i_feeder_en) 
             & (4U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q 
                = vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d;
        }
        vlSelf->__PVT__fifo_i__DOT__ptr_q = vlSelf->__PVT__fifo_i__DOT__ptr_d;
    } else {
        vlSelf->__PVT__fifo_full_shim = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__fifo_i__DOT__data_q = (0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__fifo_i__DOT__data_q);
        vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__outbuf_q = 0U;
        vlSelf->__PVT__pop_en_q = 0U;
        vlSelf->__PVT__fifo_i__DOT__empty_public = 0U;
        __Vdly__fifo_i__DOT__out_woffs = 0U;
        vlSelf->__PVT__fifo_empty_q2 = 0U;
        vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q = 0U;
        vlSelf->__PVT__fifo_empty_q1 = 0U;
        vlSelf->__PVT__fifo_i__DOT__ptr_q = 0U;
    }
    vlSelf->__PVT__fifo_i__DOT__out_woffs = __Vdly__fifo_i__DOT__out_woffs;
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = (0xffffU 
                                              & (IData)(vlSelf->__PVT__fifo_i__DOT__data_q));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = vlSelf->__PVT__fifo_i__DOT__data_pop_q;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffff8000U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xfU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffc000U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xeU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffe000U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xdU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffff000U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xcU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffff800U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 0xbU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffc00U & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 0xaU) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffe00U & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 9U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffff00U & (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 8U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xff3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xffcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfff3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfffcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))) 
              << 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xeU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(2U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xdU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(3U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xcU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(4U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xbU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(5U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 0xaU));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(6U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 9U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((8U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xff7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((9U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(9U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xaU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xaU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xbU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xffefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xbU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xcU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfff7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xcU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xdU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xdU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0xeU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                      - ((IData)(0xeU) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((0xfU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfffeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (0x8000U >> (0xfU & ((IData)(0xfU) 
                                     - ((IData)(0xfU) 
                                        + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
        = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
    feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                 >> 0xfU));
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
        = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
           | (0xffffU & ((IData)(feed_data_manager_i__DOT____Vlvbound_h2f6893bb__0) 
                         << 0xbU)));
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 6U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 6U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 0xbU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 6U)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             << 1U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             << 1U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 6U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             << 1U)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                             >> 4U)));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                             >> 4U)));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                        >> 1U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                             >> 4U)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x17U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x17U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[2U] 
                         << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                   >> 0x1cU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x17U));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x12U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x12U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x17U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x12U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xdU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xdU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0x12U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xdU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 8U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 8U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 0xdU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 3U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 3U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 8U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 3U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  >> 2U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  >> 2U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                        >> 3U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  >> 2U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x19U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x19U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[1U] 
                         << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                   >> 0x1eU)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x19U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0x14U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0x14U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x19U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0x14U));
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xfU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xfU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0x14U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xfU));
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 0xaU));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 0xaU));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xfU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 0xaU));
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1) 
                  << 5U));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1) 
                  << 5U));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 0xaU));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2) 
                  << 5U));
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_hedb1b992__1));
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__1));
    } else {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2 
            = (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
                        >> 5U));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h2f6893bb__2));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums[0U]);
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x15U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 0xbU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 0xbU)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 0xbU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0x7ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 6U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 6U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 6U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xf83fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        >> 1U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             << 1U)));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                             >> 1U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xffc1U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[2U] 
                                        << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x1cU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1cU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = ((0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]) 
               | (0xffffU & ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                             >> 4U)));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                              << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
            = (0xfffeU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U]);
    }
    if ((0x800U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 9U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                                  >> 0x17U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x17U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x17U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xf07fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x400U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0x12U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x12U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0x12U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xff83ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x200U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x13U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 0xdU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xdU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 0xdU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffc1fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x100U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 8U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 8U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffe0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        >> 3U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 3U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                             >> 3U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 8U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xffffff07U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[1U] 
                                        << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x1eU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x1eU));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = ((0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  >> 2U));
        if ((1U >= (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                              << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                        >> 0x1eU))))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 9U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0x3fffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
            = (0xfffffff8U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U]);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 7U) | (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                                  >> 0x19U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x19U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x19U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xaU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xc1ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0x14U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0x14U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xbU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfe0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x11U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xfU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xfU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xfU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xcU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfff07fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 0xaU))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 0xaU));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 0xaU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xdU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffff83ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U] 
                                        >> 5U))));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | ((IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0) 
                  << 5U));
        if ((1U >= (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                             >> 5U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xeU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xfffffc1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0 
            = (0x1fU & ((IData)(1U) + vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array[0U]));
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = ((0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]) 
               | (IData)(vlSelf->feed_data_manager_i__DOT____Vlvbound_h6f2e38fc__0));
        if ((1U >= (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0xfU;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
            = (0xffffffe0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]);
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 0xbU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 6U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 1U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                         >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 2U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[2U] 
                          << 4U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                                    >> 0x1cU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 3U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x17U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 4U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0x12U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 5U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 0xdU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 6U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 7U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                         >> 3U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 8U;
    }
    if ((1U == (0x1fU & ((vlSelf->__PVT__feed_data_manager_i__DOT__target_array[1U] 
                          << 2U) | (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                                    >> 0x1eU))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 9U;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x19U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xaU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xbU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xfU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xcU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 0xaU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xdU;
    }
    if ((1U == (0x1fU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U] 
                         >> 5U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xeU;
    }
    if ((1U == (0x1fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array[0U]))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0xfU;
    }
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U] 
           >> 0x10U);
    if ((1U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[7U]);
    }
    if ((2U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U] 
               >> 0x10U);
    }
    if ((3U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[6U]);
    }
    if ((4U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U] 
               >> 0x10U);
    }
    if ((5U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[5U]);
    }
    if ((6U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U] 
               >> 0x10U);
    }
    if ((7U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[4U]);
    }
    if ((8U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
               >> 0x10U);
    }
    if ((9U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]);
    }
    if ((0xaU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
               >> 0x10U);
    }
    if ((0xbU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]);
    }
    if ((0xcU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
               >> 0x10U);
    }
    if ((0xdU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]);
    }
    if ((0xeU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
               >> 0x10U);
    }
    if ((0xfU == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = (0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]);
    }
}
