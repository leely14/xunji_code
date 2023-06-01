/****************************************************/
// MSP432P401R
// 定时器A
// Bilibili：m-RNA
// E-mail:m-RNA@qq.com
// 创建日期:2021/8/26
/****************************************************/

#ifndef __RNA_PWM_H
#define __RNA_PWM_H
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
void Pwm_Init(void);
void Pwm_Out(void);
int CalcuErrorLeft(void);
int CalcuErrorRight(void);
#endif
