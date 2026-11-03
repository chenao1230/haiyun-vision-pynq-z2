/******************************************************************************
*
* Copyright (C) 2012 - 2014 Xilinx, Inc.  All rights reserved.
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal 
* in the Software without restriction, including without limitation the rights 
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell  
* copies of the Software, and to permit persons to whom the Software is 
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in 
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file sd.c
*
* Contains code for the SD card FLASH functionality.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver	Who	Date		Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00a jz	04/28/11 Initial release
* 7.00a kc  10/18/13 Integrated SD/MMC driver
* 12.00a ssc 12/11/14 Fix for CR# 839182
*
* </pre>
*
* @note
*
******************************************************************************/

/***************************** Include Files *********************************/
#include "xparameters.h"
#include "fsbl.h"

#if defined(XPAR_PS7_SD_0_S_AXI_BASEADDR) || defined(XPAR_XSDPS_0_BASEADDR)

#ifndef XPAR_PS7_SD_0_S_AXI_BASEADDR
#define XPAR_PS7_SD_0_S_AXI_BASEADDR XPAR_XSDPS_0_BASEADDR
#endif

#include "xstatus.h"

#include "ff.h"
#include "sd.h"
#include "early_log.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/

/************************** Variable Definitions *****************************/

extern u32 FlashReadBaseAddress;


static FIL fil;		/* File object */
static FATFS fatfs;
static int early_ready = 0;
void EarlyPrintf(const char *format, ...) {
    char message[256];
    va_list args;
    if (!early_ready) return;
    va_start(args, format);
    vsnprintf(message, sizeof(message), format, args);
    va_end(args);
    EarlyLog(message);
}


/* Runs entirely from OCM. Mount once before the DDR sanity check.
 * InitSD later remounts this same static work area with all log files closed.
 * Keep the boot image file open while logging through a separate FIL. */
void EarlyLog(const char *message) {
    FIL log;
    UINT written;
    if (!early_ready) {
        if (f_mount(&fatfs, "0:/", 1) != FR_OK) return;
        early_ready = 1;
    }
    if (f_open(&log, "0:/FSBL.TXT", FA_OPEN_ALWAYS | FA_WRITE) != FR_OK) return;
    if (f_lseek(&log, f_size(&log)) == FR_OK) {
        f_write(&log, message, strlen(message), &written);
        f_write(&log, "\r\n", 2, &written);
        f_sync(&log);
    }
    f_close(&log);
}

static char buffer[32];
static char *boot_file = buffer;

/******************************************************************************/
/******************************************************************************/
/**
*
* This function initializes the controller for the SD FLASH interface.
*
* @param	filename of the file that is to be used
*
* @return
*		- XST_SUCCESS if the controller initializes correctly
*		- XST_FAILURE if the controller fails to initializes correctly
*
* @note		None.
*
****************************************************************************/
u32 InitSD(const char *filename)
{

	FRESULT rc;
	TCHAR *path = "0:/"; /* Logical drive number is 0 */

	/* Register volume work area, initialize device */
	rc = f_mount(&fatfs, path, 0);
	fsbl_printf(DEBUG_INFO,"SD: rc= %.8x\n\r", rc);

	if (rc != FR_OK) {
		return XST_FAILURE;
	}

	strcpy_rom(buffer, filename);
	boot_file = (char *)buffer;
	FlashReadBaseAddress = XPAR_PS7_SD_0_S_AXI_BASEADDR;

	rc = f_open(&fil, boot_file, FA_READ);
	if (rc) {
		fsbl_printf(DEBUG_GENERAL,"SD: Unable to open file %s: %d\n", boot_file, rc);
		return XST_FAILURE;
	}

	return XST_SUCCESS;

}

/******************************************************************************/
/**
*
* This function provides the SD FLASH interface for the Simplified header
* functionality.
*
* @param	SourceAddress is address in FLASH data space
* @param	DestinationAddress is address in OCM data space
* @param	LengthBytes is the number of bytes to move
*
* @return
*		- XST_SUCCESS if the write completes correctly
*		- XST_FAILURE if the write fails to completes correctly
*
* @note		None.
*
****************************************************************************/
u32 SDAccess( u32 SourceAddress, u32 DestinationAddress, u32 LengthBytes)
{

	FRESULT rc;	 /* Result code */
	UINT br;

	rc = f_lseek(&fil, SourceAddress);
	if (rc) {
		fsbl_printf(DEBUG_INFO,"SD: Unable to seek to %lx\n", SourceAddress);
		return XST_FAILURE;
	}

	rc = f_read(&fil, (void*)DestinationAddress, LengthBytes, &br);

    if (rc || br != LengthBytes) {
        fsbl_printf(DEBUG_GENERAL, "SD read ERROR rc=%d requested=%lu actual=%lu source=%08lx destination=%08lx", rc, LengthBytes, (u32)br, SourceAddress, DestinationAddress);
        return XST_FAILURE;
    }
    if (LengthBytes > 1000000) {
        fsbl_printf(DEBUG_INFO, "SD large read OK bytes=%lu source=%08lx destination=%08lx", LengthBytes, SourceAddress, DestinationAddress);
    }

	return XST_SUCCESS;

} /* End of SDAccess */


/******************************************************************************/
/**
*
* This function closes the file object
*
* @param	None
*
* @return	None.
*
* @note		None.
*
****************************************************************************/
void ReleaseSD(void) {

	f_close(&fil);
	return;


}
#endif


