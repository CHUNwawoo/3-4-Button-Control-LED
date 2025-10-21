#include "stm32f10x.h"   // Device header
#include "Delay.h"  // Device:Startup
#include "LED.h"
#include "Key.h"

uint8_t KeyNum; //全域變數


int main(void)
{
	LED_Init();
	Key_Init(); //初始化按鍵
	
	
    while (1)
    {
		KeyNum = Key_GetNum(); //按哪一個按鈕
		if(KeyNum == 1)
		{
			LED1_Turn();
		}
		if(KeyNum == 2)
		{
			LED2_Turn();
		}
		
		
    }
}
