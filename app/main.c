/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* �ļ���  �� main
* ����    �� ����ǭ
* �汾    �� V1.0.0
* ʱ��    �� 2020-10-05
* ��Ҫ    �� main�ļ� 
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include<iocc2530.h> 
#include"led.h"
#include"timer.h"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������DelayMs
* ������unsigned
* ���أ�void
* ��������ʱ����
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void DelayMs(unsigned int time)
{unsigned int i = 0;
unsigned int j;
for(i = 0; i < time; i++)
{
    for(j = 0; j < 475; j++)
    {   asm("NOP");      //asm����Ƕ��࣬NOP�ǿղ�����ִ��һ��ָ������
    asm("NOP");
    asm("NOP");
    } 
} 
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������main
* ������void
* ���أ�void
* ������������/��ں���
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void main(void)
{      
    unsigned long ulLed1Timer = 0;//LED1 500ms��תһ�ε�ɫ
    unsigned long ulLed2Timer = 0;//LED2 1000ms��תһ�ε�ɫ
    unsigned long ulLed3Timer = 0;//LED3 2000ms��תһ�ε�ɫ
    LedInit();
    //��ʼ��
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
