#include"debug.h"
#include"basic_block.h"
#include<iostream>
#include "xtime_l.h"
#include "yolo_postprocess.h"
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
    // Single-image baseline metadata: current img.png is 1920x1080.
    // Multi-frame support must supply each frame's ORIGINAL dimensions.
    static_assert(sizeof(data_t)==sizeof(int16_t), "Expected 16-bit Q9 output");
    static_assert(SCALE==512 && OUT_CH==33, "Postprocess contract changed");
    const YoloPostConfig post_config={1920,1080,0.1f,0.3f};
    std::vector<YoloDetection> detections;
    XTime post_begin,post_end;
    diag_log("POSTPROCESS BEGIN conf=0.1 nms=0.3 image=1920x1080");
    XTime_GetTime(&post_begin);
    if (!yolo_decode_nms(out0,OUT_CH*13*13,out1,OUT_CH*26*26,post_config,detections)) {
        diag_log("ERROR POSTPROCESS invalid input/config/output");
        exit(EXIT_FAILURE);
    }
    XTime_GetTime(&post_end);
    unsigned long long post_us=((post_end-post_begin)*1000000ULL)/COUNTS_PER_SECOND;
    diag_log("POSTPROCESS OK count=%u elapsed_us=%llu",(unsigned)detections.size(),post_us);
    if (!yolo_write_csv((ref_dir+"/detections.csv").c_str(),detections)) {
        diag_log("ERROR detections.csv open/write/sync/close failed");
        exit(EXIT_FAILURE);
    }
    diag_log("DETECTIONS CSV CLOSED OK");

    //
    delete [] in;
    delete [] out0;
    delete [] out0_ref;
    delete [] out1;
    delete [] out1_ref;
    return;
}


