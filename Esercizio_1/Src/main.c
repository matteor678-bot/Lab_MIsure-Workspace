

unsigned int* puntatore; //Usare un ountatore che ci permette di scrivere all'interno dei registri
						//hardware del microcontrollore


int main(void) {

	puntatore = (unsigned int *)0x40021014;

	*puntatore =(1<<21); //00200000 //Il bit 21 abilita la porta E(GPIOE)

	puntatore=(unsigned int*)0x48001000; //Registro GPIOE_MODER

	*puntatore=(1<<16);
	/* *puntatore=65536;
	 *puntatore =0x00010000;
	 Modi equivalenti per mettere 01(general purpose output mode) sui bit 17-16(bit di PE8)
	 */

	puntatore=(unsigned int*)0x48001014; //Registro	GPIOE_ODR(Output Data Register)

	*puntatore=(1<<8); //256 Imposto alto il bit 8 cioè PE8

	return 0;


}
