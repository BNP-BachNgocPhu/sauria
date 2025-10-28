// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester_feed_xy_lane__F5_W3.h"

VL_ATTR_COLD void Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__0(Vsauria_tester_feed_xy_lane__F5_W3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__0\n"); );
    // Init
    SData/*15:0*/ fifo_i__DOT____Vlvbound_h30b472df__0;
    // Body
    fifo_i__DOT____Vlvbound_h30b472df__0 = (0xffffU 
                                            & vlSelf->__PVT__fifo_i__DOT__data_q[0U]);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffffffffULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | ((QData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)) 
                                                 << 0x20U));
    fifo_i__DOT____Vlvbound_h30b472df__0 = (vlSelf->__PVT__fifo_i__DOT__data_q[0U] 
                                            >> 0x10U);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffff0000ffffULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | ((QData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)) 
                                                 << 0x10U));
    fifo_i__DOT____Vlvbound_h30b472df__0 = (0xffffU 
                                            & vlSelf->__PVT__fifo_i__DOT__data_q[1U]);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffffffff0000ULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | (IData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__fifo_i__DOT__data_pop_q 
                                                           >> 0x20U)));
    }
    if ((1U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__fifo_i__DOT__data_pop_q 
                                                           >> 0x10U)));
    }
    if ((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(vlSelf->__PVT__fifo_i__DOT__data_pop_q));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[3U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[3U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (((IData)((((QData)((IData)(((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        >> 0x10U)))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]))))) 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = (((IData)((((QData)((IData)(((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        >> 0x10U)))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                                        >> 0x10U)))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U])))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q) 
                  >> 2U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q) 
                  >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en))) {
        if ((0U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 3U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3fU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(1U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3eU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(2U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3dU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(2U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(3U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3cU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(3U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(4U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3bU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(4U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(5U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3aU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(5U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(6U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x39U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(6U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                         >> (0x3fU & ((IData)(0x3fU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0x38U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                         >> (0x3fU & ((IData)(0x3fU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
        = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
        = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
           | (0x10000000U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                             << 0x15U)));
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf000000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                                >> 0x1cU)) 
                                << 0x18U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf00000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                               >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                               >> 0x18U)) 
                               << 0x14U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                               >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf0000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                              >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                              >> 0x14U)) 
                              << 0x10U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                              >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                             >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                             >> 0x10U)) 
                             << 0xcU)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                             >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf00U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                            >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                            >> 0xcU)) 
                            << 8U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                            >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf0U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                           >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                           >> 8U)) 
                           << 4U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                           >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                          >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xfU & ((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                         >> 4U))));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                          >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums);
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 0U;
    if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 1U;
    }
    if ((IData)((2U == (3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 2U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (3U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = (0x1fU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx) 
                    + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat)));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (4U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    if (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (1U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (2U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    if (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (2U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (1U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en) 
                & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en) 
             & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                   >> 0x1cU) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                  << 0x1cU));
        if ((3U >= (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                    >> 0x1cU))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf000000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                                 >> 0x18U) 
                                                + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                                << 0x18U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x18U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf00000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                                >> 0x14U) 
                                               + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                               << 0x14U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf0000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                               >> 0x10U) 
                                              + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                              << 0x10U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x10U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                              >> 0xcU) 
                                             + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                             << 0xcU)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0xcU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf00U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                             >> 8U) 
                                            + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                            << 8U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf0U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                            >> 4U) 
                                           + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                           << 4U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 4U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xfU & ((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)))));
        if ((3U >= (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((1U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x100U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x200U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x300U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x400U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x500U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x600U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x700U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x10U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x20U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x30U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x40U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x50U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x60U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x70U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (1U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (2U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (3U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (4U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (5U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (6U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (7U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                               >> 0x10U))) << 0x20U));
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))) 
                  << 0x20U));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))) 
                  << 0x20U));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))) 
                  << 0x20U));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))) 
                  << 0x20U));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                               >> 0x10U))) << 0x10U));
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))) 
                  << 0x10U));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))) 
                  << 0x10U));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))) 
                  << 0x10U));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))) 
                  << 0x10U));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U))));
    if ((1U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))));
    }
    if ((2U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                  >> 0x10U))));
    }
    if ((3U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))));
    }
    if ((4U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                  >> 0x10U))));
    }
    if ((5U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))));
    }
    if ((6U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                  >> 0x10U))));
    }
    if ((7U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))));
    }
}

