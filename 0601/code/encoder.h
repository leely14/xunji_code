#ifndef __ENCODER_H
#define __ENCODER_H


#include "sysinit.h"
	 
void Encoder_Init_TIM2(uint16_t psc,uint16_t arr);
int Read_Encoder();


#endif
