// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "jet_pt_0_V"
#define AUTOTB_TVIN_jet_pt_0_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_0_V.dat"
// wrapc file define: "jet_pt_1_V"
#define AUTOTB_TVIN_jet_pt_1_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_1_V.dat"
// wrapc file define: "jet_pt_2_V"
#define AUTOTB_TVIN_jet_pt_2_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_2_V.dat"
// wrapc file define: "jet_pt_3_V"
#define AUTOTB_TVIN_jet_pt_3_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_3_V.dat"
// wrapc file define: "jet_pt_4_V"
#define AUTOTB_TVIN_jet_pt_4_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_4_V.dat"
// wrapc file define: "jet_pt_5_V"
#define AUTOTB_TVIN_jet_pt_5_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_5_V.dat"
// wrapc file define: "jet_pt_6_V"
#define AUTOTB_TVIN_jet_pt_6_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_6_V.dat"
// wrapc file define: "jet_pt_7_V"
#define AUTOTB_TVIN_jet_pt_7_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_7_V.dat"
// wrapc file define: "jet_pt_8_V"
#define AUTOTB_TVIN_jet_pt_8_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_8_V.dat"
// wrapc file define: "jet_pt_9_V"
#define AUTOTB_TVIN_jet_pt_9_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_pt_9_V.dat"
// wrapc file define: "jet_phi_0_V"
#define AUTOTB_TVIN_jet_phi_0_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_0_V.dat"
// wrapc file define: "jet_phi_1_V"
#define AUTOTB_TVIN_jet_phi_1_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_1_V.dat"
// wrapc file define: "jet_phi_2_V"
#define AUTOTB_TVIN_jet_phi_2_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_2_V.dat"
// wrapc file define: "jet_phi_3_V"
#define AUTOTB_TVIN_jet_phi_3_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_3_V.dat"
// wrapc file define: "jet_phi_4_V"
#define AUTOTB_TVIN_jet_phi_4_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_4_V.dat"
// wrapc file define: "jet_phi_5_V"
#define AUTOTB_TVIN_jet_phi_5_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_5_V.dat"
// wrapc file define: "jet_phi_6_V"
#define AUTOTB_TVIN_jet_phi_6_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_6_V.dat"
// wrapc file define: "jet_phi_7_V"
#define AUTOTB_TVIN_jet_phi_7_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_7_V.dat"
// wrapc file define: "jet_phi_8_V"
#define AUTOTB_TVIN_jet_phi_8_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_8_V.dat"
// wrapc file define: "jet_phi_9_V"
#define AUTOTB_TVIN_jet_phi_9_V  "../tv/cdatafile/c.jet_hw.autotvin_jet_phi_9_V.dat"
// wrapc file define: "met_pt2_V"
#define AUTOTB_TVOUT_met_pt2_V  "../tv/cdatafile/c.jet_hw.autotvout_met_pt2_V.dat"
// wrapc file define: "met_phi_V"
#define AUTOTB_TVOUT_met_phi_V  "../tv/cdatafile/c.jet_hw.autotvout_met_phi_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "met_pt2_V"
#define AUTOTB_TVOUT_PC_met_pt2_V  "../tv/rtldatafile/rtl.jet_hw.autotvout_met_pt2_V.dat"
// tvout file define: "met_phi_V"
#define AUTOTB_TVOUT_PC_met_phi_V  "../tv/rtldatafile/rtl.jet_hw.autotvout_met_phi_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			jet_pt_0_V_depth = 0;
			jet_pt_1_V_depth = 0;
			jet_pt_2_V_depth = 0;
			jet_pt_3_V_depth = 0;
			jet_pt_4_V_depth = 0;
			jet_pt_5_V_depth = 0;
			jet_pt_6_V_depth = 0;
			jet_pt_7_V_depth = 0;
			jet_pt_8_V_depth = 0;
			jet_pt_9_V_depth = 0;
			jet_phi_0_V_depth = 0;
			jet_phi_1_V_depth = 0;
			jet_phi_2_V_depth = 0;
			jet_phi_3_V_depth = 0;
			jet_phi_4_V_depth = 0;
			jet_phi_5_V_depth = 0;
			jet_phi_6_V_depth = 0;
			jet_phi_7_V_depth = 0;
			jet_phi_8_V_depth = 0;
			jet_phi_9_V_depth = 0;
			met_pt2_V_depth = 0;
			met_phi_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{jet_pt_0_V " << jet_pt_0_V_depth << "}\n";
			total_list << "{jet_pt_1_V " << jet_pt_1_V_depth << "}\n";
			total_list << "{jet_pt_2_V " << jet_pt_2_V_depth << "}\n";
			total_list << "{jet_pt_3_V " << jet_pt_3_V_depth << "}\n";
			total_list << "{jet_pt_4_V " << jet_pt_4_V_depth << "}\n";
			total_list << "{jet_pt_5_V " << jet_pt_5_V_depth << "}\n";
			total_list << "{jet_pt_6_V " << jet_pt_6_V_depth << "}\n";
			total_list << "{jet_pt_7_V " << jet_pt_7_V_depth << "}\n";
			total_list << "{jet_pt_8_V " << jet_pt_8_V_depth << "}\n";
			total_list << "{jet_pt_9_V " << jet_pt_9_V_depth << "}\n";
			total_list << "{jet_phi_0_V " << jet_phi_0_V_depth << "}\n";
			total_list << "{jet_phi_1_V " << jet_phi_1_V_depth << "}\n";
			total_list << "{jet_phi_2_V " << jet_phi_2_V_depth << "}\n";
			total_list << "{jet_phi_3_V " << jet_phi_3_V_depth << "}\n";
			total_list << "{jet_phi_4_V " << jet_phi_4_V_depth << "}\n";
			total_list << "{jet_phi_5_V " << jet_phi_5_V_depth << "}\n";
			total_list << "{jet_phi_6_V " << jet_phi_6_V_depth << "}\n";
			total_list << "{jet_phi_7_V " << jet_phi_7_V_depth << "}\n";
			total_list << "{jet_phi_8_V " << jet_phi_8_V_depth << "}\n";
			total_list << "{jet_phi_9_V " << jet_phi_9_V_depth << "}\n";
			total_list << "{met_pt2_V " << met_pt2_V_depth << "}\n";
			total_list << "{met_phi_V " << met_phi_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int jet_pt_0_V_depth;
		int jet_pt_1_V_depth;
		int jet_pt_2_V_depth;
		int jet_pt_3_V_depth;
		int jet_pt_4_V_depth;
		int jet_pt_5_V_depth;
		int jet_pt_6_V_depth;
		int jet_pt_7_V_depth;
		int jet_pt_8_V_depth;
		int jet_pt_9_V_depth;
		int jet_phi_0_V_depth;
		int jet_phi_1_V_depth;
		int jet_phi_2_V_depth;
		int jet_phi_3_V_depth;
		int jet_phi_4_V_depth;
		int jet_phi_5_V_depth;
		int jet_phi_6_V_depth;
		int jet_phi_7_V_depth;
		int jet_phi_8_V_depth;
		int jet_phi_9_V_depth;
		int met_pt2_V_depth;
		int met_phi_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void jet_hw (
ap_uint<16> jet_pt[10],
ap_int<11> jet_phi[10],
ap_uint<32> (&met_pt2),
ap_int<11> (&met_phi));

