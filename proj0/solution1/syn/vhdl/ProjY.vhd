-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity ProjY is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_ce : IN STD_LOGIC;
    pt_V : IN STD_LOGIC_VECTOR (15 downto 0);
    phi_V : IN STD_LOGIC_VECTOR (10 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (16 downto 0) );
end;


architecture behav of ProjY is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv11_6FF : STD_LOGIC_VECTOR (10 downto 0) := "11011111111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv17_0 : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal sin_table2_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal sin_table2_ce0 : STD_LOGIC;
    signal sin_table2_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal pt_V_read_reg_172 : STD_LOGIC_VECTOR (15 downto 0);
    signal pt_V_read_reg_172_pp0_iter1_reg : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_33_fu_93_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_33_reg_177 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_33_reg_177_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_33_reg_177_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal sin_table2_load_reg_187 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_reg_192 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal zext_ln544_fu_129_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_32_fu_63_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal phiQ1_V_fu_59_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln891_fu_73_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phiQ1_V_1_fu_79_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal phiQ1_V_2_fu_85_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln891_1_fu_101_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phiQ1_V_3_fu_107_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln118_fu_113_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln887_fu_121_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal ret_V_fu_165_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln1503_fu_149_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal sub_ln68_fu_152_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal ret_V_fu_165_p0 : STD_LOGIC_VECTOR (15 downto 0);
    signal ret_V_fu_165_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_idle_pp0_0to2 : STD_LOGIC;
    signal ap_reset_idle_pp0 : STD_LOGIC;
    signal ap_reset_start_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal ret_V_fu_165_p00 : STD_LOGIC_VECTOR (31 downto 0);
    signal ret_V_fu_165_p10 : STD_LOGIC_VECTOR (31 downto 0);

    component jet_hw_mul_mul_16ns_16ns_32_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (15 downto 0);
        din1 : IN STD_LOGIC_VECTOR (15 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component ProjY_sin_table2 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    sin_table2_U : component ProjY_sin_table2
    generic map (
        DataWidth => 16,
        AddressRange => 256,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => sin_table2_address0,
        ce0 => sin_table2_ce0,
        q0 => sin_table2_q0);

    jet_hw_mul_mul_16ns_16ns_32_1_1_U6 : component jet_hw_mul_mul_16ns_16ns_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 16,
        din1_WIDTH => 16,
        dout_WIDTH => 32)
    port map (
        din0 => ret_V_fu_165_p0,
        din1 => ret_V_fu_165_p1,
        dout => ret_V_fu_165_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                pt_V_read_reg_172 <= pt_V;
                pt_V_read_reg_172_pp0_iter1_reg <= pt_V_read_reg_172;
                sin_table2_load_reg_187 <= sin_table2_q0;
                tmp_33_reg_177 <= phi_V(10 downto 10);
                tmp_33_reg_177_pp0_iter1_reg <= tmp_33_reg_177;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_33_reg_177_pp0_iter2_reg <= tmp_33_reg_177_pp0_iter1_reg;
                tmp_reg_192 <= ret_V_fu_165_p2(31 downto 16);
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm, ap_block_pp0_stage0_subdone, ap_reset_idle_pp0, ap_reset_start_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_start)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_start, ap_ce)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_const_logic_0 = ap_ce) or ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1)));
    end process;


    ap_block_state1_pp0_stage0_iter0_assign_proc : process(ap_start)
    begin
                ap_block_state1_pp0_stage0_iter0 <= (ap_start = ap_const_logic_0);
    end process;

        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_idle_pp0)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_0to2_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0_0to2 <= ap_const_logic_1;
        else 
            ap_idle_pp0_0to2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_idle_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to2)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0_0to2 = ap_const_logic_1))) then 
            ap_reset_idle_pp0 <= ap_const_logic_1;
        else 
            ap_reset_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_start_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to2)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_idle_pp0_0to2 = ap_const_logic_1))) then 
            ap_reset_start_pp0 <= ap_const_logic_1;
        else 
            ap_reset_start_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= 
        sub_ln68_fu_152_p2 when (tmp_33_reg_177_pp0_iter2_reg(0) = '1') else 
        zext_ln1503_fu_149_p1;
    icmp_ln891_1_fu_101_p2 <= "1" when (signed(phi_V) > signed(ap_const_lv11_6FF)) else "0";
    icmp_ln891_fu_73_p2 <= "1" when (signed(tmp_32_fu_63_p4) > signed(ap_const_lv3_0)) else "0";
    phiQ1_V_1_fu_79_p2 <= (phiQ1_V_fu_59_p1 xor ap_const_lv8_FF);
    phiQ1_V_2_fu_85_p3 <= 
        phiQ1_V_1_fu_79_p2 when (icmp_ln891_fu_73_p2(0) = '1') else 
        phiQ1_V_fu_59_p1;
    phiQ1_V_3_fu_107_p2 <= (phiQ1_V_2_fu_85_p3 xor ap_const_lv8_FF);
    phiQ1_V_fu_59_p1 <= phi_V(8 - 1 downto 0);
    ret_V_fu_165_p0 <= ret_V_fu_165_p00(16 - 1 downto 0);
    ret_V_fu_165_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(pt_V_read_reg_172_pp0_iter1_reg),32));
    ret_V_fu_165_p1 <= ret_V_fu_165_p10(16 - 1 downto 0);
    ret_V_fu_165_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sin_table2_load_reg_187),32));
    select_ln118_fu_113_p3 <= 
        phiQ1_V_3_fu_107_p2 when (icmp_ln891_1_fu_101_p2(0) = '1') else 
        phiQ1_V_2_fu_85_p3;
    select_ln887_fu_121_p3 <= 
        select_ln118_fu_113_p3 when (tmp_33_fu_93_p3(0) = '1') else 
        phiQ1_V_2_fu_85_p3;
    sin_table2_address0 <= zext_ln544_fu_129_p1(8 - 1 downto 0);

    sin_table2_ce0_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            sin_table2_ce0 <= ap_const_logic_1;
        else 
            sin_table2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    sub_ln68_fu_152_p2 <= std_logic_vector(unsigned(ap_const_lv17_0) - unsigned(zext_ln1503_fu_149_p1));
    tmp_32_fu_63_p4 <= phi_V(10 downto 8);
    tmp_33_fu_93_p3 <= phi_V(10 downto 10);
    zext_ln1503_fu_149_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_reg_192),17));
    zext_ln544_fu_129_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln887_fu_121_p3),64));
end behav;
