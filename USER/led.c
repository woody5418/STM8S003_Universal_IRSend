/********************************************************************
 *@file        led.c
 *@author      Woody      QQ：2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       LED 初始化以及LED_Show函数
 *******************************************************************/
#include "led.h"
#include "delay.h"

/*******************************************************************************
 * 函数名：LED_Init
 * 描述  ：配置LED_Init的初始化函数
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void LED_Init(void)
{       
    //定义LED的管脚为输出模式 
    GPIO_Init(GPIOD, GPIO_PIN_3,   GPIO_MODE_OUT_PP_HIGH_FAST );  // LED 灯-模块
    GPIO_Init(GPIOD, GPIO_PIN_4, GPIO_MODE_OUT_PP_HIGH_FAST ); //IR -模块 发射
    GPIO_Init(GPIOA, GPIO_PIN_3, GPIO_MODE_OUT_PP_HIGH_FAST ); //LED -开发板
    
    GPIO_WriteLow(LED_PORT, LED_1);
    GPIO_WriteLow(GPIOD, GPIO_PIN_4);
    GPIO_WriteLow(GPIOA, GPIO_PIN_3);
}
/*******************************************************************************
 * 函数名：LED_Config
 * 描述  ：配置LED初始化函数
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void LED_Config(GPIO_Pin_TypeDef led, u8 state)
{
    if(ON == state) 
    {
        GPIO_WriteLow(GPIOD, led);
    }
    else
    {
        GPIO_WriteHigh(GPIOD, led);
    }
}
/*******************************************************************************
 * 函数名：LED_REVERSE
 * 描述  ：配置学习效果函数
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void LED_REVERSE(void)
{
    LED_Config(LED_1, OFF);// 亮
    GPIO_WriteHigh(GPIOA, GPIO_PIN_3);
    delay_ms(100);
    LED_Config(LED_1, ON);//  灭
    GPIO_WriteLow(GPIOA, GPIO_PIN_3);
    delay_ms(100);
}
/*******************************************************************************
 * 函数名：YES_STUDY
 * 描述  ：配置学习效果函数
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void YES_STUDY(void)
{
    LED_Config(LED_1, ON);//  灭
    
    GPIO_WriteLow(GPIOA, GPIO_PIN_3);
    delay_ms(300);
    
    LED_Config(LED_1, OFF);// 亮
    
    GPIO_WriteHigh(GPIOA, GPIO_PIN_3);
    delay_ms(300);
    
    LED_Config(LED_1, ON);//  灭
    
    GPIO_WriteLow(GPIOA, GPIO_PIN_3);
    delay_ms(300);
}
/*******************************************************************************
 * 函数名：LED_Show
 * 描述  ：配置LED_Show初始化函数
 * 输入  ：无
 * 输出  ：无
 * 调用  ：外部调用
 ******************************************************************************/
void LED_Show(void)
{
    LED_Config(LED_1, OFF);// 亮
    delay_ms(40);
    LED_Config(LED_1, ON);//  灭
    delay_ms(40);
    
    LED_Config(LED_1, OFF);// 亮
    delay_ms(40);
    LED_Config(LED_1, ON);//  灭
    delay_ms(40);
    
    LED_Config(LED_1, OFF);// 亮
    delay_ms(40);
    LED_Config(LED_1, ON);//  灭
    delay_ms(40);
    
    LED_Config(LED_1, OFF);// 亮
    delay_ms(40);
    LED_Config(LED_1, ON);//  灭
    delay_ms(40);
    
    LED_Config(LED_1, OFF);// 亮
    delay_ms(40);
    LED_Config(LED_1, ON);//  灭
    delay_ms(40);
}















