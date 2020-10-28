/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： main
* 作者    ： 万粤黔
* 版本    ： V1.0.0
* 时间    ： 2020-10-05
* 简要    ： main文件 
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include<iocc2530.h> 
#include"led.h"
#include"timer.h"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：DelayMs
* 参数：unsigned
* 返回：void
* 描述：延时函数
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void DelayMs(unsigned int time)
{unsigned int i = 0;
unsigned int j;
for(i = 0; i < time; i++)
{
    for(j = 0; j < 475; j++)
    {   asm("NOP");      //asm是内嵌汇编，NOP是空操作，执行一个指令周期
    asm("NOP");
    asm("NOP");
    } 
} 
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：main
* 参数：void
* 返回：void
* 描述：主函数/入口函数
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void main(void)
{      
    unsigned long ulLed1Timer = 0;//LED1 500ms翻转一次灯色
    unsigned long ulLed2Timer = 0;//LED2 1000ms翻转一次灯色
    unsigned long ulLed3Timer = 0;//LED3 2000ms翻转一次灯色
    LedInit();
    //初始化
    TimerInit();
    
    LedOn(LED_ALL_E);
    DelayMs(5000);
    LedOff(LED_ALL_E);
    TIMERSET(ulLed1Timer, 500);
    TIMERSET(ulLed2Timer, 1000);
    TIMERSET(ulLed3Timer, 2000);
    while(1)
    {
        if(TIMERCHECK(ulLed1Timer))
        {
            LedToggle(LED_LED1_E);
            TIMERSET(ulLed1Timer, 500);
        }
        if(TIMERCHECK(ulLed2Timer))
        {
            LedToggle(LED_LED2_E);
            TIMERSET(ulLed2Timer, 1000);
        }
        if(TIMERCHECK(ulLed3Timer))
        {
            LedToggle(LED_LED3_E);
            TIMERSET(ulLed3Timer, 2000);
        }
    }   
}
