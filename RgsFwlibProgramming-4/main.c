#include "stm32f10x.h"
#include "stm32f10x_gpio.h"


int main(void)
{	
	  RCC->RCC_APB2ENR |=(1<<3);  //�˿�ʱ������
		
		GPIOB->CRL |= (1<<0);   //����ģʽ����
		
		//GPIOB->ODR &=~ (1<<0);	 
	  GPIO_ResetBits(GPIOB,GPIO_Pin_0);  //д�봫������
	//	GPIO_SetBits(GPIOB,GPIO_Pin_0);
	  while(1);
}

void SystemInit(void)
{
	//��ʼ��ʼ�գ�Ϊ���ñ������������˴�����Ϊ��

}
