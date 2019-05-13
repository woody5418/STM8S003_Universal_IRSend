/********************************************************************
 *@file        flash_eeprom.h
 *@author      Woody      QQ：2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       EEPROM初始化以及读取/写入数据
 *******************************************************************/
#ifndef __FLASH_EEPROM_H
#define __FLASH_EEPROM_H

#include "stm8s.h"


extern u16 value_eeprom;


void Init_EEPROM(void);  // 初始化
void U16_TO_U8(u16* data,u16 number);
void U8_TO_U16(u16* data,u16 number);
void WriteEEPROM(u16* data,u16 number);
void ReadEEPROM(u16* data,u16 number);



#endif


