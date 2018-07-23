#include "stm32f10x.h"
#include "stm32f10x_gpio.h"


int main(void)
{	
	  RCC->RCC_APB2ENR |=(1<<3);  //端口时钟配置
		
		GPIOB->CRL |= (1<<0);   //传输模式配置
		
		//GPIOB->ODR &=~ (1<<0);	 
	  GPIO_ResetBits(GPIOB,GPIO_Pin_0);  //写入传输数据
	//	GPIO_SetBits(GPIOB,GPIO_Pin_0);
	  while(1);
}

void SystemInit(void)
{
	//初始化始终，为了让编译器不报错，此处设置为空

}
