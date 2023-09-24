/*
 * main.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Mina Waguih
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"


void delay(void);

int main(){
	MRCC_voidInit();
	MRCC_voidEnablePeripheral(RCC_BUS_APB2 , 2);
	for(u8 i=0; i<8; i++){
		MGPIO_voidSetPinDirection(PORTA, i, GPIOA_OUTPUT_2MHZ,GPIOA_OUTPUT_PUSH_PULL);
	}

	while(1){
		for(u8 i=0; i<8; i++){
			MGPIO_voidSetPinValue(PORTA,i,1);
			delay();
			MGPIO_voidSetPinValue(PORTA,i,0);
		}
		delay();
		for(s8 i=8; i>=0; i--){
			MGPIO_voidSetPinValue(PORTA,i,1);
			delay();
			MGPIO_voidSetPinValue(PORTA,i,0);
		}
		delay();
	}
}

void delay(void)
{
	for ( u32 i= 0;  i<50000;i++ )
	{
		asm("nop");
	}
}

