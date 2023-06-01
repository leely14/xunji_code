/**************************************
//MSP432P401R
//10 OLED显示（模拟IIC/硬件IIC)
//Bilibili：m-RNA
//E-mail:m-RNA@qq.com
//创建日期:2021/9/12
***************************************/

/*********  声明  **********
 *
 * 0.96寸OLED
 * UP将中景园的MSP430驱动
 * 移植到了MSP432上来了
 * 并稍微修改了一下测试代码
 *
 * 支持 模拟IIC/硬件IIC
 *
 * 引脚接法:
 * P1.7 SCL
 * P1.6 SDA
 * 可以去头文件更改引脚
****************************/

#include "sysinit.h"
#include "delay.h"
#include "oled.h"
#include "bmp.h"
#include "pwm.h"
Timer_A_PWMConfig pwmConfig0 =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        500,    //CCR0初始周期为2ms
        TIMER_A_CAPTURECOMPARE_REGISTER_1,
        TIMER_A_OUTPUTMODE_RESET_SET,
        400       //初始占空比为0
};
Timer_A_PWMConfig pwmConfig1 =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        500,
        TIMER_A_CAPTURECOMPARE_REGISTER_1,
        TIMER_A_OUTPUTMODE_RESET_SET,
        400
};
int main(void)
{
    //char t;
		MAP_WDT_A_holdTimer();
    SysInit();    // 第3讲  时钟配置
    delay_init(); // 第4讲  滴答延时
    OLED_Init();  // 第10讲 OLED显示
		// //八路灰度输入
		// GPIO_setAsInputPin(GPIO_PORT_P7,GPIO_PIN6);
    // GPIO_setAsInputPin(GPIO_PORT_P7,GPIO_PIN7);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN0);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN1);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN2);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN3);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN4);
    // GPIO_setAsInputPin(GPIO_PORT_P10,GPIO_PIN5);
		// //控制方向输出
    // MAP_PCM_setPowerState(PCM_AM_LF_VCORE0);
    // MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN4, GPIO_PRIMARY_MODULE_FUNCTION);
    // MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P5, GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);
    Pwm_Init();
		//PWM
		while(1){
      // pwmConfig0.dutyCycle=50;
      // pwmConfig1.dutyCycle=50;
      // Timer_A_setCompareValue(TIMER_A0_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_1,16);
      // MAP_Timer_A_generatePWM(TIMER_A0_BASE, &pwmConfig0);
      // Timer_A_setCompareValue(TIMER_A2_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_1,16);
      // MAP_Timer_A_generatePWM(TIMER_A2_BASE, &pwmConfig1);
			// OLED_Clear(); //清屏
			// delay_ms(50);
			// uint8_t H[8];
			// H[0]=GPIO_getInputPinValue(GPIO_PORT_P7,GPIO_PIN6);
			// H[1]=GPIO_getInputPinValue(GPIO_PORT_P7, GPIO_PIN7);
			// H[2]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN0);
			// H[3]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN1);
			// H[4]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN2);
			// H[5]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN3);
			// H[6]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN4);
			// H[7]=GPIO_getInputPinValue(GPIO_PORT_P10, GPIO_PIN5);
			// for(int i=0;i<8;i++){
			// 	OLED_ShowNum(12*i, 3, H[i], 2, 8); 
			// }
      Pwm_Out();
			//delay_ms(800);
      

			//OLED_Clear(); //清屏
		}
		while(1){



        //显示图片
        //OLED_DrawBMP(0, 0, 128, 64, BMP1);
        // delay_ms(300);
        // OLED_Clear(); //清屏

        //显示汉字
        //OLED_ShowChinese(0, 0, 0, 16);   //中
        //OLED_ShowChinese(18, 0, 1, 16);  //景
        //OLED_ShowChinese(36, 0, 2, 16);  //园
        // OLED_ShowChinese(54, 0, 3, 16);  //电
        // OLED_ShowChinese(72, 0, 4, 16);  //子
        // OLED_ShowChinese(90, 0, 5, 16);  //科
        // OLED_ShowChinese(108, 0, 6, 16); //技

        // //显示字符串
        // OLED_ShowString(8, 2, (uint8_t *)"ZHONGJINGYUAN", 16);
        // OLED_ShowString(20, 4, (uint8_t *)"2014/05/01", 16);
        // OLED_ShowString(0, 6, (uint8_t *)"ASCII:", 16);
        // OLED_ShowString(63, 6, (uint8_t *)"CODE:", 16);

        //显示字符，数字
		// for (t = ' '; t < '~'; t++)
		// {
		// 	OLED_ShowChar(48, 6, t, 16);	//显示ASCII字符
		// 	OLED_ShowNum(103, 6, t, 3, 16); //显示ASCII字符的码值
		// }
		
        // delay_ms(300);
        // OLED_Clear(); //清屏
			}
    
}
