// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsauria_tester.h for the primary calling header

#include "verilated.h"

#include "Vsauria_tester__Syms.h"
#include "Vsauria_tester___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vsauria_tester__ConstPool__TABLE_h935cdbc4_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsauria_tester__ConstPool__TABLE_h99bf80d8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsauria_tester__ConstPool__TABLE_h13f43e0a_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsauria_tester__ConstPool__TABLE_h878affe2_0;

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__0(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx3;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state;
    CData/*4:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state;
    VlWide<15>/*455:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params;
    SData/*12:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr;
    CData/*2:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count;
    CData/*4:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start;
    CData/*4:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance;
    IData/*24:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr;
    SData/*14:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep;
    CData/*5:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter;
    IData/*23:0*/ __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr;
    IData/*31:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg;
    CData/*5:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state;
    CData/*5:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state;
    CData/*0:0*/ __Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment;
    CData/*3:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst;
    CData/*2:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state;
    CData/*7:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    CData/*1:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state;
    IData/*27:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state;
    CData/*0:0*/ __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished;
    // Body
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0 = 0U;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len;
    __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0 = 0U;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU];
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state;
    __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state 
        = vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__cen)))) {
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__rdwen) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram__DOT__unnamedblk2__DOT__t = 0x10U;
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U] 
                = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U]) 
                   | ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                       .at(((IData)(1U) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                       << 8U) | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                      .at(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U] 
                = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[0U]) 
                   | (0xffff0000U & ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                      .at(((IData)(3U) 
                                           + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                      << 0x18U) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                                   .at(
                                                       ((IData)(2U) 
                                                        + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                                   << 0x10U))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U] 
                = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U]) 
                   | ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                       .at(((IData)(5U) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                       << 8U) | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                      .at(((IData)(4U) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U] 
                = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[1U]) 
                   | (0xffff0000U & ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                      .at(((IData)(7U) 
                                           + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                      << 0x18U) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                                   .at(
                                                       ((IData)(6U) 
                                                        + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                                   << 0x10U))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U] 
                = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U]) 
                   | ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                       .at(((IData)(9U) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                       << 8U) | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                      .at(((IData)(8U) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U] 
                = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[2U]) 
                   | (0xffff0000U & ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                      .at(((IData)(0xbU) 
                                           + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                      << 0x18U) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                                   .at(
                                                       ((IData)(0xaU) 
                                                        + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                                   << 0x10U))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U] 
                = ((0xffff0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U]) 
                   | ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                       .at(((IData)(0xdU) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                       << 8U) | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                      .at(((IData)(0xcU) + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr))));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U] 
                = ((0xffffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_dout[3U]) 
                   | (0xffff0000U & ((vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                      .at(((IData)(0xfU) 
                                           + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                      << 0x18U) | (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__mem
                                                   .at(
                                                       ((IData)(0xeU) 
                                                        + vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_addr)) 
                                                   << 0x10U))));
        }
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__rdwen)))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram__DOT__unnamedblk1__DOT__b = 0x10U;
        }
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_new_transaction) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__r_transaction_complete)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar)));
    } else if (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_new_transaction)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__r_transaction_complete))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar) 
                       - (IData)(1U)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw)));
    } else if (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw) 
                       - (IData)(1U)));
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_new_transaction) 
         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w)));
    } else if (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_new_transaction)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w 
            = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w) 
                       - (IData)(1U)));
    }
    if ((((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)) 
          & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
             >> 6U)) & (0x10U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr 
                & (~ vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb)) 
               | (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U] 
                    << 0x15U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                 >> 0xbU)) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb));
    }
    if ((((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)) 
          & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
             >> 6U)) & (0x20U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
                & (~ vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb)) 
               | (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U] 
                    << 0x15U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                 >> 0xbU)) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb));
    }
    if ((((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)) 
          & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
             >> 6U)) & (0x30U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt 
                & (~ vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb)) 
               | (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U] 
                    << 0x15U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                 >> 0xbU)) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb));
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state) {
            if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction) 
                 & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                       >> 0x10U)))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left 
                    = (0xfffffffU & ((IData)(1U) + vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left));
            } else if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                               >> 0x10U) & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction))))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left 
                    = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left 
                                     - (IData)(1U)));
            }
            if ((((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                   >> 0x10U) & (1U == vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left)) 
                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state = 0U;
            }
            if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction) 
                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__last))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished = 1U;
            }
        }
    } else {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished = 0U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state = 1U;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->rstn_sys) << 6U) 
                    | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__last) 
                        << 5U) | ((0x10U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                                            >> 0xeU)) 
                                  | (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar)) 
                                      << 3U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start) 
                                                 << 2U) 
                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state))))));
    if (Vsauria_tester__ConstPool__TABLE_h935cdbc4_0
        [__Vtableidx1]) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state 
            = Vsauria_tester__ConstPool__TABLE_h99bf80d8_0
            [__Vtableidx1];
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
            = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
               >> 4U);
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
            = (0xfffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt 
                              >> 4U) + (0U != (0xfU 
                                               & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt))));
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__awlen 
            = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_sig) 
                < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig))
                ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_sig)
                : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig));
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state))) {
        if (((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)) 
             & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                >> 0x13U))) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                 + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                                 - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__last)
                    ? 0U : 1U);
        }
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
            = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr 
               >> 4U);
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
            = (0xfffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__actual_btt 
                              >> 4U) + (0U != (0xfU 
                                               & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__actual_btt))));
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen 
            = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_sig) 
                < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig))
                ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_sig)
                : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig));
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state))) {
        if (((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state)) 
             & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                >> 0x12U))) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                 + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                                 - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__last)
                    ? 0U : 1U);
        }
    }
    if (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.write) {
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[0U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[0U];
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[1U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[1U];
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[2U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[2U];
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[3U] 
            = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[3U];
        __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0 = 1U;
        __Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0 
            = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx)));
    }
    if (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.read) {
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx))][0U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx))][1U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx))][2U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.data[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx))][3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx)));
    }
    __Vtableidx3 = (((IData)(vlSelf->rstn_sys) << 7U) 
                    | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start) 
                        << 6U) | (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw)) 
                                   << 5U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__last) 
                                              << 4U) 
                                             | ((8U 
                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                                                    >> 0x10U)) 
                                                | (((0x1fffcU 
                                                     & ((((3U 
                                                           == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
                                                          << 2U) 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                                                            >> 0xfU)) 
                                                        & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                                                            == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)) 
                                                           << 2U))) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)))))));
    if (Vsauria_tester__ConstPool__TABLE_h13f43e0a_0
        [__Vtableidx3]) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state 
            = Vsauria_tester__ConstPool__TABLE_h878affe2_0
            [__Vtableidx3];
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left 
            = (0xfffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt 
                              >> 4U) + (0U != (0xfU 
                                               & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt))));
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment 
            = (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt);
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment 
            = (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr);
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst = 1U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst) {
            if ((1U == vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left)) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfffeU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((0U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                          & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                             | (0U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfffdU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((1U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (1U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 1U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfffbU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((2U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (2U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 2U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfff7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((3U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (3U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 3U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xffefU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((4U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (4U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 4U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xffdfU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((5U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (5U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 5U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xffbfU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((6U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (6U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 6U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xff7fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((7U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (7U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 7U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfeffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((8U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (8U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 8U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfdffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((9U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (9U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 9U));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfbffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xaU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (0xaU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 0xaU));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xf7ffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xbU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (0xbU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 0xbU));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xefffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xcU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (0xcU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 0xcU));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xdfffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xdU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (0xdU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 0xdU));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xbfffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xeU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                              | (0xeU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)))) 
                          << 0xeU));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0x7fffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                          << 0xfU));
            } else {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfff8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((2U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           << 2U) | (((1U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                      << 1U) | (0U 
                                                >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xffc7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((5U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           << 5U) | (((4U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                      << 4U) | ((3U 
                                                 >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                                << 3U))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfe3fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((8U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           << 8U) | (((7U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                      << 7U) | ((6U 
                                                 >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                                << 6U))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xf1ffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xbU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           << 0xbU) | (((0xaU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                        << 0xaU) | 
                                       ((9U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                        << 9U))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0x8fffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0xeU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                           << 0xeU) | (((0xdU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                        << 0xdU) | 
                                       ((0xcU >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment)) 
                                        << 0xcU))));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = (0x8000U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = (0x8000U | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb));
            }
        }
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len = 0U;
        if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w)) 
             & ((~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty)) 
                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)))) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 3U;
        }
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty)))) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 3U;
        }
    } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state))) {
        if ((0x20000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left 
                                 - (IData)(1U)));
            if ((2U == vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left)) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0x3fffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                           << 0xfU) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                        | (0xeU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                       << 0xeU)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xcfffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (0xdU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 0xdU) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                        | (0xcU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                       << 0xcU)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xf3ffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (0xbU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 0xbU) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                        | (0xaU < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                       << 0xaU)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfcffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (9U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 9U) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                      | (8U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                     << 8U)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xff3fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (7U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 7U) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                      | (6U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                     << 6U)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xffcfU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (5U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 5U) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                      | (4U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                     << 4U)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfff3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | ((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                            | (3U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                           << 3U) | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                      | (2U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                     << 2U)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb 
                    = ((0xfffcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb)) 
                       | (1U | (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment)) 
                                 | (1U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment))) 
                                << 1U)));
            } else {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__wstrb = 0xffffU;
            }
            if ((1U == vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left)) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 0U;
            } else if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                        == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 1U;
            } else if (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)) 
                        & (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty))) {
                __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state))) {
        if ((((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)) 
              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                 >> 0x13U)) | (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)))) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 1U;
        }
    }
    if (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.read) {
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx))][0U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx))][1U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx))][2U];
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem
            [(1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx))][3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx)));
    }
    if (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.write) {
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[0U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[1U] 
                << 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[0U] 
                             >> 4U));
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[1U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[2U] 
                << 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[1U] 
                             >> 4U));
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[2U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[3U] 
                << 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[2U] 
                             >> 4U));
        __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[3U] 
            = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                << 0x1cU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[3U] 
                             >> 4U));
        __Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0 = 1U;
        __Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0 
            = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx 
            = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx)));
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond) {
            if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k = 0U;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter 
                                    + ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                                        << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                                                  >> 0x1cU))));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter 
                                    + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                                       >> 0x14U)));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k)));
            }
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond) {
            if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c = 0U;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter 
                                    + ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                                        << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                                  >> 0x1cU))));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter 
                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U]));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c)));
            }
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow))) {
                if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow))) {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter = 0U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter = 0U;
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y = 0U;
                } else {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter 
                        = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter 
                                        + ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                            << 0xcU) 
                                           | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                                              >> 0x14U))));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter 
                        = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter 
                                        + ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                                            << 8U) 
                                           | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U] 
                                              >> 0x18U))));
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y)));
                }
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x = 0U;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter 
                                    + (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                                                 >> 0x10U))));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter 
                                    + (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                                 >> 0xcU))));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x)));
            }
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state) {
        if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count)));
            if ((0x16U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state = 0U;
            }
        }
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_wresp_sync) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state = 1U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state) {
        if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter)));
            if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state = 0U;
            }
        }
    } else if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state = 1U;
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state))) {
        if ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x10U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state))) {
        if ((4U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU])) {
            __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state))) {
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU])) {
            __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state = 0U;
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state) {
            if ((0x10000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU])) {
                vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state = 0U;
            }
        }
    } else if ((0x20000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU])) {
        vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rstn_sys)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk1__DOT__outstanding_ar;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__state;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
            = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state;
    if (__Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0][0U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0][1U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0][2U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0][3U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__mem__v0[3U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__outstanding_aw;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transfers_left;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last_alignment;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_alignment;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__first_burst;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state;
    if ((1U & (~ (IData)(vlSelf->rstn_sys)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len;
    if (__Vdlyvset__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0][0U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0][1U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0][2U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem[__Vdlyvdim0__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0][3U] 
            = __Vdlyvval__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__mem__v0[3U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_count;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_counter;
    if ((1U & (~ (IData)(vlSelf->rstn_sys)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__err_slv_i__DOT__write_state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_sig 
        = ((0x100U > vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left)
            ? (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig 
        = (((1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                   >> 8U)) != (1U & (((IData)(0xff0U) 
                                      + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                         << 4U)) >> 0xcU)))
            ? (0xffU & (((0xfffff00U & (((IData)(1U) 
                                         + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                            >> 8U)) 
                                        << 8U)) - vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__aligned_addr) 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__awlen)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__last 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
           <= (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__awlen))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_sig 
        = ((0x100U > vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left)
            ? (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__actual_btt 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt 
           + (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig 
        = (((1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                   >> 8U)) != (1U & (((IData)(0xff0U) 
                                      + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                         << 4U)) >> 0xcU)))
            ? (0xffU & (((0xfffff00U & (((IData)(1U) 
                                         + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                            >> 8U)) 
                                        << 8U)) - vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__aligned_addr) 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__last 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
           <= (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__arlen))));
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
            = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
               >> 4U);
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
            = (0xfffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__actual_btt 
                              >> 4U) + (0U != (0xfU 
                                               & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__actual_btt))));
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len 
            = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_sig) 
                < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig))
                ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_sig)
                : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig));
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state))) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT____Vcellinp__transaction_generator_I__advance) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                 + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                = (0xfffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                                 - (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers)));
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last)
                    ? 0U : 1U);
        }
    }
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__read_idx) 
           == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_writer_I__DOT__write_idx));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.full 
        = (((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx)) 
            == (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx))) 
           & ((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx) 
                     >> 1U)) != (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx) 
                                       >> 1U))));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.empty 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__read_idx) 
           == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__data_fifo_reader_I__DOT__write_idx));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 0U;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance = 0U;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset 
        = (0x1ffffffU & ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                          ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__send_SRAMC_tile_offset
                          : (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter 
                               << 1U) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter 
                                         << 1U)) + 
                             (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter 
                              << 1U))));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMA_addr 
            + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
               << 1U)) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
                          << 1U));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr 
        = (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMB_addr 
           + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
              << 1U));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMC_addr 
            + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
               << 1U)) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
                          << 1U));
    if (((((((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)) 
               | (1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
              | (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
             | (5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
            | (6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
           | (7U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
          | (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) 
         | (4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state)))) {
        if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                = (0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]);
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                              << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                        >> 0x1cU)));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                 << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                           >> 0x18U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                = (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                             >> 0xcU));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                = (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                   >> 8U);
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 4U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                = (3U | __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1 = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 0U;
            if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_dma_controller) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if ((1U & ((((((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent)) 
                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent))) 
                          & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                             >> 0x11U)) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent) 
                                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent)))) 
                        & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                           >> 0x10U)) | (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent)) 
                                          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent)) 
                                         & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                                            >> 0x11U))))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent = 0U;
                if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr))) {
                    if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr))) {
                        if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr)))) {
                                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                                            = ((2U 
                                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                                    ? 
                                                   ((IData)(0xd0030000U) 
                                                    + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr))
                                                    : 
                                                   (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset 
                                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                                    ? 
                                                   (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_tile_offset 
                                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr)
                                                    : 
                                                   (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_tile_offset 
                                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr)));
                                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0x10U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                         >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr)))) {
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0U;
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                                        = (3U | __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 2U;
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                                        = (0xfffffeffU 
                                           & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr))) {
                    if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr)))) {
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                                        = ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                                ? (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset 
                                                   + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr)
                                                : ((IData)(0xd0030000U) 
                                                   + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr)))
                                            : ((1U 
                                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                                ? ((IData)(0xd0020000U) 
                                                   + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr))
                                                : ((IData)(0xd0010000U) 
                                                   + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr))));
                                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0x20U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                     >> 3U)))) {
                    if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr))) {
                        if ((1U & (~ ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr)))) {
                                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                                    = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__btt;
                                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0x30U;
                            }
                        }
                    }
                }
            } else if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent = 1U;
            } else if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent = 1U;
            }
        } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state)))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter)
                        ? 5U : 3U);
            }
        } else if ((5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 6U;
            }
        } else if ((6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 7U;
            }
        } else if ((7U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
                    = ((2U & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata)
                        ? 0xdU : 4U);
            }
        } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0xcU;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                = (1U | (0xfffffffcU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata));
            if (vlSelf->sauria_tester__DOT__dut__DOT__dma_rd_intr2control) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria)
                        ? 4U : 8U);
            }
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                = (0xfffffeffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
        } else {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0xcU;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                = (2U | ((0xfffffffcU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata) 
                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria)));
            if (vlSelf->sauria_tester__DOT__dut__DOT__dma_wr_intr2control) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 8U;
            }
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
                = (0xfffffeffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
        }
    } else if ((8U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 9U;
        }
    } else if ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0xaU;
        }
    } else if ((0xaU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 0U;
        if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria)
                    ? 0xcU : 5U);
        }
    } else if ((0xdU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr 
            = (0x7fffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr) 
                          + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__btt));
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
            = (3U | __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 4U;
        if ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
             == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim)) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y = 0U;
            if ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                 == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim)) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1 
                    = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_reg;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z = 0U;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                                    + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr));
            }
        } else {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
                = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
                                + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                                + vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr));
        }
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))) {
            if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))) {
                if (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                      == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim) 
                     & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                        == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__send_SRAMC_tile_offset 
                        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__tmp_SRAMC_tile_offset;
                    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2) 
                         | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__single_tile))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 0U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 3U;
                    } else if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 3U;
                    } else {
                        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change) {
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr = 1U;
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                                = (0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]);
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                                              << 4U) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                                >> 0x1cU)));
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                                = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                                 << 8U) 
                                                | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                                   >> 0x18U)));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                                = (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                             >> 0xcU));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                                = (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                                   >> 8U);
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 0U;
                        } else {
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
                                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                              << 8U) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                                >> 0x18U)));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq)
                                    ? 0U : (0xffffffU 
                                            & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U]));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim = 0U;
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                                = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                                >> 4U));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                              << 8U) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                                >> 0x18U)));
                            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 1U;
                        }
                        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
                    }
                } else {
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
                }
            } else {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__tmp_SRAMC_tile_offset 
                    = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset;
                if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile) {
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__send_SRAMC_tile_offset 
                        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset;
                }
                if (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                      == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim) 
                     & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                        == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim))) {
                    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile) 
                         & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__single_tile)))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                            = (0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]);
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                            = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                                          << 4U) | 
                                         (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                          >> 0x1cU)));
                        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                            = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                             << 8U) 
                                            | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                               >> 0x18U)));
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                            = (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                         >> 0xcU));
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                            = (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                               >> 8U);
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile = 0U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 0U;
                    } else {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 3U;
                    }
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action 
                        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__single_tile)
                            ? 2U : 1U);
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 3U;
                } else {
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))) {
            if ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                 == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim)) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
                    = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                     << 0x14U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                                  >> 0xcU)));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq)
                        ? 0U : (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                              << 0xcU) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
                                                >> 0x14U))));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                    = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq) 
                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ch_eq))
                        ? 0U : (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                          >> 0x10U)));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                    = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                    >> 4U));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                    = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                     << 0x14U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                                  >> 0xcU)));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                    = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
                                     << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                               >> 0x1cU)));
                if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change) {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 2U;
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
                } else {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 3U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 3U;
                }
            } else {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
            if (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
                  == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim) 
                 & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
                    == vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim))) {
                if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change) {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
                        = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                      << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                                >> 0x18U)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq)
                            ? 0U : (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U]));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim = 0U;
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                        = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                        >> 4U));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                        = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                      << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                                >> 0x18U)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 1U;
                } else {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
                        = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                         << 0x14U) 
                                        | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                           >> 0xcU)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq)
                            ? 0U : (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                                  << 0xcU) 
                                                 | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
                                                    >> 0x14U))));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ch_eq))
                            ? 0U : (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                              >> 0x10U)));
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                        = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                        >> 4U));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                        = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                         << 0x14U) 
                                        | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                           >> 0xcU)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                        = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
                                         << 4U) | (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                                   >> 0x1cU)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 2U;
                }
            }
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
        }
    } else if ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter = 1U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_ifmaps_change 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_weights_change 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change;
        if ((0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0U;
            } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 1U;
            } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action))) {
                if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2)))) {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance = 1U;
                }
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0xbU;
            }
        }
    } else if ((0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0xeU;
        }
    } else if ((0xeU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
            = (3U | __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata);
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr = 4U;
        if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state)) 
             & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change)))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                              << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                        >> 0x18U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq)
                    ? 0U : (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U]));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim = 0U;
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                = (0xffffffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                >> 4U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                              << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                        >> 0x18U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
        } else if ((((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2)) 
                     & (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))) 
                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change)))) {
            if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0xcU;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
                    = (0xfffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]);
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
                    = (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                                  << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                            >> 0x1cU)));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                    = (0xffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                                     << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                               >> 0x18U)));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
                    = (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                                 >> 0xcU));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
                    = (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                       >> 8U);
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
            }
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__start_wresp_sync = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 1U;
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change = 0U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond) {
            if ((0U != (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                   << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                             >> 0x18U))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change = 1U;
            }
        }
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change = 0U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond) {
            if ((IData)(((0U != (0xfff0000U & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU])) 
                         | (0U != (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
                                              << 4U) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                                >> 0x1cU))))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change = 1U;
            }
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond) {
            if ((0U != (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                   << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                             >> 0x18U))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change = 1U;
            }
        }
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change = 0U;
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond) {
            if ((IData)(((0U != (0xfff0000U & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU])) 
                         | (0U != (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
                                              << 4U) 
                                             | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                                >> 0x1cU))))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change = 1U;
            }
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond) {
            if ((0U != (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                  >> 4U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change = 1U;
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_change = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmaps_change = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_change = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rstn_sys)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__err_slv_i__DOT__read_state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_xcounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_ycounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__psums_kcounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_tile_offset;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMC_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__local_SRAM_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ycounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zcounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__y_incr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__z_incr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ylim;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zlim;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ystep;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__zstep;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_1;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_2;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_dma_iter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__goto_sync_sauria;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__next_action;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wdata;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__addr_sent;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__data_sent;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__wresp_sync_state;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_4k_sig 
        = (((1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                   >> 8U)) != (1U & (((IData)(0xff0U) 
                                      + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                         << 4U)) >> 0xcU)))
            ? (0xffU & (((0xfffff00U & (((IData)(1U) 
                                         + (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr 
                                            >> 8U)) 
                                        << 8U)) - vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__aligned_addr) 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__len_sig 
        = ((0x100U > vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left)
            ? (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
                        - (IData)(1U))) : 0xffU);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__actual_btt 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt 
           + (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__actual_btt 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt 
           + (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__last 
        = (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__transaction_generator_I__DOT__transfers_left 
           <= (0x1ffU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__done) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg = 1U;
    }
    if (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
              >> 0x10U)) & (1U == vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg = 1U;
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr 
            = (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[0U] 
                        >> 5U));
        if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[0U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rresp = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state = 2U;
        if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = (0x2d000000U | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero) 
                                  << 8U));
        } else if ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en) 
                    << 1U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en));
        } else if ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg) 
                    << 1U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg));
        } else if ((0x10U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rstart_addr_array
                [0U];
        } else if ((0x20U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__wstart_addr_array
                [0U];
        } else if ((0x30U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__btt_array
                [0U];
        } else {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata = 0x3badadd2U;
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rresp = 2U;
        }
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state))) {
        if ((1U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[0U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state = 0U;
        }
    }
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr 
            = (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U] 
                        >> 0xfU));
        if ((0x800U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bresp = 0U;
        if ((0x40U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U])) {
            if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start 
                    = (1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                              >> 0xbU) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start 
                    = (1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                              >> 0xcU) & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb 
                                          >> 1U)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                             >> 0x13U));
            } else if ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en 
                    = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en) 
                              & (~ vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb)) 
                             | ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                 >> 0xbU) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb)));
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en 
                    = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en) 
                              & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb 
                                    >> 1U))) | ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                                                 >> 0xcU) 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb 
                                                   >> 1U))));
            } else if ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                            >> 0xbU) & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb))) {
                    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg = 0U;
                }
                if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U] 
                            >> 0xcU) & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bit_wstrb 
                                        >> 1U)))) {
                    __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg = 0U;
                }
            } else if ((0x10U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                if ((0x20U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                    if ((0x30U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr))) {
                        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bresp = 2U;
                    }
                }
            }
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state))) {
        if ((0x20U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_req[1U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state = 0U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__btt 
        = (0x1ffffffU & ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                          ? (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                             << 1U) : ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sub_state))
                                        ? (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                                           << 1U) : 
                                       (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ett 
                                        << 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMB_tile_offset 
        = (0x1ffffffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter 
                          << 1U) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter 
                                    << 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__SRAMA_tile_offset 
        = (0x1ffffffU & (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter 
                           << 1U) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter 
                                     << 1U)) + (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter 
                                                << 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_wresp_sync = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_dma_controller = 0U;
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
        = ((0xf000ffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U]) 
           | (0xfff0000U & ((((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                               << 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                                           >> 0x14U)) 
                             - (IData)(1U)) << 0x10U)));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
        = ((0xfffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U]) 
           | ((((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                 << 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                             >> 0x14U)) - ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                            << 0x14U) 
                                           | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                              >> 0xcU))) 
              << 0x14U));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
        = ((0xfffff000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U]) 
           | (0xfffU & ((((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                           << 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                                       >> 0x14U)) - 
                         ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                           << 0x14U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                                        >> 0xcU))) 
                        >> 0xcU)));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
        = ((0xff000000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U]) 
           | (0xffffffU & (((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                             << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                       >> 0x1cU)) - 
                           (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                                       << 8U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                                                 >> 0x18U))))));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
        = ((0xf000000fU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U]) 
           | (0xffffff0U & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq) 
                              & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ch_eq))
                              ? ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                                  << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                                            >> 0x1cU))
                              : ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq)
                                  ? ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                      << 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                                                  >> 0x14U))
                                  : (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                               >> 0xcU)))) 
                            << 4U)));
    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
        = ((0xf000000fU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U]) 
           | (0xffffff0U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq)
                              ? ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                                  << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                                            >> 0x1cU))
                              : (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                                 >> 0x14U)) << 4U)));
    if (((((((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
               | (1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
              | (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
             | (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
            | (4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
           | (5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
          | (6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) 
         | (7U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)))) {
        if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0x200U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = 1U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1 = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2 = 0U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done = 0U;
            if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_edge) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                = ((0xfffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU]) 
                   | ((IData)((((QData)((IData)(((0xfff000U 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                       >> 0xcU))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                                     >> 0x18U))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                   >> 0x10U))))))) 
                      << 0xcU));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                = (((IData)((((QData)((IData)(((0xfff000U 
                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                   << 0xcU)) 
                                               | (0xfffU 
                                                  & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                     >> 0xcU))))) 
                              << 0x24U) | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                                   >> 0x18U))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                 >> 0x10U))))))) 
                    >> 0x14U) | ((IData)(((((QData)((IData)(
                                                            ((0xfff000U 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                                 << 0xcU)) 
                                                             | (0xfffU 
                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                                   >> 0xcU))))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (0xffffffU 
                                                                & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                                      >> 0x18U))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                    >> 0x10U)))))) 
                                          >> 0x20U)) 
                                 << 0xcU));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
                = (0xffU & ((IData)(((((QData)((IData)(
                                                       ((0xfff000U 
                                                         & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                            << 0xcU)) 
                                                        | (0xfffU 
                                                           & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                              >> 0xcU))))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        (0xffffffU 
                                                         & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                             << 8U) 
                                                            | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                                                               >> 0x18U))))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                       >> 0x10U)))))) 
                                     >> 0x20U)) >> 0x14U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMA_addr 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xbU] 
                    << 0x10U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xaU] 
                                 >> 0x10U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMB_addr 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xcU] 
                    << 0x10U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xbU] 
                                 >> 0x10U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_SRAMC_addr 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                    << 0x10U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xcU] 
                                 >> 0x10U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__loop_order 
                = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x10U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x12U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_A 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x13U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_B 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x14U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_C 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x15U));
            if ((0x40000U & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start 
                    = (1U & (~ (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                                >> 0x16U)));
            }
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Cw_eq 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x17U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ch_eq 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x18U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__Ck_eq 
                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                         >> 0x19U));
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_wresp_sync = 1U;
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start_dma_controller 
                = (1U & (~ (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                            >> 0x12U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 2U;
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                = ((0xffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU]) 
                   | ((IData)((((QData)((IData)((0xffffffU 
                                                 & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                     << 4U) 
                                                    | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                       >> 0x1cU))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                   << 0xcU) 
                                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                                     >> 0x14U))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                   >> 0xcU))))))) 
                      << 0x10U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
                = (((IData)((((QData)((IData)((0xffffffU 
                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                   << 4U) 
                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                     >> 0x1cU))))) 
                              << 0x24U) | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                 << 0xcU) 
                                                                | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                                   >> 0x14U))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                 >> 0xcU))))))) 
                    >> 0x10U) | ((IData)(((((QData)((IData)(
                                                            (0xffffffU 
                                                             & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                                 << 4U) 
                                                                | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                                   >> 0x1cU))))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (0xffffffU 
                                                                & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                    << 0xcU) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                                      >> 0x14U))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                    >> 0xcU)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                = ((0xfffff000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU]) 
                   | ((IData)(((((QData)((IData)((0xffffffU 
                                                  & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                      << 4U) 
                                                     | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                                                        >> 0x1cU))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (0xffffffU 
                                                                & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                    << 0xcU) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                                                                      >> 0x14U))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                    >> 0xcU)))))) 
                               >> 0x20U)) >> 0x10U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                = ((0xfffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U]) 
                   | ((IData)((((QData)((IData)((0xffffffU 
                                                 & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                     << 8U) 
                                                    | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                       >> 0x18U))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                                     >> 0x10U))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                   >> 8U))))))) 
                      << 0x14U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U] 
                = (((IData)((((QData)((IData)((0xffffffU 
                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                   << 8U) 
                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                     >> 0x18U))))) 
                              << 0x24U) | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                                   >> 0x10U))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                 >> 8U))))))) 
                    >> 0xcU) | ((IData)(((((QData)((IData)(
                                                           (0xffffffU 
                                                            & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                                << 8U) 
                                                               | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                                  >> 0x18U))))) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              (0xffffffU 
                                                               & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                                     >> 0x10U))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                   >> 8U)))))) 
                                         >> 0x20U)) 
                                << 0x14U));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
                = ((0xffff0000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU]) 
                   | ((IData)(((((QData)((IData)((0xffffffU 
                                                  & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                      << 8U) 
                                                     | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                                                        >> 0x18U))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (0xffffffU 
                                                                & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                    << 0x10U) 
                                                                   | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                                                                      >> 0x10U))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                                                    >> 8U)))))) 
                               >> 0x20U)) >> 0xcU));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                = ((0xfffffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U]) 
                   | (0xf0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                     << 8U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
                = ((0xfff00000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U]) 
                   | (0xfffffU & ((0xfffff00U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] 
                                                 << 8U)) 
                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                                     >> 0x18U))));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                = ((0xfffff000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]) 
                   | (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] 
                                >> 0xcU)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                = ((0xfffffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U]) 
                   | (0xf0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] 
                                     << 4U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                = ((0xffffff00U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U]) 
                   | (0xffU & ((0xffffff0U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] 
                                              << 4U)) 
                               | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] 
                                  >> 0x1cU))));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
                = ((0xfffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U]) 
                   | (0xfff000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] 
                                   << 8U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
                = (0xfffffff0U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U]);
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                = ((0xfffffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U]) 
                   | (0xf0000000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] 
                                     << 0xcU)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
                = ((0xfff00000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U]) 
                   | (0xfffffU & ((0xffff000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[8U] 
                                                 << 0xcU)) 
                                  | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] 
                                     >> 0x14U))));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                = ((0xff000fffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]) 
                   | (0xfff000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[8U] 
                                   << 4U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
                = ((0xffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U]) 
                   | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U] 
                                      << 0x14U) | (0xfff00U 
                                                   & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[8U] 
                                                      >> 0xcU)))));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
                = ((0xffffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U]) 
                   | (0xff000000U & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U] 
                                     << 0xcU)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
                = ((0xfffffff0U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U]) 
                   | (0xfU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U] 
                              >> 0x14U)));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
                = ((0xffffffU & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U]));
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
                = ((0xffff0000U & __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U]) 
                   | (0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xaU]));
        } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            if ((1U & ((((((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent)) 
                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent))) 
                          & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                             >> 0x11U)) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent) 
                                           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent)))) 
                        & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                           >> 0x10U)) | (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent)) 
                                          & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent)) 
                                         & (vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U] 
                                            >> 0x11U))))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel 
                    = (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel)));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx)));
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent = 0U;
                if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count))) {
                    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = 8U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0x400U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 1U;
                    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = 3U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0x600U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 2U;
                    } else if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = 4U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0x800U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 3U;
                    } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count = 2U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 4U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region = 4U;
                    } else if ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region))) {
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 3U;
                        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx = 0U;
                    }
                } else {
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr 
                        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr)));
                    __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count 
                        = (0xfU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count) 
                                   - (IData)(1U)));
                }
            } else if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent = 1U;
            } else if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent = 1U;
            }
        } else if ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0U;
            if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state)))) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone)
                        ? 4U : 0xbU);
            }
        } else if ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 5U;
            }
        } else if ((5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 6U;
            }
        } else if ((6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
            if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state 
                    = (((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start)) 
                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone))
                        ? 0xcU : ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start)
                                   ? 7U : 0xbU));
            }
        } else {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0xcU;
            if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__0__KET__) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 8U;
            }
        }
    } else if ((8U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        if ((0x20000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 9U;
        }
    } else if ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        if ((0x10000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 0xaU;
        }
    } else if ((0xaU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        if ((0x2000U & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__core_cfg_mux_i__DOT__i_axi_mux.slv_resps_o[2U])) {
            __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state 
                = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone)
                    ? 0xcU : 0xbU);
        }
    } else if ((0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr = 0U;
        if ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state))) {
            if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 0xcU;
            } else if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1) {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2 = 1U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start = 0U;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 4U;
            } else {
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1 
                    = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_reg;
                __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 4U;
            }
        }
    } else if ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rstn_sys)))) {
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg = 0U;
        __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__transactions_left;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__aw_engine_finished;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__raddr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__waddr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rstart_addr_array[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__wstart_addr_array[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__btt_array[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_kcounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__weights_ccounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_xcounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ycounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__ifmap_ccounter;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__advance;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__current_addr_region;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__part_sel;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__count;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_1;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__last_sync_2;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[5U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[6U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[7U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[8U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[9U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xaU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xbU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__addr_sent;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__data_sent;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__wresp_sync_state;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state 
        = __Vdly__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_rd_intr2control 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__reader_intr_reg));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_wr_intr2control 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_en) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__writer_intr_reg));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT____Vcellinp__realigner_I__i_writer_start 
        = ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_zero)) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_start));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp 
        = ((0x1f000000000ULL & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp) 
           | (((QData)((IData)((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state)))) 
               << 0x23U) | (((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rdata)) 
                             << 3U) | (QData)((IData)(
                                                      (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__rresp) 
                                                        << 1U) 
                                                       | (2U 
                                                          == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__read_state))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp 
        = ((0xffffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp) 
           | ((QData)((IData)((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)))) 
              << 0x28U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp 
        = ((0x10fffffffffULL & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__cfg_axi_resp) 
           | ((QData)((IData)((((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)) 
                                << 3U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__bresp) 
                                           << 1U) | 
                                          (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__conf_regs_I__DOT__write_state)))))) 
              << 0x24U));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_reg 
        = (0xfU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow));
    vlSelf->dma_interrupt = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_wr_intr2control));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow)) 
           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__y) 
                == (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                              >> 0x10U))) << 1U) | 
              ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__x) 
               == (0xfffU & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xeU] 
                              << 4U) | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                        >> 0x1cU))))));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow)) 
           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k) 
                == (0xfffU & (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                              >> 4U))) << 3U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c) 
                                                  == 
                                                  (0xfffU 
                                                   & ((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xdU] 
                                                       << 8U) 
                                                      | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__dma_params[0xcU] 
                                                         >> 0x18U)))) 
                                                 << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__single_tile 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__first_tile) 
           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_iter_reg));
    if ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__loop_order))) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond 
            = (IData)((3U == (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow))));
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond 
            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond) 
               & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow) 
                  >> 2U));
    } else if ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__loop_order))) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond 
            = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow) 
                     >> 2U));
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond 
            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond) 
               & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow) 
                  >> 3U));
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond 
            = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow) 
                     >> 3U));
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__k_cond = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__spatial_cond 
            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__c_cond) 
               & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__sauria_dma_pointer_generator_I__DOT__overflow) 
                  >> 2U));
    }
}

