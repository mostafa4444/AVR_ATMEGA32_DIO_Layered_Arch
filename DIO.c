/*
* DIO.c
*
* Created: 5/1/2020 1:52:50 PM
*  Author: user
*/

#include "DIO.h"


void DIO_WriteChannel(DIO_Channels Channel_Id , Level_Types level){
	DIO_PORTS PORTX = Channel_Id/8;
	DIO_Channels Channel_Pos = Channel_Id%8;
	
	switch(PORTX){
		case DIO_PORTA:
		if (level == STD_High){
			Set_Bit(PORTA_Reg , Channel_Pos);
			}else{
			Clear_Bit(PORTA_Reg , Channel_Pos);
		}
		break;
		case DIO_PORTB:
		if (level == STD_High){
			Set_Bit(PORTB_Reg , Channel_Pos);
			}else{
			Clear_Bit(PORTB_Reg , Channel_Pos);
		}
		break;
		case DIO_PORTC:
		if (level == STD_High){
			Set_Bit(PORTC_Reg , Channel_Pos);
			}else{
			Clear_Bit(PORTC_Reg , Channel_Pos);
		}
		break;
		case DIO_PORTD:
		if (level == STD_High){
			Set_Bit(PORTD_Reg , Channel_Pos);
			}else{
			Clear_Bit(PORTD_Reg , Channel_Pos);
		}
		break;
		
	}
}

uint8 DIO_ReadChannel(DIO_Channels Channel_Id){
	DIO_PORTS PORTX = Channel_Id/8;
	DIO_Channels Channel_Pos = Channel_Id%8;
	Level_Types level = STD_LOW;
	switch(PORTX){
		case DIO_PORTA:
		level = Get_Bit(PINA_Reg , Channel_Pos);
		break;
		
		case DIO_PORTB:
		level = Get_Bit(PINB_Reg , Channel_Pos);
		break;
		
		case DIO_PORTC:
		level = Get_Bit(PINC_Reg , Channel_Pos);
		break;
		
		case DIO_PORTD:
		level = Get_Bit(PIND_Reg , Channel_Pos);
		break;
	}
	
	return level;
}
