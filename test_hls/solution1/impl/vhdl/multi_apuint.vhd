-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity multi_apuint is
port (
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    multi_in0_V : IN STD_LOGIC_VECTOR (7 downto 0);
    multi_in1_V : IN STD_LOGIC_VECTOR (7 downto 0);
    multi_out_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    multi_out_V_ap_vld : OUT STD_LOGIC );
end;


architecture behav of multi_apuint is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "multi_apuint,hls_ip_2017_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.170000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=41}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal r_V_fu_43_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_43_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_43_p00 : STD_LOGIC_VECTOR (15 downto 0);
    signal r_V_fu_43_p10 : STD_LOGIC_VECTOR (15 downto 0);


begin



    ap_done <= ap_start;
    ap_idle <= ap_const_logic_1;
    ap_ready <= ap_start;
    multi_out_V <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_fu_43_p0) * unsigned(r_V_fu_43_p1), 16));

    multi_out_V_ap_vld_assign_proc : process(ap_start)
    begin
        if ((ap_start = ap_const_logic_1)) then 
            multi_out_V_ap_vld <= ap_const_logic_1;
        else 
            multi_out_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    r_V_fu_43_p0 <= r_V_fu_43_p00(8 - 1 downto 0);
    r_V_fu_43_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(multi_in1_V),16));
    r_V_fu_43_p1 <= r_V_fu_43_p10(8 - 1 downto 0);
    r_V_fu_43_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(multi_in0_V),16));
end behav;
