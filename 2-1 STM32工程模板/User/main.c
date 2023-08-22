#include "stm32f10x.h"                  // Device header

int main(void){
//	RCC->APB2ENR = 0x00000010;
//	GPIOC->CRH = 0x00300000;
//	GPIOC->ODR = 0x00002000;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	
	GPIO_Init(GPIOC,//配置端口模式
	while(1){
		
		
	}
}