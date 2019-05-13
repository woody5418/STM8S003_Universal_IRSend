/********************************************************************
 *@file        key.h
 *@author      Woody      QQ：2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       KEY 初始化以及扫描函数，前一级检测函数
 *******************************************************************/
#ifndef __KEY_H
#define __KEY_H

#include "stm8s.h"

#define KEY_1               GPIO_PIN_1
#define KEY_PORT_1          GPIOA      //按键  PD2

#define KEY_2               GPIO_PIN_7
#define KEY_PORT_2          GPIOC      //按键  PD2


extern u8 KEY_STUDY;  //学习模式
extern u8 KEY_BUTTOM;
extern u8 key_led_flag;
extern u16 Bijiao_buffer[280];

void KEY_Init(void);
void KEY_Scan(void);
void Key_Exti_Init(void);
void Study_IR(void);
void key_study(void);
void key_in(void);

#endif