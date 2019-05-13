/********************************************************************
 *@file        tim2.c
 *@author      Woody      QQ：2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       tim1 初始化，PWM设置
 *******************************************************************/
#include "tim2.h"
#include "uart.h"
#include "delay.h"
#include "tim1.h"

u8 send_flag=0;
volatile u8 flag_senf=0;
u16 count=0;

/*******************************************************************************
 * 函数名：TIM2_Init
 * 描述  ：配置TIM2_Init的初始化
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void TIM2_Init(void)
{
  TIM2->PSCR = 0x04; //系统时钟经预分频f=16M/16=1Mhz,04=4, 2^4=16;  1us
  TIM2->ARRH = 0x00; // 1/1Mhz * 13=13us
  TIM2->ARRL = 0x0D; //0X000D=13 
  TIM2->IER |= 0x01; //运行更新中断
  //TIM2->CR1 |= 0x01; //使能计数器
  TIM2_Cmd(DISABLE);
}
/*******************************************************************************
 * 函数名：TIM2_UPD_OVF_BRK_IRQHandler
 * 描述  ：TIM2中断，生成38Khz
 * 输入  ：无
 * 输出  ：无
 * 调用  ：无
 * 说明  ：50us * 800 =40ms
 ******************************************************************************/
#pragma vector=0xF       //13+2
__interrupt void TIM2_UPD_OVF_BRK_IRQHandler(void)//溢出中断，中文开发指南75页
{
  TIM2->SR1 = 0; //清除中断标记
  count++;
  if(count >= num) 
  {
     TIM2_Cmd(DISABLE);  
     flag_senf=count=0;
   }
  if(send_flag == 0)  
  {
     send_flag=1;
     IR_Send_H;
     LED__H;
  }else 
  {
     send_flag = 0;
     IR_Send_L;
     LED__L;
  } 
}




