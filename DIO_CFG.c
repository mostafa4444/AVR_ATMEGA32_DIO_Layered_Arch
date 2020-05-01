/*
* DIO_CFG.c
*
* Created: 5/1/2020 2:47:01 PM
*  Author: user
*/

#include "DIO_CFG.h"


const DIO_PinConfig PinConfig[] = {
	
	// PORTA
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	
	// PORTB
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	
	// PORTC
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	
	// PORTD
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Input , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
	{Output , STD_LOW},
};


void DIO_INIT(){
	uint8 count = 0;
	DIO_PORTS PORTX;
	DIO_Channels Channel_Pos;
	for(count = DIO_Channel_A0 ; count < PinCount ; count++){
		PORTX = count/8;
		Channel_Pos = count%8;
		switch(PORTX){
			case DIO_PORTA:
			if(PinConfig[count].PinDirection == Output){
				Set_Bit(DDRA_Reg , Channel_Pos);
			}else{
				Clear_Bit(DDRA_Reg , Channel_Pos);
			}
			break;
			
			case DIO_PORTB:
			if(PinConfig[count].PinDirection == Output){
				Set_Bit(DDRB_Reg , Channel_Pos);
			}else{
				Clear_Bit(DDRB_Reg , Channel_Pos);
			}
			break;
			
			case DIO_PORTC:
			if(PinConfig[count].PinDirection == Output){
				Set_Bit(DDRC_Reg , Channel_Pos);
			}else{
				Clear_Bit(DDRC_Reg , Channel_Pos);
			}
			break;
			
			case DIO_PORTD:
			if(PinConfig[count].PinDirection == Output){
				Set_Bit(DDRD_Reg , Channel_Pos);
			}else{
				Clear_Bit(DDRD_Reg , Channel_Pos);
			}
			break;
		}
	}
}