extern const VlWide<34>/*1087:0*/ Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0;
extern const VlUnpacked<CData/*5:0*/, 2048> Vsauria_tester__ConstPool__TABLE_h1db5c46f_0;

VL_INLINE_OPT void Vsauria_tester___024root___sequent__TOP__2(Vsauria_tester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsauria_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsauria_tester___024root___sequent__TOP__2\n"); );
    // Init
    SData/*10:0*/ __Vtableidx2;
    VlWide<4>/*127:0*/ __Vtemp_hf5ad0edb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd541e240__0;
    VlWide<5>/*159:0*/ __Vtemp_hf2c098e3__0;
    VlWide<6>/*191:0*/ __Vtemp_h608ae408__0;
    // Body
    if (vlSelf->rstn_sys) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__byte_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__byte_cnt_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_d;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_d;
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[3U];
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_d;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q) 
                                       >> 3U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q) 
                                       >> 3U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_ar__DOT__rptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_aw__DOT__rptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q) 
                                       >> 3U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_dst_w__DOT__rptr_q)));
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if ((0x8000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U]));
        }
        if ((0x4000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U]));
        }
        if ((0x2000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U]));
        }
        if ((0x1000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[3U]));
        }
        if ((0x800U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U]));
        }
        if ((0x400U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U]));
        }
        if ((0x200U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U]));
        }
        if ((0x100U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[2U]));
        }
        if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U]));
        }
        if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U]));
        }
        if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U]));
        }
        if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[1U]));
        }
        if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U]));
        }
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U]));
        }
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U]));
        }
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_d[0U]));
        }
        if ((0x8000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U]));
        }
        if ((0x4000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U]));
        }
        if ((0x2000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U]));
        }
        if ((0x1000U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[3U]));
        }
        if ((0x800U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U]));
        }
        if ((0x400U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U]));
        }
        if ((0x200U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U]));
        }
        if ((0x100U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[2U]));
        }
        if ((0x80U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U]));
        }
        if ((0x40U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U]));
        }
        if ((0x20U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U]));
        }
        if ((0x10U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[1U]));
        }
        if ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]) 
                   | (0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U]));
        }
        if ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                = ((0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]) 
                   | (0xff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U]));
        }
        if ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                = ((0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]) 
                   | (0xff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U]));
        }
        if ((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_en_d))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]) 
                   | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_d[0U]));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_d;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop_shim_q) 
             & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.full)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_shim_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_q;
        }
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_shim_q = 0U;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                       >> 3U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                       >> 3U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q)));
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__wptr_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                       >> 2U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q) 
                                       >> 1U)));
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__wptr_q)));
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__load_aw_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_d;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_edge) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[4U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[5U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[6U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[7U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[8U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[8U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[9U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xaU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xaU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xbU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xbU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xcU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xcU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xdU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xeU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xeU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xfU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xfU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x10U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x10U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x11U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x11U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x12U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x12U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x13U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x13U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x14U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x14U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x15U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x15U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x16U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x16U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x17U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x17U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x18U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x18U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x19U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x19U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1aU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1aU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1bU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1bU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1cU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1cU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1dU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1dU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1eU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1eU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1fU] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1fU];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x20U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x20U];
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x21U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x21U];
        }
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_ar_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_d;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_n;
        if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__load_aw_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_d;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_n;
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__load_aw_lock) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_d;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_n;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n;
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_chan;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_chan[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7fU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_demux_simple__slv_resp_o[4U] 
                            >> 9U));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d)) 
                   << 2U);
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[1U] 
                    << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[0U] 
                                 >> 2U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
                    << 0x1eU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[1U] 
                                 >> 2U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
                         >> 2U));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[3U] 
                    << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[2U] 
                                 >> 6U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[4U] 
                    << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[3U] 
                                 >> 6U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[5U] 
                    << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[4U] 
                                 >> 6U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U] 
                    << 0x1aU) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[5U] 
                                 >> 6U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = (0x3ffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U] 
                               >> 6U));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[7U] 
                    << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[6U] 
                              >> 0x19U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[8U] 
                    << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[7U] 
                              >> 0x19U));
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xffU & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[9U] 
                             << 7U) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_req[8U] 
                                       >> 0x19U)));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.full)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop_shim_q 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop;
        }
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[1U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[2U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[3U];
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = (0xffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            if ((0x447U >= (0x7ffU & ((IData)(0x89U) 
                                      * (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))) {
                __Vtemp_hf2c098e3__0[1U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x89U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                              ? 0U : 
                                             (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                              ((IData)(2U) 
                                               + (0x3fU 
                                                  & (((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                            | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                               ((IData)(1U) 
                                                + (0x3fU 
                                                   & (((IData)(0x89U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))));
                __Vtemp_hf2c098e3__0[2U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x89U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                              ? 0U : 
                                             (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                              ((IData)(3U) 
                                               + (0x3fU 
                                                  & (((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                            | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                               ((IData)(2U) 
                                                + (0x3fU 
                                                   & (((IData)(0x89U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))));
                __Vtemp_hf2c098e3__0[3U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x89U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                              ? 0U : 
                                             (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                              ((IData)(4U) 
                                               + (0x3fU 
                                                  & (((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                            | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                               ((IData)(3U) 
                                                + (0x3fU 
                                                   & (((IData)(0x89U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))));
                __Vtemp_hf2c098e3__0[4U] = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x89U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                                 ((IData)(5U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x89U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                               | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x89U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x89U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))));
                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                    = (((0U == (0x1fU & ((IData)(0x89U) 
                                         * (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                         ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                 ((IData)(1U) + (0x3fU 
                                                 & (((IData)(0x89U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x89U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                       | (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                          (0x3fU & (((IData)(0x89U) 
                                     * (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x89U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))));
            } else {
                __Vtemp_hf2c098e3__0[1U] = 0U;
                __Vtemp_hf2c098e3__0[2U] = 0U;
                __Vtemp_hf2c098e3__0[3U] = 0U;
                __Vtemp_hf2c098e3__0[4U] = 0U;
                vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
            }
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = __Vtemp_hf2c098e3__0[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = __Vtemp_hf2c098e3__0[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = __Vtemp_hf2c098e3__0[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = __Vtemp_hf2c098e3__0[4U];
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0xffU & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q 
                                    >> (0x38U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin) 
                                                 << 3U)))));
        }
        if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x7fU & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                            >> 9U));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                    = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[3U] 
                        << 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U] 
                                     >> 3U));
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                    = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U] 
                        << 0x1dU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[3U] 
                                     >> 3U));
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                    = (7U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U] 
                             >> 3U));
            } else {
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                    = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0U];
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                    = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[1U];
                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                    = (7U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U]);
            }
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0x87U >= (0xffU & ((IData)(0x22U) 
                                       * (3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                    ? (0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                                          (((IData)(0x21U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x22U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x22U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x22U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x22U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_r__DOT__data_q[
                                                               (7U 
                                                                & (((IData)(0x22U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__rptr_bin))))))))
                    : 0ULL);
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_dst__DOT__i_cdc_fifo_gray_src_b__DOT__data_q) 
                         >> (6U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__rptr_bin) 
                                   << 1U))));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[0U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[1U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[2U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[3U];
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] 
                = (0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[4U]);
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__mst_resp[4U] 
                            >> 0xaU));
        }
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[5U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[6U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[7U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[8U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[8U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[9U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[9U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xaU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xaU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xbU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xbU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xcU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xcU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xdU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xdU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xeU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xeU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xfU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xfU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x10U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x10U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x11U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x11U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x12U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x12U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x13U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x13U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x14U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x14U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x15U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x15U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x16U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x16U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x17U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x17U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x18U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x18U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x19U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x19U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1aU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1aU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1bU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1bU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1cU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1cU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1dU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1dU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1eU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1eU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1fU] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1fU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x20U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x20U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x21U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x21U];
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))
                    ? 0U : ((0xccU >= (0xffU & ((IData)(0x25U) 
                                                + ((IData)(0x29U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o)))))
                             ? (3U & (((0U == (0x1fU 
                                               & ((IData)(0x25U) 
                                                  + 
                                                  ((IData)(0x29U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o)))))
                                        ? 0U : (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x25U) 
                                                      + 
                                                      ((IData)(0x29U) 
                                                       * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x25U) 
                                                     + 
                                                     ((IData)(0x29U) 
                                                      * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))))))) 
                                      | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[
                                         (7U & (((IData)(0x25U) 
                                                 + 
                                                 ((IData)(0x29U) 
                                                  * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0x25U) 
                                                + ((IData)(0x29U) 
                                                   * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o)))))))
                             : 0U));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0xfffffffffULL & (((QData)((IData)(
                                                      vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[2U])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U])) 
                                                   >> 7U)));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0x3ffffffff8ULL & (((QData)((IData)(
                                                        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[1U])) 
                                        << 0x21U) | 
                                       (0xfffffffffffffff8ULL 
                                        & ((QData)((IData)(
                                                           vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[0U])) 
                                           << 1U)))) 
                   | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_ar_sel)));
        }
        if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((0x3ffffffff8ULL & (((QData)((IData)(
                                                        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[3U])) 
                                        << 0x17U) | 
                                       (0x7ffffffffffff8ULL 
                                        & ((QData)((IData)(
                                                           vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__slv_req[2U])) 
                                           >> 9U)))) 
                   | (QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__lite_demx_aw_sel)));
        }
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_d;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_d;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_d;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q_prv 
            = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_d;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__0__KET__ 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__1__KET__;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_d;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_d;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U]));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
               & (~ (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
                     >> 4U)));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_q 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_d;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_ar_sel_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__demx_aw_sel_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awburst_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arburst_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wburst_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awaddr_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__araddr_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__byte_cnt_q = 0ULL;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awlen_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__awid_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
            = (0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
            = (0xff00ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
            = (0xffff00ffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
            = (0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U]);
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q = 0xffffU;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_shim_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__lock_aw_valid_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[5U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[6U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[7U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[8U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[9U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xaU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xbU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xcU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xdU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xeU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xfU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x10U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x11U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x12U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x13U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x14U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x15U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x16U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x17U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x18U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x19U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1aU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1bU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1cU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1dU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1eU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1fU] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x20U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x21U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pop_shim_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U] = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[1U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[2U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[3U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[4U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[4U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[5U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[5U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[6U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[6U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[7U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[7U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[8U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[8U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[9U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[9U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xaU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xaU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xbU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xbU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xcU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xcU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xdU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xdU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xeU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xeU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xfU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0xfU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x10U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x10U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x11U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x11U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x12U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x12U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x13U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x13U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x14U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x14U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x15U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x15U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x16U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x16U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x17U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x17U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x18U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x18U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x19U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x19U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1aU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1aU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1bU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1bU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1cU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1cU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1dU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1dU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1eU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1eU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1fU] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x1fU];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x20U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x20U];
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x21U] 
            = Vsauria_tester__ConstPool__CONST_hfbe8e9b1_0[0x21U];
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0ULL;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q_prv = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__wr_flag_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__0__KET__ = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q = 0U;
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_q = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0x1fffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((0xc000U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                           << 0xeU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d))) 
              | (0xffffe000U & (((IData)(vlSelf->rstn_sys) 
                                 << 0xdU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0xe3ffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((0x1800U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                           << 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d))) 
              | (0xfffffc00U & (((IData)(vlSelf->rstn_sys) 
                                 << 0xaU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0xfc7fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((0x300U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                          << 8U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d))) 
              | (0xffffff80U & (((IData)(vlSelf->rstn_sys) 
                                 << 7U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0xff8fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((0x60U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                         << 5U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d))) 
              | (0xfffffff0U & (((IData)(vlSelf->rstn_sys) 
                                 << 4U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0xfff1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((0xcU & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                        << 2U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d))) 
              | (0xfffffffeU & (((IData)(vlSelf->rstn_sys) 
                                 << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q 
        = ((0xfffeU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_q)) 
           | ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_active_d)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0x1fffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((0xc000U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                           << 0xeU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d))) 
              | (0xffffe000U & (((IData)(vlSelf->rstn_sys) 
                                 << 0xdU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0xe3ffU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((0x1800U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                           << 0xbU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d))) 
              | (0xfffffc00U & (((IData)(vlSelf->rstn_sys) 
                                 << 0xaU) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0xfc7fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((0x300U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                          << 8U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d))) 
              | (0xffffff80U & (((IData)(vlSelf->rstn_sys) 
                                 << 7U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0xff8fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((0x60U & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                         << 5U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d))) 
              | (0xfffffff0U & (((IData)(vlSelf->rstn_sys) 
                                 << 4U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0xfff1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((0xcU & (((- (IData)((IData)(vlSelf->rstn_sys))) 
                        << 2U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d))) 
              | (0xfffffffeU & (((IData)(vlSelf->rstn_sys) 
                                 << 1U) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q 
        = ((0xfffeU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_q)) 
           | ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_active_d)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__146__KET__ 
        = ((IData)(vlSelf->rstn_sys) & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                                        >> 0x12U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__147__KET__ 
        = ((IData)(vlSelf->rstn_sys) & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                                        >> 0x13U));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__ 
        = ((IData)(vlSelf->rstn_sys) & (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
                                        >> 0x11U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSelf->rstn_sys) & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                        & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSelf->rstn_sys) & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                        & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__aw_ready))));
    vlSelf->ctrl_interrupt = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q) 
                              & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_d = 1U;
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_d = 0U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT____Vcellinp__realigner_I__i_writer_start) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_d = 1U;
    }
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__reader_started_q) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__writer_started_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT____Vcellinp__realigner_I__i_writer_start) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_d 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__write_start_addr;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_interrupt = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state)) 
                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__0__KET__));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__1__KET__ 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__2__KET__));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_d = 0U;
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_end = 0xfU;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_addr_end = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_init = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_start) {
        VL_EXTEND_WI(128,32, __Vtemp_hf5ad0edb__0, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__btt);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[0U] 
            = __Vtemp_hf5ad0edb__0[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[1U] 
            = __Vtemp_hf5ad0edb__0[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[2U] 
            = __Vtemp_hf5ad0edb__0[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_d[3U] 
            = __Vtemp_hf5ad0edb__0[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_d 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__read_start_addr;
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr)) 
           | (8U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                    << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr)) 
           | (8U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                    << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr 
        = ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr)) 
           | ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                     << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                                | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                         >> 1U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr 
        = ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr)) 
           | ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                     << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                                | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                         >> 1U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr 
        = ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                  << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                             | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr 
        = ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                  << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                             | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr 
        = ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                  << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                             | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr)) 
           | (8U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                    << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr 
        = ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr)) 
           | ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                     << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                                | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                         >> 1U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_chan 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_w_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_chan 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[0U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[0U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[0U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[0U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[3U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[1U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[1U]) 
           | (0xffffffU & ((0xff00U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                                       >> 8U)) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                                                  >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[1U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[1U]) 
           | (0xffff0000U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[2U] 
                                              << 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[2U] 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[2U]) 
           | (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                         >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[2U] 
        = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[2U]) 
           | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[1U] 
                                                 >> 8U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[3U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[3U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[3U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[3U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_q[0U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[0U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[0U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[0U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[0U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[3U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[1U] 
        = ((0xffff0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[1U]) 
           | (0xffffffU & ((0xff00U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                                       >> 8U)) | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                                                  >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[1U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[1U]) 
           | (0xffff0000U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[2U] 
                                              << 8U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[2U] 
        = ((0xffffff00U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[2U]) 
           | (0xffffU & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                         >> 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[2U] 
        = ((0xffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[2U]) 
           | (0xffffff00U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[1U] 
                                                 >> 8U))))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[3U] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[3U]) 
           | ((0xff0000U & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                            << 8U)) | ((0xff00U & (
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                                                   >> 8U)) 
                                       | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
                                          >> 0x18U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[3U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[3U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_q[0U] 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_r_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_b_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_sel 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_q 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_d));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_d));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr)) 
           | (8U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                    << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr 
        = ((7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr)) 
           | (8U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                    << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr 
        = ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr)) 
           | ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                     << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                                | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                         >> 1U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr 
        = ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr)) 
           | ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                     << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                                | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                         >> 1U)))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_r_spill_register__valid_o 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_b_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_b_spill_register__valid_o 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           | (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr 
        = ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                  << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                             | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr 
        = ((4U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                  << 1U)) | ((2U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__1__KET____DOT__i_sync__DOT__reg_q)) 
                             | (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__gen_sync__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__ar_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                 >> (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_aw_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_q 
        = (1U & ((~ (IData)(vlSelf->rstn_sys)) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_d)));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata = 0U;
    if ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (((((((((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx)) 
                      | (1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                     | (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                    | (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                   | (4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                  | (5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                 | (6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                | (7U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx)))
                ? ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                    ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xeU]
                    : ((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                        ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0xfU]
                        : ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x10U]
                            : ((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x11U]
                                : ((4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                    ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x12U]
                                    : ((5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x13U]
                                        : ((6U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x14U]
                                            : vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x15U])))))))
                : (((((((((8U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx)) 
                          | (9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                         | (0xaU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                        | (0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                       | (0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                      | (0xdU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                     | (0xeU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))) 
                    | (0xfU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx)))
                    ? ((8U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                        ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x16U]
                        : ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x17U]
                            : ((0xaU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x18U]
                                : ((0xbU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                    ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x19U]
                                    : ((0xcU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1aU]
                                        : ((0xdU == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1bU]
                                            : ((0xeU 
                                                == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                                ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1cU]
                                                : vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1dU])))))))
                    : ((0x10U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                        ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1eU]
                        : ((0x11U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x1fU]
                            : ((0x12U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x20U]
                                : ((0x13U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                    ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q2[0x21U]
                                    : ((0x14U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                        ? 1U : ((0x15U 
                                                 == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_reg_idx))
                                                 ? 1U
                                                 : 0U))))))));
    } else if ((5U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata = 0U;
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (2U | ((0xfffffffcU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata) 
                     | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start)));
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (0xffffff7fU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata);
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (0x10000U | ((0xfff8ffffU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata) 
                           | ((0x40000U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone)
                                             ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_B)
                                             : (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_weights_change))) 
                                           << 0x12U)) 
                              | (0x20000U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone)
                                               ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_A)
                                               : (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_ifmaps_change))) 
                                             << 0x11U)))));
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = ((0xfff7ffffU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata) 
               | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone)
                    ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__stand_alone_keep_C)
                    : ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__start) 
                       & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__sauria_dma_controller_I__DOT__last_psums_change)))) 
                  << 0x13U));
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (0xfeffffffU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata);
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (0x7fffffffU & vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata);
    } else if ((9U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_interface_I__DOT__state))) {
        vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata 
            = (1U | vlSymsp->TOP__sauria_tester__DOT__dut__DOT__df_controller_i__DOT__sauria_axilite.wdata);
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_d 
        = (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_d 
        = (1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (7U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__mem_q 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))))
            ? (7U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_valid 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_ar__DOT__rptr)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_aw__DOT__rptr)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_src_w__DOT__rptr) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
        = ((0x9ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U]) 
           | (0xe0000U & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_chan) 
                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_ar_ready_sel)) 
                           << 0x12U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_w_spill_reg__ready_o) 
                                        << 0x11U))));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[0U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[0U];
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[1U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[1U];
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[2U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[2U];
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[3U] 
        = vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.data[3U];
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__dst_woffs_init 
            = (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__write_start_addr_q);
        VL_EXTEND_WI(128,32, __Vtemp_hd541e240__0, vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q);
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_addr_end 
            = (0xfffU & (__Vtemp_hd541e240__0[0U] + 
                         (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__btt_q[0U] 
                          - (IData)(1U))));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_end 
            = (0xfU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_addr_end));
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_init 
            = (0xfU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__read_start_addr_q);
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__buffer_select_q) {
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[0U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[1U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[2U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__pong_obus[3U];
        } else {
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[0U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[0U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[1U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[1U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[2U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[2U];
            vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_write.data[3U] 
                = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__ping_obus[3U];
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U]) 
           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_r_spill_reg__ready_o));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
        = ((0xffffffefU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U]) 
           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT____Vcellout__i_b_spill_reg__ready_o) 
              << 4U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
        = ((0x7ffffU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U]) 
           | (0xfffffU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_chan) 
                           & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_aw_ready_sel)) 
                          << 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin 
        = ((0xcU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin)) 
           | ((8U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr)) 
              | (4U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr) 
                                           >> 2U))) 
                       << 2U))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_d = 0U;
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q) {
        if ((2U <= (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q))) {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_d 
                = (3U & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q));
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag = 1U;
        } else {
            vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q)));
            if ((1U <= (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_q))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag = 1U;
            }
        }
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden 
            = (1U & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready) 
                     | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag))));
    } else {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__ram_rden = 0U;
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = ((0xfff0fU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]) 
           | (0xfffffU & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arid_q) 
                          << 4U)));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
        = (0xfffffff3U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U]);
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
        = (0xffeffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]);
    if ((1U & ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready) 
               | (~ (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_r_spill_register__valid_o))))) {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U] 
            = ((0xffeffU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[4U]) 
               | (0xfffffU & (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready) 
                               & (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag)) 
                              << 8U)));
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
        = (0xfffffffdU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U]);
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rd_flag_q) {
        if (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rburst_cnt_q) 
             == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q))) {
            if ((1U != (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_d 
                    = (3U & ((0U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q))
                              ? (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q)
                              : ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__reg_r_ready)
                                  ? ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q))
                                  : (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q))));
            }
            if ((1U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__arlen_q))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
                    = ((0xfffffffdU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U]) 
                       | ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__latency_cnt_flag) 
                          << 1U));
            } else if ((0U == (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__rlast_cnt_q))) {
                vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U] 
                    = (2U | vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_d[0U]);
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__wptr)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin 
        = ((4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin)) 
           | ((2U & (VL_REDXOR_32((3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr) 
                                         >> 1U))) << 1U)) 
              | (1U & VL_REDXOR_4(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr))));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin 
        = ((3U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr_bin)) 
           | (4U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_cfg_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_b__DOT__wptr)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies 
            = (((~ ((IData)(1U) << (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_readies)) 
               | (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__mst_w_ready) 
                        << (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U]) 
           | (((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
               & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready)) 
              & (0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U] 
        = ((0xffff7fffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready)) 
               & (1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))) 
              << 0xfU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
        = ((0xbfffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready)) 
               & (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))) 
              << 0x1eU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU] 
        = ((0xffffdfffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready)) 
               & (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))) 
              << 0xdU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU] 
        = ((0xefffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_r_ready)) 
               & (4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_r_fifo__data_o))) 
              << 0x1cU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q))))
            ? (7U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__mem_q 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q)))) {
        if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_valid))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_edge 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q_prv)));
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_intr_i__DOT__reg_q__BRA__2__KET__ 
        = ((IData)(vlSelf->rstn_sys) & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__sauria_intr2cdc));
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
        = ((0xe0000U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U]) 
           | (0xfffffU & ((0xfffffe00U & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                               : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                             << 9U))) 
                          | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                               | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                              << 8U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                         : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U])))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U] 
        = ((1U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U]) 
           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                 ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                 : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
               << 2U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                          & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                         << 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[1U] 
        = (((1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                     ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                     : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                   >> 0x1eU)) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                     | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                 >> 0x1fU)) | ((2U 
                                                & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                     : 
                                                    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                   >> 0x1eU)) 
                                               | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
        = ((0xfffffff0U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U]) 
           | ((1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                     >> 0x1eU)) | ((2U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                            : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                          >> 0x1eU)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 2U))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U] 
        = ((0x1fU & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[2U]) 
           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                 ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                 : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
               << 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                          | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                         << 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[3U] 
        = (((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                        : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                      >> 0x1aU)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                     | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                    >> 0x1bU)) | ((0x20U 
                                                   & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                        : 
                                                       vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                      >> 0x1aU)) 
                                                  | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                       ? 
                                                      vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                       : 
                                                      vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                     << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[4U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                     >> 0x1aU)) | ((0x20U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                               : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                             >> 0x1aU)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[5U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                     >> 0x1aU)) | ((0x20U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                               : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                             >> 0x1aU)) 
                                   | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                        : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                      << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                     >> 0x1aU)) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                      ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                      : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                    << 0x19U) | (((
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                      | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                                  << 0x18U) 
                                                 | ((0x20U 
                                                     & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                                          : 
                                                         vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                                        >> 0x1aU)) 
                                                    | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                         ? 
                                                        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                                         : 
                                                        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                                       << 6U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[7U] 
        = ((0x1fU & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                        : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                      >> 7U) | (((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                     | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                 >> 8U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                             ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                             : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                           >> 0x1aU)))) 
           | ((0x1ffffe0U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                               ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                               : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                             >> 7U)) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                          : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                        << 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[8U] 
        = ((0x1fU & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                       ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                       : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                     >> 7U)) | ((0x1ffffe0U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                 : 
                                                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                               >> 7U)) 
                                | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                     : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                   << 0x19U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[9U] 
        = (1U & (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                   ? vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                   : vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                 >> 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    __Vtableidx2 = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_init) 
                     << 7U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__src_woffs_end) 
                                << 3U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q) 
                                           << 2U) | 
                                          (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__last_word_q) 
                                            << 1U) 
                                           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__disable_realign_q)))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__elm_number 
        = Vsauria_tester__ConstPool__TABLE_h1db5c46f_0
        [__Vtableidx2];
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q) {
        if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__first_word_q) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__unnamedblk4__DOT__i = 0x10U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_d 
        = ((1U & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q)) 
                  | (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.empty))))
            ? 0xffffU : ((0U < (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q))
                          ? (0xffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q) 
                                        - (IData)(1U)))
                          : 0xffffU));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_force_finish = 0U;
    if ((1U & (~ ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__active_transfer_q)) 
                  | (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_read.empty)))))) {
        if ((0U >= (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_cnt_q))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__realigner_I__DOT__wdog_force_finish = 1U;
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[4U] 
        = ((0x3ffc00U & vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT____Vcellout__i_axi_cdc_src__src_resp_o[4U]) 
           | (0x3fffffU & ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                             | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                            << 9U) | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                       : vlSelf->sauria_tester__DOT__dut__DOT__cdc_mem_i__DOT__i_axi_cdc__DOT__i_axi_cdc_src__DOT__i_cdc_fifo_gray_dst_r__DOT__i_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]))));
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[0U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            << 2U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                       << 1U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_r_spill_reg__ready_o)));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[1U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            >> 0x1eU) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                           ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                           : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                         << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[2U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            << 7U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                       << 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__i_b_spill_reg__ready_o) 
                                  << 5U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                               ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                               : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                             >> 0x1eU) 
                                            | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                 : 
                                                vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                               << 2U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[3U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            >> 0x19U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                           ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                           : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                         << 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[4U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
            >> 0x19U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                           ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                           : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                         << 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[5U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
            >> 0x19U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                           ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                           : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                         << 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[6U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            << 0x1aU) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                           | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                          << 0x19U) | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                          : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                        >> 0x19U) | 
                                       (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                          ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                          : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                        << 7U))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[7U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
            >> 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                        : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                      << 0x1aU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[8U] 
        = ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
              ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
              : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
            >> 6U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                        ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                        : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                      << 0x1aU));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__mst_req_o[9U] 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
             ? vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
             : vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
           >> 6U);
    if (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U];
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
        vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U] 
            = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
    }
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o 
        = (((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o)) 
            << 0x28U) | (((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_spill_reg__ready_o)) 
                          << 0x27U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                                          : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                          | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o)) 
                                            << 0x23U) 
                                           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
                                                 : vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                 | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
            ? vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q
            : vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_q;
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_d = 1U;
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_edge) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ready_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_new_transaction 
        = ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__ar_engine_I__DOT__state)) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
              >> 0x12U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__r_transaction_complete 
        = (1U & (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                   >> 8U) & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.full))) 
                 & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[0U] 
                    >> 1U)));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.write 
        = (1U & ((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                  >> 8U) & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__reader_fifo_write.full))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_new_transaction 
        = ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__aw_engine_I__DOT__state)) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
              >> 0x13U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_transaction_confirmed 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__b_engine_I__DOT__state) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
              >> 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT____Vcellinp__transaction_generator_I__advance 
        = (((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
               >> 0x11U)) & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                             == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_new_transaction 
        = (((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
            & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
               >> 0x11U)) & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                             == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)));
    vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.read 
        = (((((1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
              & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__genblk2__DOT__genblk1__DOT__outstanding_w))) 
             & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty))) 
            | ((((3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
                 & (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT____Vcellout__axi_demux_i__slv_resp_o[4U] 
                    >> 0x11U)) & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty))) 
               & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__cur_len) 
                  != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__len)))) 
           | ((2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__w_engine_I__DOT__state)) 
              & (~ (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__dma_top_i__DOT__dma_i__DOT__writer_fifo_read.empty))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[0U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((0U != (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))
            ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o));
    if (vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U];
    } else {
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[0U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[1U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[2U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[3U] 
            = vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
    }
    vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[4U] 
        = (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__147__KET__) 
            << 0x13U) | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__146__KET__) 
                          << 0x12U) | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__axi_resp_q__BRA__145__KET__) 
                                        << 0x11U) | 
                                       (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_b_spill_register__valid_o) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_b_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                            << 9U) 
                                           | (((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT____Vcellout__i_r_spill_register__valid_o) 
                                               << 8U) 
                                              | ((IData)(vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                  ? 
                                                 vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                                  : 
                                                 vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT__axi_full_if__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U])))))));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_valids 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))
            ? (3U & ((IData)(1U) << (1U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U] 
                                           >> 8U))))
            : 0U);
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_valids 
        = (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
            | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))
            ? (3U & ((IData)(1U) << (1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_b_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                           >> 7U))))
            : 0U);
    vlSelf->cfg_bus_lite_ar_ready = (1U & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o 
                                                   >> 0x23U)));
    vlSelf->cfg_bus_lite_aw_ready = (1U & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o 
                                                   >> 0x28U)));
    vlSelf->cfg_bus_lite_r_data = (IData)((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o 
                                           >> 3U));
    vlSelf->cfg_bus_lite_r_valid = (1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o));
    vlSelf->cfg_bus_lite_w_ready = (1U & (IData)((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__slv_resp_o 
                                                  >> 0x27U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
        = ((1U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
              << 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
        = ((0xffffffe0U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                           & (0U == 
                                              (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
               >> 0x1fU) | ((IData)((((0xffffffffeULL 
                                       & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                                     >> 0x20U)) << 1U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U] 
        = ((0xffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (1U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
              << 0x10U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U] 
        = ((0xfff00000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                           & (1U == 
                                              (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
               >> 0x10U) | ((IData)((((0xffffffffeULL 
                                       & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (1U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                                     >> 0x20U)) << 0x10U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
        = ((0x7fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
              << 0x1fU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[7U] 
        = (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                        >> 2U)) | (QData)((IData)(
                                                                  (((8U 
                                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                   & (2U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
            >> 1U) | ((IData)((((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                   >> 2U)) 
                                | (QData)((IData)((
                                                   ((8U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                   & (2U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                               >> 0x20U)) << 0x1fU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U] 
        = ((0xfffffff8U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U]) 
           | ((IData)((((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                           & (2U == 
                                              (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                       >> 0x20U)) >> 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU] 
        = ((0x3fffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (3U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
              << 0xeU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU] 
        = ((0xfffc0000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                           & (3U == 
                                              (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
               >> 0x12U) | ((IData)((((0xffffffffeULL 
                                       & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (3U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                                     >> 0x20U)) << 0xeU)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU] 
        = ((0x1fffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (((8U 
                                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                      & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                     & (4U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
              << 0x1dU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xeU] 
        = (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                        >> 2U)) | (QData)((IData)(
                                                                  (((8U 
                                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                                   & (4U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))))))) 
            >> 3U) | ((IData)((((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                   >> 2U)) 
                                | (QData)((IData)((
                                                   ((8U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU]) 
           | ((IData)((((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                            & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_valid)) 
                                           & (4U == 
                                              (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_ar_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))))) 
                       >> 0x20U)) >> 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__w_fifo_push) 
         & (8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT____Vlvbound_hcca00c02__0 
            = (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o));
        if ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | (0xffffffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT____Vlvbound_hcca00c02__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__0 = 1U;
        if ((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids)) 
                   | (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__0) 
                               << (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))));
        }
    } else if (((8U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_valid))) {
        vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__1 = 1U;
        if ((4U >= (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))) 
                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids)) 
                   | (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vlvbound_hb5ce9b6b__1) 
                               << (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o)))));
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((7U != (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) {
        if (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
              >> 0x18U) & ((0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                           | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                              == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) {
            vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((7U != (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) {
            if (((vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__slv_req_cut[6U] 
                  >> 0x18U) & ((0U == (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                               | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                  == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_aw_select_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o))))) {
                vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[0U] 
        = ((0xfffffff0U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[0U]) 
           | ((0xcU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[0U]) 
              | ((2U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[0U]) 
                 | (IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__io_mem_port.r_user))));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[1U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[1U]) 
           | (0xfffffff0U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[1U]));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[2U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[2U]) 
           | (0xfffffff0U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[2U]));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[3U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[3U]) 
           | (0xfffffff0U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[3U]));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__mem_axi_resp[4U] 
        = ((0xfffffff0U & ((0xf0000U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[4U]) 
                           | ((0xfc00U & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[4U]) 
                              | (((IData)(vlSymsp->TOP__sauria_tester__DOT__dut__DOT__io_mem_port.b_user) 
                                  << 9U) | (0x1f0U 
                                            & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[4U]))))) 
           | (0xfU & vlSelf->sauria_tester__DOT__i_sim_mem_0__DOT____Vcellout__axi_full_if__axi_resp_o[4U]));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
        = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U]) 
           | ((0x100U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_valids) 
                         << 8U)) | (0xffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U])));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U] 
        = ((0xfffffU & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[4U]) 
           | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
              << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[5U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[6U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[7U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
            >> 0xcU) | (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
                        << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U] 
        = ((0xe0000000U & vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT____Vcellout__i_axi_mux__slv_resps_o[8U]) 
           | ((vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
               >> 0xcU) | ((0x10000000U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_valids) 
                                           << 0x1bU)) 
                           | (0xff00000U & (vlSelf->sauria_tester__DOT__dut__DOT__core_mem_mux_i__DOT__i_axi_mux__DOT__gen_mux__DOT__i_r_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o[4U] 
                                            << 0x14U)))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
        = ((0xffffffdfU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready)) 
               & (0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
              << 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U] 
        = ((0xffefffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready)) 
               & (1U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
              << 0x14U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U] 
        = ((0xfffffff7U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready)) 
               & (2U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
              << 3U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU] 
        = ((0xfffbffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready)) 
               & (3U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
              << 0x12U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU] 
        = ((0xfffffffdU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU]) 
           | ((((0U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q)) 
                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_b_ready)) 
               & (4U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_b_fifo__data_o))) 
              << 1U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
        = ((0x3fU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U]) 
           | ((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                        << 1U) | (QData)((IData)(((
                                                   ((0U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                    & (8U 
                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
              << 6U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
        = ((0xfffff800U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U]) 
           | (((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                         << 1U) | (QData)((IData)((
                                                   (((0U 
                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                     & (8U 
                                                        != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
               >> 0x1aU) | ((IData)((((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                       << 1U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                                   & (8U 
                                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                                 & (0U 
                                                                    == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))) 
                                     >> 0x20U)) << 6U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U] 
        = ((0x1fffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[4U]) 
           | ((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                        << 1U) | (QData)((IData)(((
                                                   ((0U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                    & (8U 
                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
              << 0x15U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U] 
        = ((0xfc000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U]) 
           | (((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                         << 1U) | (QData)((IData)((
                                                   (((0U 
                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                     & (8U 
                                                        != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                   & (1U 
                                                      == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
               >> 0xbU) | ((IData)((((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                      << 1U) | (QData)((IData)(
                                                               ((((0U 
                                                                   != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                                  & (8U 
                                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                                & (1U 
                                                                   == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))) 
                                    >> 0x20U)) << 0x15U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U] 
        = ((0xfU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[8U]) 
           | ((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                        << 1U) | (QData)((IData)(((
                                                   ((0U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                    & (8U 
                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
              << 4U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U] 
        = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U]) 
           | (((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                         << 1U) | (QData)((IData)((
                                                   (((0U 
                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                     & (8U 
                                                        != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
               >> 0x1cU) | ((IData)((((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                       << 1U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                                   & (8U 
                                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))) 
                                     >> 0x20U)) << 4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU] 
        = ((0x7ffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU]) 
           | ((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                        << 1U) | (QData)((IData)(((
                                                   ((0U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                    & (8U 
                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
              << 0x13U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU] 
        = ((0xff000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU]) 
           | (((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                         << 1U) | (QData)((IData)((
                                                   (((0U 
                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                     & (8U 
                                                        != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
               >> 0xdU) | ((IData)((((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                      << 1U) | (QData)((IData)(
                                                               ((((0U 
                                                                   != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                                  & (8U 
                                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                                 & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                                & (3U 
                                                                   == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))) 
                                    >> 0x20U)) << 0x13U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU] 
        = ((3U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xfU]) 
           | ((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                        << 1U) | (QData)((IData)(((
                                                   ((0U 
                                                     != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                    & (8U 
                                                       != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                   & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
              << 2U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x10U] 
        = ((0xffffff80U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x10U]) 
           | (((IData)(((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                         << 1U) | (QData)((IData)((
                                                   (((0U 
                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                     & (8U 
                                                        != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                    & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                   & (4U 
                                                      == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o))))))) 
               >> 0x1eU) | ((IData)((((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                       << 1U) | (QData)((IData)(
                                                                ((((0U 
                                                                    != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                                                   & (8U 
                                                                      != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_b_fifo__DOT__status_cnt_q))) 
                                                                  & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_valid)) 
                                                                 & (4U 
                                                                    == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT____Vcellout__gen_demux__DOT__i_w_fifo__data_o)))))) 
                                     >> 0x20U)) << 2U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
        = ((0x7ffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids)))))) 
              << 0xbU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U] 
        = ((0xffff8000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[3U]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((1U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids)))))) 
               >> 0x15U) | ((IData)((((0xffffffffeULL 
                                       & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids))))) 
                                     >> 0x20U)) << 0xbU)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U] 
        = ((0x3ffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[5U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                        >> 1U)))))) 
              << 0x1aU));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U] 
        = ((0xc0000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[6U]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                 >> 1U)))))) 
               >> 6U) | ((IData)((((0xffffffffeULL 
                                    & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                       >> 2U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                     >> 1U))))) 
                                  >> 0x20U)) << 0x1aU)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U] 
        = ((0x1ffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[9U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                        >> 2U)))))) 
              << 9U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU] 
        = ((0xffffe000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                 >> 2U)))))) 
               >> 0x17U) | ((IData)((((0xffffffffeULL 
                                       & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                        >> 2U))))) 
                                     >> 0x20U)) << 9U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                        >> 3U)))))) 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU] 
        = ((0xf0000000U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU]) 
           | (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                           >> 2U)) 
                        | (QData)((IData)((1U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                 >> 3U)))))) 
               >> 8U) | ((IData)((((0xffffffffeULL 
                                    & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                       >> 2U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                     >> 3U))))) 
                                  >> 0x20U)) << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x10U] 
        = ((0x7fU & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x10U]) 
           | ((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                          >> 2U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                        >> 4U)))))) 
              << 7U));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0x11U] 
        = (0x7ffU & (((IData)(((0xffffffffeULL & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                  >> 2U)) 
                               | (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                     >> 4U)))))) 
                      >> 0x19U) | ((IData)((((0xffffffffeULL 
                                              & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__i_aw_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                 >> 2U)) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__i_axi_demux__DOT__gen_demux__DOT__mst_aw_valids) 
                                                                   >> 4U))))) 
                                            >> 0x20U)) 
                                   << 7U)));
    vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (7U & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__dma_top_i__DOT__axi_demux_i__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d = 0U;
    } else {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d = 0U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                 >> 5U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
              >> 5U));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U]));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U]);
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_d 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q;
    if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                >> 0xbU) & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                            >> 6U)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__reg_write__DOT__unnamedblk1__DOT__bb = 0x20U;
        if ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_d 
                    = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                             >> 0xbU));
                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_d 
                    = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q) 
                       & (~ (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                             >> 0xcU)));
            }
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_d 
                        = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                 >> 0xbU));
                }
            }
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_d = 1U;
    }
    if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                >> 0xbU) & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                            >> 6U)))) {
        if ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    if ((3U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0x11U)))) {
                        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_d 
                            = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q) 
                               & (~ (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                     >> 0xbU)));
                    }
                }
            }
        }
    }
    if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__fsm_done) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_d = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_bvalid_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rvalid_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx 
        = (0x3fU & (((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                      << 0xfU) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                  >> 0x11U)) - (IData)(4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid 
        = ((0x10U <= (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                               >> 0xfU))) & (0x22U 
                                             > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx 
        = (0x3fU & (((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                      << 0x19U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                                   >> 7U)) - (IData)(4U)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx_valid 
        = ((0x10U <= (0xffU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                               >> 5U))) & (0x22U > (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx)));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_awready_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_wready_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_arready_d = 0U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU] 
            << 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xaU] 
                         >> 0xdU));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[1U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU] 
            << 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xbU] 
                         >> 0xdU));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
        = ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU] 
            << 0x13U) | (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xcU] 
                         >> 0xdU));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[3U] 
        = (0x7fffU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0xdU] 
                      >> 0xdU));
    if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                >> 0xbU) & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                            >> 6U)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_bvalid_d = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_bvalid_d) 
           & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
              | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rvalid_d = 1U;
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rvalid_d) 
           & ((~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
              | (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[1U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[1U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[2U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[2U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[3U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[3U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[4U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[4U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[5U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[5U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[6U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[6U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[7U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[7U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[8U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[8U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[9U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[9U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xaU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xaU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xbU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xbU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xcU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xcU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xdU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xdU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xeU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xeU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0xfU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0xfU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x10U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x10U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x11U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x11U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x12U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x12U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x13U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x13U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x14U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x14U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x15U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x15U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x16U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x16U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x17U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x17U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x18U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x18U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x19U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x19U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1aU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1aU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1bU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1bU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1cU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1cU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1dU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1dU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1eU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1eU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x1fU] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x1fU];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x20U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x20U];
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[0x21U] 
        = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[0x21U];
    if ((1U & ((vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                >> 0xbU) & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                            >> 6U)))) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_awready_d = 1U;
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_wready_d = 1U;
        if ((0x80U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    if ((3U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0x11U)))) {
                        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid) {
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0xbU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                               << 5U)))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                   << 5U)))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                 << 5U))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0xcU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(1U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0xdU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(2U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0xeU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(3U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(3U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(3U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(3U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0xfU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(4U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(4U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(4U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x10U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(5U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(5U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(5U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(5U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x11U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(6U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(6U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x12U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(7U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(7U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(7U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                        }
                    }
                }
            }
        }
        if ((0x100U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    if ((3U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0x11U)))) {
                        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid) {
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x13U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(8U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(8U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(8U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x14U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(9U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(9U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(9U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x15U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xaU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xaU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xaU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xaU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x16U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xbU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xbU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xbU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xbU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x17U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xcU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xcU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xcU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x18U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xdU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xdU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xdU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xdU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x19U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xeU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xeU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xeU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xeU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x1aU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0xfU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0xfU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0xfU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0xfU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                        }
                    }
                }
            }
        }
        if ((0x200U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    if ((3U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0x11U)))) {
                        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid) {
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x1bU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x10U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x10U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x10U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x1cU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x11U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x11U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x11U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x11U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x1dU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x12U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x12U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x12U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x12U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                         >> 0x1eU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x13U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x13U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x13U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x13U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U] 
                                   >> 0x1fU);
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x14U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x14U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x14U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x14U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U]);
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x15U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x15U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x15U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x15U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 1U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x16U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x16U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x16U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x16U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 2U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x17U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x17U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x17U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                        }
                    }
                }
            }
        }
        if ((0x400U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[1U])) {
            if ((0U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                 >> 0x11U)))) {
                if ((2U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                     >> 0x11U)))) {
                    if ((3U != (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0x11U)))) {
                        if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx_valid) {
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 3U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x18U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x18U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x18U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x18U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 4U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x19U) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x19U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x19U) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x19U) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 5U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1aU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1aU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1aU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1aU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 6U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1bU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1bU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1bU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 7U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1cU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1cU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 8U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1dU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1dU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1dU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1dU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 9U));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1eU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1eU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1eU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1eU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0 
                                = (1U & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[2U] 
                                         >> 0xaU));
                            if ((0x43fU >= (0x7ffU 
                                            & ((IData)(0x1fU) 
                                               + ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U))))) {
                                vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[(0x3fU 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                                                << 5U)) 
                                                                                >> 5U))] 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1fU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U))))) 
                                        & vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_d[
                                        (0x3fU & (((IData)(0x1fU) 
                                                   + 
                                                   ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                    << 5U)) 
                                                  >> 5U))]) 
                                       | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT____Vlvbound_h4692b8cc__0) 
                                          << (0x1fU 
                                              & ((IData)(0x1fU) 
                                                 + 
                                                 ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__wr_idx) 
                                                  << 5U)))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d = 0x1badadd2U;
    if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U])) {
        vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_arready_d = 1U;
        if ((0U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                             >> 7U)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d 
                = (0xc0000000U | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__done_q) 
                                   << 1U) | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__start_q)));
        } else if ((2U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                                    >> 7U)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ien_q;
        } else if ((3U == (0x3fU & (vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT____Vcellout__i_axi_demux__mst_reqs_o[0U] 
                                    >> 7U)))) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d 
                = vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__intr_q;
        } else if (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx_valid) {
            vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_rdata_d 
                = ((0x43fU >= (0x7ffU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx) 
                                         << 5U))) ? 
                   (((0U == (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx) 
                                      << 5U))) ? 0U
                      : (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[
                         (((IData)(0x1fU) + (0x7ffU 
                                             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx) 
                                                << 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx) 
                                                  << 5U))))) 
                    | (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__ctrl_regs_q[
                       (0x3fU & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx))] 
                       >> (0x1fU & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__rd_idx) 
                                    << 5U)))) : 0U);
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_awready_d) 
                                      << 5U) | (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_wready_d) 
                                                 << 4U) 
                                                | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                      ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                                      : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                                    << 2U) 
                                                   | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                        | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_arready_d))))))) 
                    << 0x23U) | (((QData)((IData)((vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                   >> 2U))) 
                                  << 3U) | (QData)((IData)(
                                                           ((6U 
                                                             & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                                << 1U)) 
                                                            | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                               | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))))))));
    vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[1U] 
        = ((0xfffffe00U & vlSelf->sauria_tester__DOT__dut__DOT__config_demux_i__DOT__mst_resps[1U]) 
           | (IData)(((((QData)((IData)((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_awready_d) 
                                          << 5U) | 
                                         (((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_wready_d) 
                                           << 4U) | 
                                          ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                              : (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                               << 1U) 
                                              | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__cfg_arready_d))))))) 
                        << 0x23U) | (((QData)((IData)(
                                                      (vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o 
                                                       >> 2U))) 
                                      << 3U) | (QData)((IData)(
                                                               ((6U 
                                                                 & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT____Vcellout__spill_register_flushable_i__data_o) 
                                                                    << 1U)) 
                                                                | ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                                   | (IData)(vlSelf->sauria_tester__DOT__dut__DOT__df_controller_i__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))))))) 
                      >> 0x20U)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
        = ((0xffffffU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U]) 
           | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                          vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[3U])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U])) 
                                            >> 0xcU)))) 
              << 0x18U));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[6U] 
        = (0x7ffffffU & (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[3U])) 
                                     << 0x14U) | ((QData)((IData)(
                                                                  vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U])) 
                                                  >> 0xcU)))) 
                          >> 8U) | ((IData)(((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[3U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U])) 
                                                    >> 0xcU))) 
                                             >> 0x20U)) 
                                    << 0x18U)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
        = (0xff7fffffU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
            = (0x800000U | vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U]);
    } else if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U] 
            = ((0xff7fffffU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[5U]) 
               | (0x800000U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                               << 0xcU)));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
        = (0xfffffffdU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]);
    if (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
            = (2U | vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]);
    } else if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
            = ((0xfffffffdU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]) 
               | (2U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U]));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_ar_q)))) {
        if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q))) {
            if ((2U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U])) {
                vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push = 1U;
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push = 0U;
    if ((1U & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__lock_aw_q)))) {
        if ((4U != (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q))) {
            if ((0x800U & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U])) {
                vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push = 1U;
            }
        }
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q;
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
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o 
        = (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__mem_q) 
                 >> (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__read_pointer_q) 
                           << 1U))));
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_r_sel__data_o 
            = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
                     >> 7U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty 
        = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_r_sel__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_push)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__gate_clock = 1U;
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_n 
        = vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q;
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
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o 
        = (3U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__mem_q) 
                 >> (7U & ((IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__read_pointer_q) 
                           << 1U))));
    if (((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)) 
         & (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push))) {
        vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT____Vcellout__gen_upsizer__DOT__i_fifo_w_sel__data_o 
            = (3U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[2U] 
                     >> 0x11U));
    }
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_empty 
        = ((0U == (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__i_fifo_w_sel__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__w_push)));
    vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U] 
        = ((0xfffffffeU & vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT____Vcellout__i_axi_lite_dw_converter__mst_req_o[0U]) 
           | (1U & (vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__slv_req[0U] 
                    & (~ (IData)(vlSelf->sauria_tester__DOT__dut__DOT__debug_axi_upsize_i__DOT__i_axi_lite_dw_converter__DOT__gen_upsizer__DOT__r_empty)))));
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
}
