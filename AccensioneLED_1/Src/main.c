unsigned int *puntatore; //Puntatore che ci permette di scrivere all'interno dei registri HARDWARE del microcontrollore

void main(void) {

	puntatore=(unsigned int*)0x40021014; //REGISTRO RCC_AHBENR

	*puntatore=(1<<21); //Il bit 21 abilita la porta E(GPIOE)

	puntatore=(unsigned int*)0x48001000; //REGISTRO GPIOE_MODER

	*puntatore=(1<<18); //IMPOSTO IL LED COLLEGATO ALLA PORTA PE9 IN MODALITA OUTPUT

	puntatore=(unsigned int*)0x48001014; //REGISTRO GPIOE_ODR(OUTPUT DATA REGISTER)

	*puntatore=(1<<9); //METTO A LIVELLO ALTO IL BIT 9(collegato al PIN 9)

}
