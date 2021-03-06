// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "multi_apuint.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic multi_apuint::ap_const_logic_1 = sc_dt::Log_1;
const bool multi_apuint::ap_const_boolean_1 = true;
const sc_logic multi_apuint::ap_const_logic_0 = sc_dt::Log_0;

multi_apuint::multi_apuint(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );

    SC_METHOD(thread_multi_out_V);
    sensitive << ( ap_start );
    sensitive << ( r_V_fu_43_p0 );
    sensitive << ( r_V_fu_43_p1 );

    SC_METHOD(thread_multi_out_V_ap_vld);
    sensitive << ( ap_start );

    SC_METHOD(thread_r_V_fu_43_p0);
    sensitive << ( r_V_fu_43_p00 );

    SC_METHOD(thread_r_V_fu_43_p00);
    sensitive << ( multi_in1_V );

    SC_METHOD(thread_r_V_fu_43_p1);
    sensitive << ( r_V_fu_43_p10 );

    SC_METHOD(thread_r_V_fu_43_p10);
    sensitive << ( multi_in0_V );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_virtual_clock.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "multi_apuint_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, multi_in0_V, "(port)multi_in0_V");
    sc_trace(mVcdFile, multi_in1_V, "(port)multi_in1_V");
    sc_trace(mVcdFile, multi_out_V, "(port)multi_out_V");
    sc_trace(mVcdFile, multi_out_V_ap_vld, "(port)multi_out_V_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, r_V_fu_43_p0, "r_V_fu_43_p0");
    sc_trace(mVcdFile, r_V_fu_43_p1, "r_V_fu_43_p1");
    sc_trace(mVcdFile, r_V_fu_43_p00, "r_V_fu_43_p00");
    sc_trace(mVcdFile, r_V_fu_43_p10, "r_V_fu_43_p10");
#endif

    }
    mHdltvinHandle.open("multi_apuint.hdltvin.dat");
    mHdltvoutHandle.open("multi_apuint.hdltvout.dat");
}

multi_apuint::~multi_apuint() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void multi_apuint::thread_ap_done() {
    ap_done = ap_start.read();
}

void multi_apuint::thread_ap_idle() {
    ap_idle = ap_const_logic_1;
}

void multi_apuint::thread_ap_ready() {
    ap_ready = ap_start.read();
}

void multi_apuint::thread_multi_out_V() {
    multi_out_V = (!r_V_fu_43_p0.read().is_01() || !r_V_fu_43_p1.read().is_01())? sc_lv<16>(): sc_biguint<8>(r_V_fu_43_p0.read()) * sc_biguint<8>(r_V_fu_43_p1.read());
}

void multi_apuint::thread_multi_out_V_ap_vld() {
    if (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) {
        multi_out_V_ap_vld = ap_const_logic_1;
    } else {
        multi_out_V_ap_vld = ap_const_logic_0;
    }
}

void multi_apuint::thread_r_V_fu_43_p0() {
    r_V_fu_43_p0 =  (sc_lv<8>) (r_V_fu_43_p00.read());
}

void multi_apuint::thread_r_V_fu_43_p00() {
    r_V_fu_43_p00 = esl_zext<16,8>(multi_in1_V.read());
}

void multi_apuint::thread_r_V_fu_43_p1() {
    r_V_fu_43_p1 =  (sc_lv<8>) (r_V_fu_43_p10.read());
}

void multi_apuint::thread_r_V_fu_43_p10() {
    r_V_fu_43_p10 = esl_zext<16,8>(multi_in0_V.read());
}

void multi_apuint::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"multi_in0_V\" :  \"" << multi_in0_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"multi_in1_V\" :  \"" << multi_in1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"multi_out_V\" :  \"" << multi_out_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"multi_out_V_ap_vld\" :  \"" << multi_out_V_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

