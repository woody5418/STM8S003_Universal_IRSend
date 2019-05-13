#ifndef __UART_H
#define __UART_H


#include <stdio.h>


#include "stm8s.h"




#define countof(a)   (sizeof(a) / sizeof(*(a)))
#define RxBufferSize 64

void Uart1_Init(void);

void UART1_SendByte(u8 data);
void UART1_SendString(u8* Data,u16 len);
u8 UART1_ReceiveByte(void);
int fputc(int ch, FILE *f);
static char *itoa(int value, char *string, int radix);
void UART1_printf( uint8_t *Data,...);


#endif