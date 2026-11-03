#include"debug.h"
#include"basic_block.h"
#include<iostream>
#include "xtime_l.h"
using namespace std;

void yolo_test(string weight_dir,string ref_dir){
    diag_log("ALLOCATE image/output buffers");
    data_t* in=new data_t[3*416*416];
    data_t* out0=new data_t[OUT_CH*13*13];
    data_t* out1=new data_t[OUT_CH*26*26];
    data_t* out0_ref=new data_t[OUT_CH*13*13];
    data_t* out1_ref=new data_t[OUT_CH*26*26];
    XTime tEnd, tCur;
    u32 tUsed;
    //
    read_params(ref_dir+"/img.bin",in,3*416*416);
    //
    diag_log("INIT accelerator");
    conv_init();
    diag_log("INIT accelerator OK; allocate network");
    Yolo4_Tiny* yolo4_tiny=new Yolo4_Tiny();
    diag_log("LOAD weights");
    yolo4_tiny->load_weight(weight_dir);
    diag_log("ALL WEIGHTS LOADED");
    Xil_DCacheFlush();
    XTime_GetTime(&tCur);
    diag_log("FORWARD BEGIN");
    yolo4_tiny->forward(in,out0,out1);
    diag_log("FORWARD OK");
    Xil_DCacheInvalidateRange((u32)((unsigned int)out0&0xffffffe0), 32*((OUT_CH*13*13*sizeof(data_t))/32+2));
    Xil_DCacheInvalidateRange((u32)((unsigned int)out1&0xffffffe0), 32*((OUT_CH*26*26*sizeof(data_t))/32+2));
    XTime_GetTime(&tEnd);
	tUsed = ((tEnd-tCur)*1000000)/(COUNTS_PER_SECOND);
	cout<<"time elapsed is "<<tUsed<<" us"<<endl;
    //writing back to sd card
	write_data(ref_dir+"/out0.bin",out0,OUT_CH*13*13);
	write_data(ref_dir+"/out1.bin",out1,OUT_CH*26*26);
    //
    delete [] in;
    delete [] out0;
    delete [] out0_ref;
    delete [] out1;
    delete [] out1_ref;
    return;
}


