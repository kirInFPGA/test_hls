// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="multi_apuint,hls_ip_2017_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.170000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=41}" *)

module multi_apuint (
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        multi_in0_V,
        multi_in1_V,
        multi_out_V,
        multi_out_V_ap_vld
);


input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] multi_in0_V;
input  [7:0] multi_in1_V;
output  [15:0] multi_out_V;
output   multi_out_V_ap_vld;

reg multi_out_V_ap_vld;

wire   [7:0] r_V_fu_43_p0;
wire   [7:0] r_V_fu_43_p1;
wire   [15:0] r_V_fu_43_p00;
wire   [15:0] r_V_fu_43_p10;

always @ (*) begin
    if ((ap_start == 1'b1)) begin
        multi_out_V_ap_vld = 1'b1;
    end else begin
        multi_out_V_ap_vld = 1'b0;
    end
end

assign ap_done = ap_start;

assign ap_idle = 1'b1;

assign ap_ready = ap_start;

assign multi_out_V = (r_V_fu_43_p0 * r_V_fu_43_p1);

assign r_V_fu_43_p0 = r_V_fu_43_p00;

assign r_V_fu_43_p00 = multi_in1_V;

assign r_V_fu_43_p1 = r_V_fu_43_p10;

assign r_V_fu_43_p10 = multi_in0_V;

endmodule //multi_apuint
