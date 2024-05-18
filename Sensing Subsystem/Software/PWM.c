#include "stm32f0xx.h"

void GPIO_init(void);
void TimerConfig(void);
void Delay_ms(uint32_t delayTime_ms);
void Delay_us(uint32_t delayTime_us);

int count;
int counter;

int main(){
	GPIO_init();
	TimerConfig();
	while(1){
//PWM for PE15
		GPIOB->ODR ^= GPIO_ODR_15;
		Delay_ms(500);
	}
}

void GPIO_init(void){
	RCC->AHBENR |= RCC_AHBENR_GPIOEEN;
	GPIOB->MODER |= GPIO_MODER_MODER0_0;
}

void TimerConfig(void){
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;

	TIM2->PSC = 8-1;
	TIM2->ARR = 0xFFFF-1;

	TIM2->CR1 |= TIM_CR1_CEN;

	while(!(TIM2->SR & TIM_SR_UIF)); //wait for the timer flag to update
}
void Delay_us(uint32_t delayTime_us){
	TIM2->CNT = 0;
	while(TIM2->CNT <delayTime_us);
	count++;
}
void Delay_ms(uint32_t delayTime_ms){
	for(int i = 0;i<delayTime_ms;i++){
		Delay_us(1000);
	}
	counter++;
}
