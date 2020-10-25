/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： led
* 作者    ： 万粤黔
* 版本    ： V1.0.0
* 时间    ： 2020/10/17
* 简要    ： led的驱动文件  
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include "led.h"
#define LED1 P1_0     // P1_0定义为P1.0
#define LED2 P1_1     // P1_1定义为P1.1
#define LED3 P1_4     // P1_4定义为P1.4
unsigned int LED_ON=0;
unsigned int LED_OFF=0;
/* 函数 ------------------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedInt
* 参数：void
* 返回：void
* 描述：led的初始化
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedInt(void)
{
  
  P1SEL &= 0xEC;
  P1DIR |= 0x13 ;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedOn
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：开灯
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedOn(unsigned char ucLedNum)
{
  switch(ucLedNum)
  {
  case LED_ALL_E:
    LED1=LED_ON;
    LED2=LED_ON;
    LED3=LED_ON;
    break;
  case LED_LED1_E:
    LED1=LED_ON;
    break;
  case LED_LED2_E:
    LED2=LED_ON;
    break;
  case LED_LED3_E:
    LED3=LED_ON;
    break;
  default:
    break;
  }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedOff
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：关灯
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedOff(unsigned char ucLedNum)
{
  switch(ucLedNum)
  {
  case LED_ALL_E:
    LED1=LED_OFF;
    LED2=LED_OFF;
    LED3=LED_OFF;
    break;
  case LED_LED1_E:
    LED1=LED_OFF;
    break;
  case LED_LED2_E:
    LED2=LED_OFF;
    break;
  case LED_LED3_E:
    LED3=LED_OFF;
    break;
  default:
    break;
  }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedToggle
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：灯色翻转
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedToggle(unsigned char ucLedNum)
{
  switch(ucLedNum)
  {
  case LED_ALL_E:
    LED1=!LED1;
    LED2=!LED2;
    LED3=!LED3;
    break;
  case LED_LED1_E:
    LED1=!LED1;
    break;
  case LED_LED2_E:
    LED2=!LED2;
    break;
  case LED_LED3_E:
    LED3=!LED3;
    break;
  default:
    break;
  }
}
