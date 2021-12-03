/*
  HLS implementation of MET calculation from PF objects
*/
#include "JET.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#include <string>
#endif


// pt, phi are integers
//void met_hw(pt_t data_pt[NPART], phi_t data_phi[NPART], pt2_t& res_pt2, phi_t& res_phi){
void jet_hw(pt_t jet_pt[NJET], glbphi_t jet_phi[NJET], pt2_t& met_pt2, phi_t& met_phi){
    #pragma HLS ARRAY_PARTITION variable=data_pt complete
    #pragma HLS ARRAY_PARTITION variable=data_phi complete
    #pragma HLS pipeline ii=6
    
    if(DEBUG) std::cout << "  HW Begin" << std::endl;

    // calc signed components first
    pxy_t met_x = 0;
    pxy_t met_y = 0;
    pxy_t sum_x = 0;
    pxy_t sum_y = 0;
    LOOP_COMPONENTS: for(int i=0; i<NPART;i++){
        // Get x, y components
        ProjX(jet_pt[i], jet_phi[i], met_x);
        ProjY(jet_pt[i], jet_phi[i], met_y);
        // Add to x, y sums
        sum_x -= met_x;
        sum_y -= met_y;
         if(DEBUG){
             std::cout << "     met x,y = (" << -met_x << ", " << -met_y << ") \t";
             std::cout << " sum x,y = (" << sum_x << ", " << sum_y << ") \t";
             std::cout << " \n";
         }
    }

    met_pt2 = sum_x*sum_x + sum_y*sum_y;

    PhiFromXY(sum_x,sum_y,met_pt2,met_phi);

    return;
}

