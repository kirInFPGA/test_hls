// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _multi_apuint_HH_
#define _multi_apuint_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct multi_apuint : public sc_module {
    // Port declarations 8
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > multi_in0_V;
    sc_in< sc_lv<8> > multi_in1_V;
    sc_out< sc_lv<16> > multi_out_V;
    sc_out< sc_logic > multi_out_V_ap_vld;
    // Port declarations for the virtual clock. 
    sc_in_clk ap_virtual_clock;


    // Module declarations
    multi_apuint(sc_module_name name);
    SC_HAS_PROCESS(multi_apuint);

    ~multi_apuint();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<8> > r_V_fu_43_p0;
    sc_signal< sc_lv<8> > r_V_fu_43_p1;
    sc_signal< sc_lv<16> > r_V_fu_43_p00;
    sc_signal< sc_lv<16> > r_V_fu_43_p10;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_multi_out_V();
    void thread_multi_out_V_ap_vld();
    void thread_r_V_fu_43_p0();
    void thread_r_V_fu_43_p00();
    void thread_r_V_fu_43_p1();
    void thread_r_V_fu_43_p10();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