VL_ATTR_COLD void Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__1(Vsauria_tester_feed_xy_lane__F5_W3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__fifo_pop = ((IData)(vlSelf->__PVT__pop_en_q) 
                               & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en));
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__6__KET____DOT__ifmap_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)) 
           & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((0U != (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_transition_flag)
            ? 0U : (0xffU & ((IData)(8U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
    vlSelf->__PVT__fifo_i__DOT__down_flag = (((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs)) 
                                              & (IData)(vlSelf->__PVT__fifo_pop)) 
                                             & (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)));
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__ptr_d = 0U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__ptr_d = vlSelf->__PVT__fifo_i__DOT__ptr_q;
        if ((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) 
              & (~ (IData)(vlSelf->__PVT__fifo_i__DOT__down_flag))) 
             & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__fifo_i__DOT__ptr_d = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
        }
        if (((~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push)) 
             & (IData)(vlSelf->__PVT__fifo_i__DOT__down_flag))) {
            vlSelf->__PVT__fifo_i__DOT__ptr_d = (7U 
                                                 & ((IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q) 
                                                    - (IData)(1U)));
        }
    }
    vlSelf->__PVT__fifo_i__DOT__mux_sel = 0U;
    vlSelf->__PVT__fifo_i__DOT__reg_en = 0U;
    if ((4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (8U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (0x10U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 4U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (0x10U 
                                              | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((3U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (4U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (8U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 3U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (8U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (4U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 2U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (4U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((1U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (1U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (2U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 1U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (2U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = (1U 
                                                   | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel));
        }
    }
    if (((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
         & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (1U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if (vlSelf->__PVT__fifo_i__DOT__down_flag) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = 0x1fU;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[6U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0);
        vlSelf->__PVT__fifo_i__DOT__data_mux[7U] = 
            (0xffffU & (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0 
                                >> 0x20U)));
    } else {
        vlSelf->__PVT__fifo_i__DOT__data_mux[6U] = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_mux[7U] = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[5U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                                    >> 0x20U)) << 0x10U));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__fifo_i__DOT__data_q[6U]))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[5U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                                    >> 0x20U)) << 0x10U));
    }
    if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[3U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2);
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                        >> 0x20U)));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[5U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->__PVT__fifo_i__DOT__data_q[4U])) 
                                                  >> 0x10U)));
        vlSelf->__PVT__fifo_i__DOT__data_mux[3U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3);
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                        >> 0x20U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[2U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                                    >> 0x20U)) << 0x10U));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__fifo_i__DOT__data_q[3U]))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[2U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                                    >> 0x20U)) << 0x10U));
    }
    if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[0U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2);
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                        >> 0x20U)));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->__PVT__fifo_i__DOT__data_q[1U])) 
                                                  >> 0x10U)));
        vlSelf->__PVT__fifo_i__DOT__data_mux[0U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3);
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                        >> 0x20U)));
    }
}

