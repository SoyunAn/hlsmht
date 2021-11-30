#include <vector>
#include <cstdio>
#include <utility>
#include <random>

#include "ap_int.h"
#include "ap_fixed.h"
#include "src/JET.h"

int alg_test() {
    // The conventional test algorithm that compares the final outputs 
    // of HLS and floating point calculations

    // calculate met for NPART particles
    pt_t in_pt_hw[NJET];
    pt2_t out_pt2_hw;
    glbphi_t in_phi_hw[NJET], out_phi_hw;
    float in_pt[NJET], in_phi[NJET];
    float out_pt, out_phi;

    //setup random number generator
    std::default_random_engine generator(1776); // seed
    std::uniform_real_distribution<float> pt_dist(10.,100.); 
    // random pt uniformly distributed between 10 and 100 GeV for each particle
    std::uniform_real_distribution<float> phi_dist(-FLOATPI,FLOATPI);
    // random uniform phi

    // fill random test data
    std::vector<std::vector<std::pair<float,float> > > vals; 
    // Dimensions: #events=NTEST x #particles=NPART
    // type is a pair: (pt,phi)
    vals.resize(NTEST);
    for(int i=0; i<NTEST; i++){
        vals[i].resize(NPART);
        for(int j=0; j<NPART; j++){
            vals[i][j].first  = pt_dist(generator);
            vals[i][j].second = phi_dist(generator);
        }
    }

    //write results to file
    FILE *f;
    f=fopen("results.txt","w");

    for (int i=0; i<NTEST; ++i) {
        if(DEBUG) std::cout << "\n\n\n\nEvent " << i << std::endl;
        for(int j=0; j<NPART; j++){
            // convert float to hw units
            in_pt_hw[j]  = vals[i][j].first * (1<<PT_DEC_BITS); // 0.25 GeV precision
            in_phi_hw[j] = int(vals[i][j].second * (1<<PHI_SIZE)/(2*FLOATPI));
            // keep test vals as float
            in_pt[j]  = vals[i][j].first;
            in_phi[j] = vals[i][j].second;
            if(DEBUG){
                std::cout << " \t part pt " << in_pt[j];
                std::cout << "\t phi " << in_phi[j];
                std::cout << std::endl;
            }
        }
        out_pt2_hw=0.; out_phi_hw=0.;
        out_pt=0.; out_phi=0.;
        
        // run reference alg
        jet_ref(in_pt, in_phi, out_pt, out_phi);

        // run HW alg
        jet_hw(in_pt_hw, in_phi_hw, out_pt2_hw, out_phi_hw);


        if(DEBUG) std::cout << " REF : met(pt = " << out_pt << ", phi = "<< out_phi << ")\n";
        // for HW alg, convert back to nice units for printing
        int out_phi_hw_int = float(out_phi_hw);
        float out_phi_hw_rad = float(out_phi_hw) * (2*FLOATPI)/(1<<PHI_SIZE);
        float out_pt_hw = sqrt(float(out_pt2_hw)) / (1<<PT_DEC_BITS); // 0.25GeV to GeV
        if(DEBUG) std::cout << "  HW : met(pt = " << out_pt_hw << ", phi = "<< out_phi_hw_rad << ")\n";

        //if not debugging the full event details, print a compact output (in nice units)
        if(false && !DEBUG && NTEST<=100)
            std::cout << "Event " << i
                      << " (REF vs HW) met " << out_pt << " vs " << out_pt_hw
                      << ", phi "<< out_phi << " vs "<< out_phi_hw_rad << "\n";
        fprintf(f, "%f %f %f %f \n", out_pt, out_phi, out_pt_hw, out_phi_hw_rad);
        //fprintf(f, "%f %f %f %d \n", out_pt, out_phi, out_pt_hw, out_phi_hw_int);
    }
    fclose(f);

    return 0;
}


int full_alg_test() {
    // Not really a test alg in the conventional sense, but rather 
    // a step-by-step comparison for each element of the algorithm
    // that we can check to see where any differences may arise
    // between the HLS and floating point calculations

    // calculate met for NPART particles
    pt_t in_pt_hw[NJET];
    pt2_t out_pt2_hw;
    glbphi_t in_phi_hw[NJET], out_phi_hw;
    float in_pt[NJET], in_phi[NJET];
    float out_pt, out_phi;

    //setup random
    std::default_random_engine generator(1776); // seed
    std::uniform_real_distribution<float> pt_dist(10.,100.);
    std::uniform_real_distribution<float> phi_dist(-FLOATPI,FLOATPI);

    //fill test data
    std::vector<std::vector<std::pair<float,float> > > vals;
    vals.resize(NTEST);
    for(int i=0; i<NTEST; i++){
        vals[i].resize(NJET);
        for(int j=0; j<NJET; j++){
            vals[i][j].first  = pt_dist(generator);
            vals[i][j].second = phi_dist(generator);
            if(0){
                std::cout << vals[i][j].first  << "  ";
                std::cout << vals[i][j].second << "\n";
            }
        }
    }

    //write results to file
    FILE *f;
    //f=fopen(("full_results_"+std::to_string(NPART)+"part_"+std::to_string(NTEST/1000)+"kevt.txt").c_str(),"w");
    f=fopen("full_results.txt","w");

    for (int i=0; i<NTEST; ++i) {
        for(int j=0; j<NJET; j++){
            // convert float to hw
            in_pt_hw[j]  = std::round(vals[i][j].first * (1<<PT_DEC_BITS)); // 0.25 GeV precision
            in_phi_hw[j] = std::round(vals[i][j].second * (1<<PHI_SIZE)/(2*FLOATPI));
            // keep test vals as float
            in_pt[j]  = vals[i][j].first;
            in_phi[j] = vals[i][j].second;
        }
        out_pt2_hw=0.; out_phi_hw=0.;
        out_pt=0.; out_phi=0.;
