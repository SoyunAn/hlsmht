
/data1/scratch/syan/HLS_2019_2/Vivado/2019.1/bin/xelab xil_defaultlib.apatb_jet_hw_top glbl -prj jet_hw.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims  -L unisims_ver -L xpm --initfile "/data1/scratch/syan/HLS_2019_2/Vivado/2019.1/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s jet_hw -debug wave
/data1/scratch/syan/HLS_2019_2/Vivado/2019.1/bin/xsim --noieeewarnings jet_hw -tclbatch jet_hw.tcl