VL_ATTR_COLD void Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__0(Vsauria_tester_feed_xy_lane__F5_W3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__0\n"); );
    // Init
    SData/*15:0*/ fifo_i__DOT____Vlvbound_h30b472df__0;
    // Body
    fifo_i__DOT____Vlvbound_h30b472df__0 = (0xffffU 
                                            & vlSelf->__PVT__fifo_i__DOT__data_q[0U]);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffffffffULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | ((QData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)) 
                                                 << 0x20U));
    fifo_i__DOT____Vlvbound_h30b472df__0 = (vlSelf->__PVT__fifo_i__DOT__data_q[0U] 
                                            >> 0x10U);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffff0000ffffULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | ((QData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)) 
                                                 << 0x10U));
    fifo_i__DOT____Vlvbound_h30b472df__0 = (0xffffU 
                                            & vlSelf->__PVT__fifo_i__DOT__data_q[1U]);
    vlSelf->__PVT__fifo_i__DOT__data_pop_q = ((0xffffffff0000ULL 
                                               & vlSelf->__PVT__fifo_i__DOT__data_pop_q) 
                                              | (IData)((IData)(fifo_i__DOT____Vlvbound_h30b472df__0)));
    vlSelf->__PVT__fifo_i__DOT__outbuf_d = 0U;
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__fifo_i__DOT__data_pop_q 
                                                           >> 0x20U)));
    }
    if ((1U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__fifo_i__DOT__data_pop_q 
                                                           >> 0x10U)));
    }
    if ((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs))) {
        vlSelf->__PVT__fifo_i__DOT__outbuf_d = (0xffffU 
                                                & (IData)(vlSelf->__PVT__fifo_i__DOT__data_pop_q));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx 
        = (0x1ffU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q) 
                     - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__woffs_init_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv 
        = (0x1ffU & (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)));
    vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign 
        = (1U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx) 
                 >> 8U));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0x3fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffff80U & (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 7U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xffffffc0U & (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 6U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xcfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xffffffe0U & (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 5U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffff0U & (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 4U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xf3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffff8U & (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 3U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | (0xfffffffcU & (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                                 << 2U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat 
        = ((0xfcU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat)) 
           | ((0xfffffffeU & (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                               << 1U) & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))) 
              | ((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q)) 
                 & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_q))));
    vlSelf->__PVT__fifo_i__DOT__empty = ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
                                         | (IData)(vlSelf->__PVT__fifo_i__DOT__empty_start_q));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
        = ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[3U] 
            << 0x10U) | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[3U] 
                         >> 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]) 
                                     | (0xffffU & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U])))) 
                    << 0x10U) | (QData)((IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U] 
                                                 >> 0x10U)))));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
        = (((IData)((((QData)((IData)(((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        >> 0x10U)))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]))))) 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U])))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[2U] 
                                                                >> 0x10U)))) 
                                 >> 0x20U)));
    vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
        = (((IData)((((QData)((IData)(((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                        >> 0x10U)))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U]))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[0U] 
                                                        >> 0x10U)))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__srama_data_mux[1U])))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q) 
                  >> 2U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q) 
                  >> 1U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)));
    }
    if (((5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)) 
         & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en))) {
        if ((0U == (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push = 1U;
            vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs = 3U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0x7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - (- (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0x7fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3fU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)))))) 
              << 7U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(1U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xbfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3eU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 6U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(2U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xdfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3dU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(2U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 5U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((3U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(3U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xefU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3cU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(3U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 4U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xf7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((4U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(4U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xf7U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3bU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(4U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 3U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((5U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(5U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfbU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x3aU >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(5U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 2U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | (((6U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(6U) 
                                          - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfdU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | (((0x39U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
               & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                          >> (0x3fU & ((IData)(0x3fU) 
                                       - ((IData)(6U) 
                                          + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))) 
              << 1U));
    vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat 
        = ((0xfeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)) 
           | ((7U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv)) 
              & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                         >> (0x3fU & ((IData)(0x3fU) 
                                      - ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_inv))))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat 
        = ((0xfeU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat)) 
           | ((0x38U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx)) 
              & (IData)((vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__Dil_pat_mux 
                         >> (0x3fU & ((IData)(0x3fU) 
                                      - ((IData)(7U) 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx))))))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shifted_dil_pat_d 
        = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__valid_data_q1)
            ? ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__dil_shift_idx_sign)
                ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__rshifted_dil_pat)
                : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__lshifted_dil_pat))
            : 0U);
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
        = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
        = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
           | (0x10000000U & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat) 
                             << 0x15U)));
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf000000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                                >> 0x1cU)) 
                                << 0x18U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf00000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                               >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                               >> 0x18U)) 
                               << 0x14U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                               >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf0000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                              >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                              >> 0x14U)) 
                              << 0x10U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                              >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                             >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                             >> 0x10U)) 
                             << 0xcU)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf000U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                             >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf00U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                            >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                            >> 0xcU)) 
                            << 8U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf00U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                            >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xf0U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                           >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0U & (((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                           >> 8U)) 
                           << 4U)));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xf0U & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                           >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array) 
               | (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                          >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xfU & ((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                                         >> 4U))));
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums) 
               | (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__par_sums 
                          >> 4U)));
        vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
            = (0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array);
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number 
        = (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__par_sums);
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = 1U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__empty_start_d = vlSelf->__PVT__fifo_i__DOT__empty_start_q;
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__empty_start_d = 0U;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 0U;
    if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 1U;
    }
    if ((IData)((2U == (3U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q))))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx = 2U;
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat 
        = (3U & (((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number) 
                  > (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs))
                  ? (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__n_free_regs)
                  : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number)));
    vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx 
        = (0x1fU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx) 
                    + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__elm_number_sat)));
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new = 0U;
    if (((0U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (0U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (4U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    if (((1U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (1U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (2U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    if (((2U >= (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)) 
         & (2U < (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__new_active_idx)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new 
            = (1U | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
        = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_q;
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
    } else if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en) 
                & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d = 0U;
        }
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d 
            = ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_d) 
               | (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_feeder_clear)))) {
        if (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en) 
             & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d 
                = vlSelf->__PVT__feed_data_manager_i__DOT__regs_active_new;
        }
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__target_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array = 0U;
    vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
    if ((0x80U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                   >> 0x1cU) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                  << 0x1cU));
        if ((3U >= (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                    >> 0x1cU))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 0U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x40U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf000000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                                 >> 0x18U) 
                                                + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                                << 0x18U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x18U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 1U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xf0ffffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x20U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf00000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                                >> 0x14U) 
                                               + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                               << 0x14U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x14U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 2U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xff0fffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((0x10U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf0000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                               >> 0x10U) 
                                              + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                              << 0x10U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0x10U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 3U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfff0ffffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((8U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf000U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                              >> 0xcU) 
                                             + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                             << 0xcU)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 0xcU)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 4U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xffff0fffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((4U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf00U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                             >> 8U) 
                                            + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                            << 8U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 8U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 5U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffff0ffU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((2U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xf0U & (((IData)(1U) + ((vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                            >> 4U) 
                                           + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx))) 
                           << 4U)));
        if ((3U >= (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                            >> 4U)))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 6U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xffffff0fU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((1U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__final_dil_pat))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = ((0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array) 
               | (0xfU & ((IData)(1U) + (vlSelf->__PVT__feed_data_manager_i__DOT__elm_idx_array 
                                         + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_used_idx)))));
        if ((3U >= (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
            vlSelf->__PVT__feed_data_manager_i__DOT__last_rd = 7U;
        }
    } else {
        vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
            = (0xfffffff0U & vlSelf->__PVT__feed_data_manager_i__DOT__target_array);
    }
    if ((1U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x100U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x200U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x300U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x400U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x500U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x600U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((1U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x700U | (0xffU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x10U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x20U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x30U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x40U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x50U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x60U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((2U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0x70U | (0xf0fU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                >> 0x1cU))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x18U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (1U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x14U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (2U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0x10U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (3U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 0xcU)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (4U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (5U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & (vlSelf->__PVT__feed_data_manager_i__DOT__target_array 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (6U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    if ((3U == (0xfU & vlSelf->__PVT__feed_data_manager_i__DOT__target_array))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array 
            = (7U | (0xff0U & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                               >> 0x10U))) << 0x20U));
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))) 
                  << 0x20U));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))) 
                  << 0x20U));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))) 
                  << 0x20U));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                   >> 0x10U))) << 0x20U));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 8U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))) 
                  << 0x20U));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                               >> 0x10U))) << 0x10U));
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))) 
                  << 0x10U));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))) 
                  << 0x10U));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))) 
                  << 0x10U));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                   >> 0x10U))) << 0x10U));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array) 
                        >> 4U)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffff0000ffffULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | ((QData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))) 
                  << 0x10U));
    }
    vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
        = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
           | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U] 
                              >> 0x10U))));
    if ((1U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[3U]))));
    }
    if ((2U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U] 
                                  >> 0x10U))));
    }
    if ((3U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[2U]))));
    }
    if ((4U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U] 
                                  >> 0x10U))));
    }
    if ((5U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[1U]))));
    }
    if ((6U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U] 
                                  >> 0x10U))));
    }
    if ((7U == (0xfU & (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__mux_control_array)))) {
        vlSelf->__PVT__feed_data_manager_i__DOT__regs_d 
            = ((0xffffffff0000ULL & vlSelf->__PVT__feed_data_manager_i__DOT__regs_d) 
               | (IData)((IData)((0xffffU & vlSelf->__PVT__feed_data_manager_i__DOT__sram_elements[0U]))));
    }
}

