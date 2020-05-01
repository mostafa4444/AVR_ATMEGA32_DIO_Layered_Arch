/*
 * main.h
 *
 * Created: 4/27/2020 11:49:27 AM
 *  Author: user
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#include "STD_Types.h"

/*#ifndef Way1

#define DDRC_Reg (*((volatile uint8*) 0x34))
#define PORTC_Reg (*((volatile uint8*) 0x35))
#define DDRB_Reg (*((volatile uint8*) 0x37))
#define PORTB_Reg (*((volatile uint8*) 0x38))
#define PINB_Reg (*((volatile uint8*) 0x36

#else */

typedef struct{
	uint8 Bit0 :1;
	uint8 Bit1 :1;
	uint8 Bit2 :1;
	uint8 Bit3 :1;
	uint8 Bit4 :1;
	uint8 Bit5 :1;
	uint8 Bit6 :1;
	uint8 Bit7 :1;

	}Bits;
	
	
typedef union{
	uint8 All_Registers;
	Bits Register_Bits;
	}Register;

volatile Register * DDRC_Reg = ( Register*)0x34;
volatile Register * PORTC_Reg = ( Register*)0x35;
volatile Register * PINB_Reg = ( Register*)0x36;   // Using volatile because we need to no change PINB Reg but if we use volatile  before register the value will be static and never change 
volatile Register * DDRB_Reg = ( Register*)0x37;
volatile Register * PORTB_Reg =( Register*) 0x38;
volatile Register * PORTA_Reg =( Register*) 0x3B;
volatile Register * PINA_Reg = ( Register*)0x39;
volatile Register * DDRA_Reg = ( Register*)0x3A;


#endif /* MAIN_H_ */