/********************************************************************
 *@file        tim2.h
 *@author      Woody      QQ：2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       tim2的初始化
 *******************************************************************/
#ifndef __TIM2_H
#define __TIM2_H
#include "stm8s.h"



extern u16 count;
extern volatile u16 num;   //数组值
extern u8 send_flag;
extern volatile u8 flag_senf;

void TIM2_Init(void);

#endif