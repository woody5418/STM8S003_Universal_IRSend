/********************************************************************
 *@file        tim1.h
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       tim1  ��ʼ���Լ�ͨ���л�
 *******************************************************************/
#ifndef __TIM1_H
#define __TIM1_H

#include "stm8s.h"

extern u16 TIM_IR_BUFFER[280];  // ��������
extern u8 COMP_FLAG;  // �Ƚ�ʹ�ܱ�־λ
extern u8 BiJiao_DATA_FLAG;
extern u8 t_cnt;
extern u8 Write_Flag;
extern u16 IR_FLAG_REMOVE; //���αȽ���ֵ
extern u16 IR_STA_CNT;  // ��ַ����ֵ
extern u16 IR_FLAG_300; //����ֵ


#define  IR_Send_H   GPIO_WriteHigh(GPIOD, GPIO_PIN_4)
#define  IR_Send_L   GPIO_WriteLow(GPIOD, GPIO_PIN_4)

#define  LED__H  GPIO_WriteHigh(GPIOD, GPIO_PIN_3)
#define  LED__L  GPIO_WriteLow(GPIOD, GPIO_PIN_3)

void TIM1_Init(void);
void TIM2_Init(void);
void Compare(u16 data); // �Ƚ�
void IR_Send(u16* temp);

#endif