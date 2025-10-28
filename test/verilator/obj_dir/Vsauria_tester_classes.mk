# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsauria_tester.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --threads/--trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsauria_tester \
	Vsauria_tester___024root__DepSet_h6fe80071__0 \
	Vsauria_tester___024root__DepSet_h6fe80071__1 \
	Vsauria_tester___024root__DepSet_h6fe80071__2 \
	Vsauria_tester___024root__DepSet_h0217780e__0 \
	Vsauria_tester___024root__DepSet_h0217780e__1 \
	Vsauria_tester___024root__DepSet_h0217780e__2 \
	Vsauria_tester_axi_lite_mux__pi15__DepSet_h51020c46__0 \
	Vsauria_tester_feed_xy_lane__F5_W3__DepSet_hb1efedfb__0 \
	Vsauria_tester_feed_xy_lane__F5_W3__DepSet_hb1efedfb__1 \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__0 \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__1 \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__2 \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__3 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__0 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__1 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__2 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__3 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__4 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__5 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__6 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__7 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__8 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__9 \
	Vsauria_tester_sa_processing_element__pi48__DepSet_h5a6e197c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsauria_tester__ConstPool_0 \
	Vsauria_tester___024root__Slow \
	Vsauria_tester___024root__DepSet_h6fe80071__0__Slow \
	Vsauria_tester___024root__DepSet_h6fe80071__1__Slow \
	Vsauria_tester___024root__DepSet_h6fe80071__2__Slow \
	Vsauria_tester___024root__DepSet_h0217780e__0__Slow \
	Vsauria_tester_AXI_BUS__A20_AB80_AC4__Slow \
	Vsauria_tester_AXI_BUS__A20_AB80_AC4__DepSet_h356371ab__0__Slow \
	Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1__Slow \
	Vsauria_tester_AXI_BUS__A20_AB80_AC4_AD1__DepSet_h7db17f98__0__Slow \
	Vsauria_tester_axi_lite_mux__pi15__Slow \
	Vsauria_tester_axi_lite_mux__pi15__DepSet_h51020c46__0__Slow \
	Vsauria_tester_axi_lite_mux__pi15__DepSet_hdf417c17__0__Slow \
	Vsauria_tester_AXI4Lite__W20_A20__Slow \
	Vsauria_tester_AXI4Lite__W20_A20__DepSet_hcc7352d6__0__Slow \
	Vsauria_tester_FIFO_READ__D80__Slow \
	Vsauria_tester_FIFO_READ__D80__DepSet_h65e3ed38__0__Slow \
	Vsauria_tester_FIFO_WRITE__D80__Slow \
	Vsauria_tester_FIFO_WRITE__D80__DepSet_hab1cafac__0__Slow \
	Vsauria_tester_feed_xy_lane__F5_W3__Slow \
	Vsauria_tester_feed_xy_lane__F5_W3__DepSet_hb1efedfb__0__Slow \
	Vsauria_tester_feed_xy_lane__F5_W3__DepSet_hb1efedfb__1__Slow \
	Vsauria_tester_feed_xy_lane__F5_W3__DepSet_h4016db94__0__Slow \
	Vsauria_tester_feed_xy_lane__pi45__Slow \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__0__Slow \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__1__Slow \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__2__Slow \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h6675e68d__3__Slow \
	Vsauria_tester_feed_xy_lane__pi45__DepSet_h0a8cd262__0__Slow \
	Vsauria_tester_sa_processing_element__pi48__Slow \
	Vsauria_tester_sa_processing_element__pi48__DepSet_hd656afe3__0__Slow \
	Vsauria_tester_sa_processing_element__pi48__DepSet_h5a6e197c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsauria_tester__Trace__0 \
	Vsauria_tester__Trace__1 \
	Vsauria_tester__Trace__2 \
	Vsauria_tester__Trace__3 \
	Vsauria_tester__Trace__4 \
	Vsauria_tester__Trace__5 \
	Vsauria_tester__Trace__6 \
	Vsauria_tester__Trace__7 \
	Vsauria_tester__Trace__8 \
	Vsauria_tester__Trace__9 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsauria_tester__Syms \
	Vsauria_tester__Trace__0__Slow \
	Vsauria_tester__Trace__1__Slow \
	Vsauria_tester__Trace__2__Slow \
	Vsauria_tester__Trace__3__Slow \
	Vsauria_tester__Trace__4__Slow \
	Vsauria_tester__Trace__5__Slow \
	Vsauria_tester__Trace__6__Slow \
	Vsauria_tester__Trace__7__Slow \
	Vsauria_tester__Trace__8__Slow \
	Vsauria_tester__Trace__9__Slow \
	Vsauria_tester__Trace__10__Slow \
	Vsauria_tester__Trace__11__Slow \
	Vsauria_tester__Trace__12__Slow \
	Vsauria_tester__Trace__13__Slow \
	Vsauria_tester__Trace__14__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_save \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
