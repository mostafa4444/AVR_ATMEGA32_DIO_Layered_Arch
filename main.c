/*
* DIO_Layered_Arch.c
*
* Created: 5/1/2020 1:14:20 PM
* Author : Mostafa Ezzat
*/
#define F_CPU 16000000UL
#include <util/delay.h>
#include "DIO_CFG.h"
#include "DIO.h"

int main(void)
{
	DIO_INIT();
	
	while (1)
	{
		if (DIO_ReadChannel(DIO_Channel_D2) == STD_High)
		{
			_delay_ms(20);
			if(DIO_ReadChannel(DIO_Channel_C2) == STD_High)
				DIO_WriteChannel(DIO_Channel_C2,STD_LOW);
			else
				DIO_WriteChannel(DIO_Channel_C2,STD_High);
			
			_delay_ms(500);
		}
	}
}
