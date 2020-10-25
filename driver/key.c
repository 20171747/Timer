/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： key
* 作者    ： 万粤黔
* 版本    ： V1.0.0
* 时间    ： 2020/10/25
* 简要    ： key  
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include "key.h"
#define KEY1 P0_1
#define KEY2 P2_0


/* 函数 ------------------------------------------------------------------*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：KeyInit
* 参数：void
* 返回：void
* 描述：按键初始化
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
* 函数名：KeyStateGet
* 参数：unsigned char ucKeyNum
* 返回：unsigned char
* 描述：按键的状态获取
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