VL_ATTR_COLD void Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__1(Vsauria_tester_feed_xy_lane__F5_W3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsauria_tester_feed_xy_lane__F5_W3___settle__TOP__sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__1\n"); );
    // Body
    vlSelf->__PVT__fifo_pop = ((IData)(vlSelf->__PVT__pop_en_q) 
                               & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__sa_pipeline_en));
    vlSelf->__PVT__feed_data_manager_i__DOT__pipeline_regs_en 
        = (((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT____Vcellinp__y_axis__BRA__7__KET____DOT__ifmap_feeder_i__i_feeder_en) 
            & (IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)) 
           & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
    vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__feeders_update)
            ? 0U : (0xffU & ((0U != (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_en_d))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__last_rd))
                              : (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__read_ptr_q))));
    vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_d 
        = ((IData)(vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT__ifmap_feeder_i__DOT__x_transition_flag)
            ? 0U : (0xffU & ((IData)(8U) + (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__shift_idx_cnt_q))));
    vlSelf->__PVT__fifo_i__DOT__down_flag = (((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__out_woffs)) 
                                              & (IData)(vlSelf->__PVT__fifo_pop)) 
                                             & (~ (IData)(vlSelf->__PVT__fifo_i__DOT__empty)));
    if (vlSymsp->TOP.sauria_tester__DOT__dut__DOT__sauria_core_i__DOT__sauria_logic_top_i__DOT____Vcellinp__ifmap_feeder_i__i_clearfifo) {
        vlSelf->__PVT__fifo_i__DOT__ptr_d = 0U;
    } else {
        vlSelf->__PVT__fifo_i__DOT__ptr_d = vlSelf->__PVT__fifo_i__DOT__ptr_q;
        if ((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) 
              & (~ (IData)(vlSelf->__PVT__fifo_i__DOT__down_flag))) 
             & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
            vlSelf->__PVT__fifo_i__DOT__ptr_d = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)));
        }
        if (((~ (IData)(vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push)) 
             & (IData)(vlSelf->__PVT__fifo_i__DOT__down_flag))) {
            vlSelf->__PVT__fifo_i__DOT__ptr_d = (7U 
                                                 & ((IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q) 
                                                    - (IData)(1U)));
        }
    }
    vlSelf->__PVT__fifo_i__DOT__mux_sel = 0U;
    vlSelf->__PVT__fifo_i__DOT__reg_en = 0U;
    if ((4U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (8U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (0x10U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 4U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (0x10U 
                                              | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((3U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (4U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (8U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 3U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (8U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((2U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (4U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 2U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (4U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((1U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = ((IData)(vlSelf->__PVT__fifo_i__DOT__down_flag)
                                                    ? 
                                                   (1U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))
                                                    : 
                                                   (2U 
                                                    | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel)));
        }
    }
    if ((((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
          >> 1U) & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (2U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if ((0U == (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q))) {
        if (vlSelf->__PVT__feed_data_manager_i__DOT__fifo_push) {
            vlSelf->__PVT__fifo_i__DOT__mux_sel = (1U 
                                                   | (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel));
        }
    }
    if (((IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel) 
         & (5U != (IData)(vlSelf->__PVT__fifo_i__DOT__ptr_q)))) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = (1U | (IData)(vlSelf->__PVT__fifo_i__DOT__reg_en));
    }
    if (vlSelf->__PVT__fifo_i__DOT__down_flag) {
        vlSelf->__PVT__fifo_i__DOT__reg_en = 0x1fU;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[6U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0);
        vlSelf->__PVT__fifo_i__DOT__data_mux[7U] = 
            (0xffffU & (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__0 
                                >> 0x20U)));
    } else {
        vlSelf->__PVT__fifo_i__DOT__data_mux[6U] = 0U;
        vlSelf->__PVT__fifo_i__DOT__data_mux[7U] = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[5U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                                    >> 0x20U)) << 0x10U));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__fifo_i__DOT__data_q[6U]))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[5U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                                    >> 0x20U)) << 0x10U));
    }
    if ((4U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[3U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2);
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                        >> 0x20U)));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[5U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->__PVT__fifo_i__DOT__data_q[4U])) 
                                                  >> 0x10U)));
        vlSelf->__PVT__fifo_i__DOT__data_mux[3U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3);
        vlSelf->__PVT__fifo_i__DOT__data_mux[4U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[4U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                        >> 0x20U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[2U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                                    >> 0x20U)) << 0x10U));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__fifo_i__DOT__data_q[3U]))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffffU & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | ((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
                << 0x10U));
        vlSelf->__PVT__fifo_i__DOT__data_mux[2U] = 
            (((IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3) 
              >> 0x10U) | ((IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                                    >> 0x20U)) << 0x10U));
    }
    if ((1U & (IData)(vlSelf->__PVT__fifo_i__DOT__mux_sel))) {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
            = (((QData)((IData)((((IData)(vlSelf->__PVT__feed_data_manager_i__DOT__regs_q) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                          >> 0x10U)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->__PVT__feed_data_manager_i__DOT__regs_q 
                                                        >> 0x20U))))));
        vlSelf->__PVT__fifo_i__DOT__data_mux[0U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2);
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__2 
                        >> 0x20U)));
    } else {
        vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
            = (0xffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__fifo_i__DOT__data_q[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->__PVT__fifo_i__DOT__data_q[1U])) 
                                                  >> 0x10U)));
        vlSelf->__PVT__fifo_i__DOT__data_mux[0U] = (IData)(vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3);
        vlSelf->__PVT__fifo_i__DOT__data_mux[1U] = 
            ((0xffff0000U & vlSelf->__PVT__fifo_i__DOT__data_mux[1U]) 
             | (IData)((vlSelf->fifo_i__DOT____Vlvbound_h6ac077c1__3 
                        >> 0x20U)));
    }
}
