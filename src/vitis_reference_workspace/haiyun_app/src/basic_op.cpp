#include"basic_op.h"
#include "xtime_l.h"

void conv_leakyrelu(int ch_in,int ch_out,int pad,int stride,int k,int h,int w,data_t* in,data_t *weight,data_t *bias,data_t *out,int act){
	//Xil_DCacheFlushRange((u32)in,sizeof(data_t)*ch_in*h*w);//������ˢ����DDR
	XConv_Set_in1_V(&conv_inst, (u32)in);
	XConv_Set_in2_V(&conv_inst, (u32)in);
	XConv_Set_in3_V(&conv_inst, (u32)in);
	XConv_Set_in4_V(&conv_inst, (u32)in);

	XConv_Set_w1_V(&conv_inst, (u32)weight);
	XConv_Set_w2_V(&conv_inst, (u32)weight);
	XConv_Set_w3_V(&conv_inst, (u32)weight);
	XConv_Set_w4_V(&conv_inst, (u32)weight);

	XConv_Set_b_V(&conv_inst, (u32)bias);
	XConv_Set_out1_V(&conv_inst, (u32)out);
	XConv_Set_out2_V(&conv_inst, (u32)out);
	XConv_Set_out3_V(&conv_inst, (u32)out);
	XConv_Set_out4_V(&conv_inst, (u32)out);

	XConv_Set_ch_in(&conv_inst,ch_in);
	XConv_Set_ch_out(&conv_inst,ch_out);
	XConv_Set_fsize(&conv_inst,h);
	XConv_Set_stride(&conv_inst,stride);
	XConv_Set_kernel(&conv_inst,k);
	XConv_Set_act(&conv_inst,act);
	//
    static unsigned operation = 0;
    ++operation;
    diag_log("OP %u BEGIN in=%d out=%d kernel=%d size=%d stride=%d", operation, ch_in, ch_out, k, h, stride);
    XConv_Start(&conv_inst);
	XTime start, now;
    XTime_GetTime(&start);
    while (XConv_IsDone(&conv_inst) == 0) {
        XTime_GetTime(&now);
        if (now - start > 60ULL * COUNTS_PER_SECOND) {
            xil_printf("ERROR: accelerator timeout, ch_in=%d ch_out=%d kernel=%d\r\n", ch_in, ch_out, k);
            diag_log("ERROR OP %u TIMEOUT", operation);
            exit(EXIT_FAILURE);
        }
    }
    diag_log("OP %u OK", operation);
//	if(k==3&&stride==2)
//		Xil_DCacheInvalidateRange((u32)((unsigned int)out&0xffffffe0), 32*((ch_out*h*w/4*sizeof(data_t))/32+2));
//	else
//	    Xil_DCacheInvalidateRange((u32)((unsigned int)out&0xffffffe0), 32*((ch_out*h*w*sizeof(data_t))/32+2));

}

void conv_init(){
	if (XConv_Initialize(&conv_inst, XPAR_CONV_0_DEVICE_ID) != XST_SUCCESS) {
        xil_printf("ERROR: accelerator initialization failed\r\n");
        exit(EXIT_FAILURE);
    }
}

void sampling(data_t* in,data_t* out,int ch,int fsize,int mode){
	if(mode==1)   //maxpool
	    conv_leakyrelu(ch,ch,0,0,2,fsize,fsize,in,in,in,out,0);
	else
		conv_leakyrelu(ch,ch,0,0,0,fsize,fsize,in,in,in,out,0);
}
