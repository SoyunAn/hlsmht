-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity jet_hw_atan_table4_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of jet_hw_atan_table4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000", 1 => "0000001", 2 => "0000011", 3 => "0000100", 
    4 => "0000101", 5 => "0000110", 6 => "0001000", 7 => "0001001", 
    8 => "0001010", 9 => "0001011", 10 => "0001101", 11 => "0001110", 
    12 => "0001111", 13 => "0010000", 14 => "0010010", 15 => "0010011", 
    16 => "0010100", 17 => "0010110", 18 => "0010111", 19 => "0011000", 
    20 => "0011001", 21 => "0011011", 22 => "0011100", 23 => "0011101", 
    24 => "0011110", 25 => "0011111", 26 => "0100001", 27 => "0100010", 
    28 => "0100011", 29 => "0100100", 30 => "0100110", 31 => "0100111", 
    32 => "0101000", 33 => "0101001", 34 => "0101010", 35 => "0101100", 
    36 => "0101101", 37 => "0101110", 38 => "0101111", 39 => "0110000", 
    40 => "0110001", 41 => "0110011", 42 => "0110100", 43 => "0110101", 
    44 => "0110110", 45 => "0110111", 46 => "0111000", 47 => "0111001", 
    48 => "0111010", 49 => "0111100", 50 => "0111101", 51 => "0111110", 
    52 => "0111111", 53 => "1000000", 54 => "1000001", 55 => "1000010", 
    56 => "1000011", 57 => "1000100", 58 => "1000101", 59 => "1000110", 
    60 => "1000111", 61 => "1001000", 62 => "1001010", 63 => "1001011", 
    64 => "1001100", 65 => "1001101", 66 => "1001110", 67 => "1001111", 
    68 => "1010000", 69 => "1010001", 70 => "1010010", 71 => "1010011", 
    72 to 73=> "1010100", 74 => "1010101", 75 => "1010110", 76 => "1010111", 
    77 => "1011000", 78 => "1011001", 79 => "1011010", 80 => "1011011", 
    81 => "1011100", 82 => "1011101", 83 => "1011110", 84 => "1011111", 
    85 to 86=> "1100000", 87 => "1100001", 88 => "1100010", 89 => "1100011", 
    90 => "1100100", 91 => "1100101", 92 to 93=> "1100110", 94 => "1100111", 
    95 => "1101000", 96 => "1101001", 97 to 98=> "1101010", 99 => "1101011", 
    100 => "1101100", 101 => "1101101", 102 to 103=> "1101110", 104 => "1101111", 
    105 => "1110000", 106 to 107=> "1110001", 108 => "1110010", 109 => "1110011", 
    110 to 111=> "1110100", 112 => "1110101", 113 => "1110110", 114 to 115=> "1110111", 
    116 => "1111000", 117 to 118=> "1111001", 119 => "1111010", 120 to 121=> "1111011", 
    122 => "1111100", 123 to 124=> "1111101", 125 => "1111110", 126 to 127=> "1111111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity jet_hw_atan_table4 is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of jet_hw_atan_table4 is
    component jet_hw_atan_table4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    jet_hw_atan_table4_rom_U :  component jet_hw_atan_table4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


