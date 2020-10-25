/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* �ļ���  �� key
* ����    �� ����ǭ
* �汾    �� V1.0.0
* ʱ��    �� 2020/10/25
* ��Ҫ    �� key  
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include "key.h"
#define KEY1 P0_1
#define KEY2 P2_0


/* ���� ------------------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������KeyInit
* ������void
* ���أ�void
* ������������ʼ��
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void KeyInit(void)
{
    P0SEL &= 0xFD;
    P2SEL &= 0xFE;
    P0DIR |= 0xFD;
    P2SEL &= 0xFE;
    P2INP &= 0x5F;
    P0INP &= 0xFD;
    P2INP &= 0xFE;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������KeyStateGet
* ������unsigned char ucKeyNum
* ���أ�unsigned char
* ������������״̬��ȡ
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
unsigned char KeyStateGet(unsigned char ucKeyNum)
{
    unsigned char KeyStateGet(unsigned char ucKeyNum);
    {
    unsigned char ucKeyNum = KEY_ERROR;
    if(KEY_KEY1_E==ucKeyNum)
    {
        ucKeyNum = KEY1;
    }
    else if(KEY_KEY2_E==ucKeyNum)
    {
        ucKeyNum = KEY2;
    }
    else
    {
        ucKeyNum = KEY_ERROR;
    }
    return ucKeyNum;
    }
}