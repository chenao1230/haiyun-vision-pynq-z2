#include "board_uart.h"
#include "xil_io.h"
#include "xuartps_hw.h"
// PYNQ-Z2 PROG UART: UART0 RX on MIO14, TX on MIO15.
// Retain known-good FSBL PLL/divisor and bank electrical settings.
void ship_uart_init(){
    Xil_Out32(0xF8000008U,0xDF0DU);
    Xil_Out32(0xF800012CU,Xil_In32(0xF800012CU)|0x00100000U);
    Xil_Out32(0xF8000154U,Xil_In32(0xF8000154U)|1U);
    Xil_Out32(0xF8000738U,(Xil_In32(0xF8000738U)&~0xffU)|0xe1U);
    Xil_Out32(0xF800073CU,(Xil_In32(0xF800073CU)&~0xffU)|0xe0U);
    Xil_Out32(0xF8000004U,0x767BU);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_IDR_OFFSET,0xffffffffU);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_MODEMCR_OFFSET,0);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_CR_OFFSET,XUARTPS_CR_TX_DIS|XUARTPS_CR_RX_DIS);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_MR_OFFSET,XUARTPS_MR_CHARLEN_8_BIT|XUARTPS_MR_STOPMODE_1_BIT|XUARTPS_MR_PARITY_NONE);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_BAUDGEN_OFFSET,124);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_BAUDDIV_OFFSET,6);
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_CR_OFFSET,XUARTPS_CR_TXRST|XUARTPS_CR_RXRST);
    while(XUartPs_ReadReg(SHIP_UART_BASE,XUARTPS_CR_OFFSET)&3U){}
    XUartPs_WriteReg(SHIP_UART_BASE,XUARTPS_CR_OFFSET,XUARTPS_CR_TX_EN|XUARTPS_CR_RX_EN|XUARTPS_CR_STOPBRK);
}
// BSP archive was built for UART1. Override its console byte sink so legacy
// cout/xil_printf diagnostics also reach the board's USB UART.
extern "C" void outbyte(char c){XUartPs_SendByte(SHIP_UART_BASE,(u8)c);}