void AESL_WRAP_jet_hw (
ap_uint<16> jet_pt[10],
ap_int<11> jet_phi[10],
ap_uint<32> (&met_pt2),
ap_int<11> (&met_phi))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "met_pt2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_met_pt2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_met_pt2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_met_pt2_V, AESL_token); // data

			sc_bv<32> *met_pt2_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'met_pt2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'met_pt2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					met_pt2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_met_pt2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_met_pt2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: met_pt2_V
				{
					// bitslice(31, 0)
					// {
						// celement: met_pt2.V(31, 0)
						// {
							sc_lv<32>* met_pt2_V_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: met_pt2.V(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(met_pt2) != NULL) // check the null address if the c port is array or others
								{
									met_pt2_V_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(met_pt2_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: met_pt2.V(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : met_pt2
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : met_pt2
								// output_left_conversion : met_pt2
								// output_type_conversion : (met_pt2_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(met_pt2) != NULL) // check the null address if the c port is array or others
								{
									met_pt2 = (met_pt2_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] met_pt2_V_pc_buffer;
		}

		// output port post check: "met_phi_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_met_phi_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_met_phi_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_met_phi_V, AESL_token); // data

			sc_bv<11> *met_phi_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'met_phi_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'met_phi_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					met_phi_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_met_phi_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_met_phi_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: met_phi_V
				{
					// bitslice(10, 0)
					// {
						// celement: met_phi.V(10, 0)
						// {
							sc_lv<11>* met_phi_V_lv0_0_0_1 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: met_phi.V(10, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(met_phi) != NULL) // check the null address if the c port is array or others
								{
									met_phi_V_lv0_0_0_1[hls_map_index].range(10, 0) = sc_bv<11>(met_phi_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: met_phi.V(10, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : met_phi
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : met_phi
								// output_left_conversion : met_phi
								// output_type_conversion : (met_phi_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(met_phi) != NULL) // check the null address if the c port is array or others
								{
									met_phi = (met_phi_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] met_phi_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "jet_pt_0_V"
		char* tvin_jet_pt_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_0_V);

		// "jet_pt_1_V"
		char* tvin_jet_pt_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_1_V);

		// "jet_pt_2_V"
		char* tvin_jet_pt_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_2_V);

		// "jet_pt_3_V"
		char* tvin_jet_pt_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_3_V);

		// "jet_pt_4_V"
		char* tvin_jet_pt_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_4_V);

		// "jet_pt_5_V"
		char* tvin_jet_pt_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_5_V);

		// "jet_pt_6_V"
		char* tvin_jet_pt_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_6_V);

		// "jet_pt_7_V"
		char* tvin_jet_pt_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_7_V);

		// "jet_pt_8_V"
		char* tvin_jet_pt_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_8_V);

		// "jet_pt_9_V"
		char* tvin_jet_pt_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_pt_9_V);

		// "jet_phi_0_V"
		char* tvin_jet_phi_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_0_V);

		// "jet_phi_1_V"
		char* tvin_jet_phi_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_1_V);

		// "jet_phi_2_V"
		char* tvin_jet_phi_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_2_V);

		// "jet_phi_3_V"
		char* tvin_jet_phi_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_3_V);

		// "jet_phi_4_V"
		char* tvin_jet_phi_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_4_V);

		// "jet_phi_5_V"
		char* tvin_jet_phi_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_5_V);

		// "jet_phi_6_V"
		char* tvin_jet_phi_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_6_V);

		// "jet_phi_7_V"
		char* tvin_jet_phi_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_7_V);

		// "jet_phi_8_V"
		char* tvin_jet_phi_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_8_V);

		// "jet_phi_9_V"
		char* tvin_jet_phi_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_jet_phi_9_V);

		// "met_pt2_V"
		char* tvout_met_pt2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_met_pt2_V);

		// "met_phi_V"
		char* tvout_met_phi_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_met_phi_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_jet_pt_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_0_V, tvin_jet_pt_0_V);

		sc_bv<16>* jet_pt_0_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_0_V, "%s\n", (jet_pt_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_0_V, tvin_jet_pt_0_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_0_V_depth);
		sprintf(tvin_jet_pt_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_0_V, tvin_jet_pt_0_V);

		// release memory allocation
		delete [] jet_pt_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_1_V, tvin_jet_pt_1_V);

		sc_bv<16>* jet_pt_1_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_1_V, "%s\n", (jet_pt_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_1_V, tvin_jet_pt_1_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_1_V_depth);
		sprintf(tvin_jet_pt_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_1_V, tvin_jet_pt_1_V);

		// release memory allocation
		delete [] jet_pt_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_2_V, tvin_jet_pt_2_V);

		sc_bv<16>* jet_pt_2_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_2_V, "%s\n", (jet_pt_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_2_V, tvin_jet_pt_2_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_2_V_depth);
		sprintf(tvin_jet_pt_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_2_V, tvin_jet_pt_2_V);

		// release memory allocation
		delete [] jet_pt_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_3_V, tvin_jet_pt_3_V);

		sc_bv<16>* jet_pt_3_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_3_V, "%s\n", (jet_pt_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_3_V, tvin_jet_pt_3_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_3_V_depth);
		sprintf(tvin_jet_pt_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_3_V, tvin_jet_pt_3_V);

		// release memory allocation
		delete [] jet_pt_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_4_V, tvin_jet_pt_4_V);

		sc_bv<16>* jet_pt_4_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_4_V, "%s\n", (jet_pt_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_4_V, tvin_jet_pt_4_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_4_V_depth);
		sprintf(tvin_jet_pt_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_4_V, tvin_jet_pt_4_V);

		// release memory allocation
		delete [] jet_pt_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_5_V, tvin_jet_pt_5_V);

		sc_bv<16>* jet_pt_5_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_5_V, "%s\n", (jet_pt_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_5_V, tvin_jet_pt_5_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_5_V_depth);
		sprintf(tvin_jet_pt_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_5_V, tvin_jet_pt_5_V);

		// release memory allocation
		delete [] jet_pt_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_6_V, tvin_jet_pt_6_V);

		sc_bv<16>* jet_pt_6_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_6_V, "%s\n", (jet_pt_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_6_V, tvin_jet_pt_6_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_6_V_depth);
		sprintf(tvin_jet_pt_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_6_V, tvin_jet_pt_6_V);

		// release memory allocation
		delete [] jet_pt_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_7_V, tvin_jet_pt_7_V);

		sc_bv<16>* jet_pt_7_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_7_V, "%s\n", (jet_pt_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_7_V, tvin_jet_pt_7_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_7_V_depth);
		sprintf(tvin_jet_pt_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_7_V, tvin_jet_pt_7_V);

		// release memory allocation
		delete [] jet_pt_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_8_V, tvin_jet_pt_8_V);

		sc_bv<16>* jet_pt_8_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_8_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_8_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_8_V, "%s\n", (jet_pt_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_8_V, tvin_jet_pt_8_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_8_V_depth);
		sprintf(tvin_jet_pt_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_8_V, tvin_jet_pt_8_V);

		// release memory allocation
		delete [] jet_pt_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_pt_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_pt_9_V, tvin_jet_pt_9_V);

		sc_bv<16>* jet_pt_9_V_tvin_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: jet_pt_9_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: jet_pt.V(15, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_pt[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_pt[0]
						// regulate_c_name       : jet_pt_V
						// input_type_conversion : (jet_pt[i_0]).to_string(2).c_str()
						if (&(jet_pt[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> jet_pt_V_tmp_mem;
							jet_pt_V_tmp_mem = (jet_pt[i_0]).to_string(2).c_str();
							jet_pt_9_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = jet_pt_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_pt_9_V, "%s\n", (jet_pt_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_pt_9_V, tvin_jet_pt_9_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_pt_9_V_depth);
		sprintf(tvin_jet_pt_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_pt_9_V, tvin_jet_pt_9_V);

		// release memory allocation
		delete [] jet_pt_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_0_V, tvin_jet_phi_0_V);

		sc_bv<11>* jet_phi_0_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_0_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_0_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_0_V, "%s\n", (jet_phi_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_0_V, tvin_jet_phi_0_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_0_V_depth);
		sprintf(tvin_jet_phi_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_0_V, tvin_jet_phi_0_V);

		// release memory allocation
		delete [] jet_phi_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_1_V, tvin_jet_phi_1_V);

		sc_bv<11>* jet_phi_1_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_1_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_1_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_1_V, "%s\n", (jet_phi_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_1_V, tvin_jet_phi_1_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_1_V_depth);
		sprintf(tvin_jet_phi_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_1_V, tvin_jet_phi_1_V);

		// release memory allocation
		delete [] jet_phi_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_2_V, tvin_jet_phi_2_V);

		sc_bv<11>* jet_phi_2_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_2_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_2_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_2_V, "%s\n", (jet_phi_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_2_V, tvin_jet_phi_2_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_2_V_depth);
		sprintf(tvin_jet_phi_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_2_V, tvin_jet_phi_2_V);

		// release memory allocation
		delete [] jet_phi_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_3_V, tvin_jet_phi_3_V);

		sc_bv<11>* jet_phi_3_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_3_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_3_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_3_V, "%s\n", (jet_phi_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_3_V, tvin_jet_phi_3_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_3_V_depth);
		sprintf(tvin_jet_phi_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_3_V, tvin_jet_phi_3_V);

		// release memory allocation
		delete [] jet_phi_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_4_V, tvin_jet_phi_4_V);

		sc_bv<11>* jet_phi_4_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_4_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_4_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_4_V, "%s\n", (jet_phi_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_4_V, tvin_jet_phi_4_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_4_V_depth);
		sprintf(tvin_jet_phi_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_4_V, tvin_jet_phi_4_V);

		// release memory allocation
		delete [] jet_phi_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_5_V, tvin_jet_phi_5_V);

		sc_bv<11>* jet_phi_5_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_5_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_5_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_5_V, "%s\n", (jet_phi_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_5_V, tvin_jet_phi_5_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_5_V_depth);
		sprintf(tvin_jet_phi_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_5_V, tvin_jet_phi_5_V);

		// release memory allocation
		delete [] jet_phi_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_6_V, tvin_jet_phi_6_V);

		sc_bv<11>* jet_phi_6_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_6_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_6_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_6_V, "%s\n", (jet_phi_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_6_V, tvin_jet_phi_6_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_6_V_depth);
		sprintf(tvin_jet_phi_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_6_V, tvin_jet_phi_6_V);

		// release memory allocation
		delete [] jet_phi_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_7_V, tvin_jet_phi_7_V);

		sc_bv<11>* jet_phi_7_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_7_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_7_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_7_V, "%s\n", (jet_phi_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_7_V, tvin_jet_phi_7_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_7_V_depth);
		sprintf(tvin_jet_phi_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_7_V, tvin_jet_phi_7_V);

		// release memory allocation
		delete [] jet_phi_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_8_V, tvin_jet_phi_8_V);

		sc_bv<11>* jet_phi_8_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_8_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_8_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_8_V, "%s\n", (jet_phi_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_8_V, tvin_jet_phi_8_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_8_V_depth);
		sprintf(tvin_jet_phi_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_8_V, tvin_jet_phi_8_V);

		// release memory allocation
		delete [] jet_phi_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_jet_phi_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_jet_phi_9_V, tvin_jet_phi_9_V);

		sc_bv<11>* jet_phi_9_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: jet_phi_9_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: jet_phi.V(10, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : jet_phi[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : jet_phi[0]
						// regulate_c_name       : jet_phi_V
						// input_type_conversion : (jet_phi[i_0]).to_string(2).c_str()
						if (&(jet_phi[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> jet_phi_V_tmp_mem;
							jet_phi_V_tmp_mem = (jet_phi[i_0]).to_string(2).c_str();
							jet_phi_9_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = jet_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_jet_phi_9_V, "%s\n", (jet_phi_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_jet_phi_9_V, tvin_jet_phi_9_V);
		}

		tcl_file.set_num(1, &tcl_file.jet_phi_9_V_depth);
		sprintf(tvin_jet_phi_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_jet_phi_9_V, tvin_jet_phi_9_V);

		// release memory allocation
		delete [] jet_phi_9_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		jet_hw(jet_pt, jet_phi, met_pt2, met_phi);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_met_pt2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_met_pt2_V, tvout_met_pt2_V);

		sc_bv<32>* met_pt2_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: met_pt2_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: met_pt2.V(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : met_pt2
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : met_pt2
						// regulate_c_name       : met_pt2_V
						// input_type_conversion : (met_pt2).to_string(2).c_str()
						if (&(met_pt2) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> met_pt2_V_tmp_mem;
							met_pt2_V_tmp_mem = (met_pt2).to_string(2).c_str();
							met_pt2_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = met_pt2_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_met_pt2_V, "%s\n", (met_pt2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_met_pt2_V, tvout_met_pt2_V);
		}

		tcl_file.set_num(1, &tcl_file.met_pt2_V_depth);
		sprintf(tvout_met_pt2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_met_pt2_V, tvout_met_pt2_V);

		// release memory allocation
		delete [] met_pt2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_met_phi_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_met_phi_V, tvout_met_phi_V);

		sc_bv<11>* met_phi_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: met_phi_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: met_phi.V(10, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : met_phi
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : met_phi
						// regulate_c_name       : met_phi_V
						// input_type_conversion : (met_phi).to_string(2).c_str()
						if (&(met_phi) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> met_phi_V_tmp_mem;
							met_phi_V_tmp_mem = (met_phi).to_string(2).c_str();
							met_phi_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = met_phi_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_met_phi_V, "%s\n", (met_phi_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_met_phi_V, tvout_met_phi_V);
		}

		tcl_file.set_num(1, &tcl_file.met_phi_V_depth);
		sprintf(tvout_met_phi_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_met_phi_V, tvout_met_phi_V);

		// release memory allocation
		delete [] met_phi_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "jet_pt_0_V"
		delete [] tvin_jet_pt_0_V;
		// release memory allocation: "jet_pt_1_V"
		delete [] tvin_jet_pt_1_V;
		// release memory allocation: "jet_pt_2_V"
		delete [] tvin_jet_pt_2_V;
		// release memory allocation: "jet_pt_3_V"
		delete [] tvin_jet_pt_3_V;
		// release memory allocation: "jet_pt_4_V"
		delete [] tvin_jet_pt_4_V;
		// release memory allocation: "jet_pt_5_V"
		delete [] tvin_jet_pt_5_V;
		// release memory allocation: "jet_pt_6_V"
		delete [] tvin_jet_pt_6_V;
		// release memory allocation: "jet_pt_7_V"
		delete [] tvin_jet_pt_7_V;
		// release memory allocation: "jet_pt_8_V"
		delete [] tvin_jet_pt_8_V;
		// release memory allocation: "jet_pt_9_V"
		delete [] tvin_jet_pt_9_V;
		// release memory allocation: "jet_phi_0_V"
		delete [] tvin_jet_phi_0_V;
		// release memory allocation: "jet_phi_1_V"
		delete [] tvin_jet_phi_1_V;
		// release memory allocation: "jet_phi_2_V"
		delete [] tvin_jet_phi_2_V;
		// release memory allocation: "jet_phi_3_V"
		delete [] tvin_jet_phi_3_V;
		// release memory allocation: "jet_phi_4_V"
		delete [] tvin_jet_phi_4_V;
		// release memory allocation: "jet_phi_5_V"
		delete [] tvin_jet_phi_5_V;
		// release memory allocation: "jet_phi_6_V"
		delete [] tvin_jet_phi_6_V;
		// release memory allocation: "jet_phi_7_V"
		delete [] tvin_jet_phi_7_V;
		// release memory allocation: "jet_phi_8_V"
		delete [] tvin_jet_phi_8_V;
		// release memory allocation: "jet_phi_9_V"
		delete [] tvin_jet_phi_9_V;
		// release memory allocation: "met_pt2_V"
		delete [] tvout_met_pt2_V;
		// release memory allocation: "met_phi_V"
		delete [] tvout_met_phi_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

