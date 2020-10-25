/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* �ļ���  �� led
* ����    �� ����ǭ
* �汾    �� V1.0.0
* ʱ��    �� 2020/10/17
* ��Ҫ    �� led�������ļ�  
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include "led.h"
#define LED1 P1_0     // P1_0����ΪP1.0
#define LED2 P1_1     // P1_1����ΪP1.1
#define LED3 P1_4     // P1_4����ΪP1.4
unsigned int LED_ON=0;
unsigned int LED_OFF=0;
/* ���� ------------------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedInt
* ������void
* ���أ�void
* ������led�ĳ�ʼ��
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedInt(void)
{
  
  P1SEL &= 0xEC;
  P1DIR |= 0x13 ;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������LedOn
* ������unsigned char ucLedNum
* ���أ�void
* ����������
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
* ��������LedOff
* ������unsigned char ucLedNum
* ���أ�void
* �������ص�
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
* ��������LedToggle
* ������unsigned char ucLedNum
* ���أ�void
* ��������ɫ��ת
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
