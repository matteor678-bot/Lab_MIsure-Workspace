#include "stm32f303xc.h"

void main(void) {
	//Abilittazione CLOCK per GPIOE(bit 21 in RCC_AHBENR)
	RCC->AHBENR |= (1<<21);

	//Imposto PE11 in MODALITA OUTPUT
	GPIOE->MODER |= (1<<22); //MODER DEL PIN11

	while(1) {
		//Accende il LED (PE11 alto)
		GPIOE->ODR |= (1<<11);

		for(int i=0; i<200000; i++); //RITARDO ON

		//Spegne il LED (PE11 basso)
		GPIOE->ODR &= ~(1<<11);

		for(int i=0; i<200000; i++); //RITARDO OFF

	}

}
