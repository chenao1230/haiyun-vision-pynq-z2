/*
 * sd_io.c
 *
 *  Created on: 2021��8��18��
 *      Author: DELL
 */
#include "sd_io.h"
#include <cstdarg>
#include <cstdio>
#include <cstring>

// Use an 8.3 root filename; close on every event to persist the latest stage.
void diag_log(const char* format, ...) {
    char line[256];
    va_list args;
    va_start(args, format);
    vsnprintf(line, sizeof(line), format, args);
    va_end(args);
    FIL log;
    UINT written = 0;
    if (f_open(&log, "0:/DIAG.TXT", FA_OPEN_ALWAYS | FA_WRITE) != FR_OK) return;
    if (f_lseek(&log, f_size(&log)) == FR_OK) {
        f_write(&log, line, strlen(line), &written);
        f_write(&log, "\r\n", 2, &written);
        f_sync(&log);
    }
    f_close(&log);
}



int SD_Init()
{
    FRESULT rc;

    rc = f_mount(&fatfs,"0:/",1);
    if(rc)
    {
        xil_printf("ERROR : f_mount returned %d\r\n",rc);
        return XST_FAILURE;
    }
    return XST_SUCCESS;
}

int SD_Transfer_read(char *FileName,u32 DestinationAddress,u32 ByteLength)
{
    FIL fil;
    FRESULT rc;
    UINT br;

    rc = f_open(&fil,FileName,FA_READ);
    if(rc)
    {
        diag_log("ERROR f_open path=%s rc=%d", FileName, (int)rc);
        xil_printf("ERROR : f_open returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_lseek(&fil, 0);
    if(rc)
    {
        xil_printf("ERROR : f_lseek returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_read(&fil, (void*)DestinationAddress,ByteLength,&br);
    if(rc || br != ByteLength)
    {
        diag_log("ERROR f_read path=%s rc=%d bytes=%u expected=%lu", FileName, (int)rc, br, ByteLength);
        xil_printf("ERROR : f_read returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_close(&fil);
    if(rc)
    {
        xil_printf(" ERROR : f_close returned %d\r\n", rc);
        return XST_FAILURE;
    }
    return XST_SUCCESS;
}

int SD_Transfer_write(char *FileName,u32 SourceAddress,u32 ByteLength)
{
    FIL fil;
    FRESULT rc;
    UINT bw;

    rc = f_open(&fil,FileName,FA_CREATE_ALWAYS | FA_WRITE);
    if(rc)
    {
        diag_log("ERROR f_open path=%s rc=%d", FileName, (int)rc);
        xil_printf("ERROR : f_open returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_lseek(&fil, 0);
    if(rc)
    {
        xil_printf("ERROR : f_lseek returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_write(&fil,(void*) SourceAddress,ByteLength,&bw);
    if(rc || bw != ByteLength)
    {
        diag_log("ERROR f_write path=%s rc=%d bytes=%u expected=%lu", FileName, (int)rc, bw, ByteLength);
        xil_printf("ERROR : f_write returned %d\r\n", rc);
        return XST_FAILURE;
    }
    rc = f_close(&fil);
    if(rc){
        xil_printf("ERROR : f_close returned %d\r\n",rc);
        return XST_FAILURE;
    }
    return XST_SUCCESS;
}


void read_params(string filename,data_t* x,int length){
	diag_log("READ BEGIN %s floats=%d", filename.c_str(), length);
    cout<<"reading "<<filename<<endl;
    float* tmp=new float[length];
	if (SD_Transfer_read((char*)(filename.c_str()),(u32)tmp,(u32)(sizeof(float)*length)) != XST_SUCCESS) {
        diag_log("ERROR READ %s", filename.c_str());
        cout << "ERROR reading " << filename << endl;
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<length;i++){
        x[i]=(data_t)(round(tmp[i]*SCALE));
    }
    delete [] tmp;
    diag_log("READ OK %s", filename.c_str());
}

void write_data(string filename,data_t* x,int length){
	diag_log("WRITE BEGIN %s floats=%d", filename.c_str(), length);
    cout<<"writing "<<filename<<endl;
	float* tmp=new float[length];
	for(int i=0;i<length;i++){
		tmp[i]=(float)x[i]/(float)SCALE;
	}
	if (SD_Transfer_write((char*)filename.c_str(),(u32)tmp,(u32)(sizeof(float)*length)) != XST_SUCCESS) {
        diag_log("ERROR WRITE %s", filename.c_str());
        cout << "ERROR writing " << filename << endl;
        exit(EXIT_FAILURE);
    }
	delete [] tmp;
    diag_log("WRITE OK %s", filename.c_str());
}






