/*
 * DIO_TYPES.h
 *
 * Created: 5/1/2020 1:37:06 PM
 *  Author: user
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef enum{
	DIO_Channel_A0 = 0,
	DIO_Channel_A1,
	DIO_Channel_A2,
	DIO_Channel_A3,
	DIO_Channel_A4,
	DIO_Channel_A5,
	DIO_Channel_A6,
	DIO_Channel_A7,
	
	DIO_Channel_B0,
	DIO_Channel_B1,
	DIO_Channel_B2,
	DIO_Channel_B3,
	DIO_Channel_B4,
	DIO_Channel_B5,
	DIO_Channel_B6,
	DIO_Channel_B7,

	DIO_Channel_C0,
	DIO_Channel_C1,
	DIO_Channel_C2,
	DIO_Channel_C3,
	DIO_Channel_C4,
	DIO_Channel_C5,
	DIO_Channel_C6,
	DIO_Channel_C7,
	
	DIO_Channel_D0,
	DIO_Channel_D1,
	DIO_Channel_D2,
	DIO_Channel_D3,
	DIO_Channel_D4,
	DIO_Channel_D5,
	DIO_Channel_D6,
	DIO_Channel_D7
	}DIO_Channels;
	
	
	typedef enum{
		DIO_PORTA = 0,
		DIO_PORTB,
		DIO_PORTC,
		DIO_PORTD
		}DIO_PORTS;
		
		
	typedef enum{
		Input = 0,
		Output
		}DIO_DIR;



#endif /* DIO_TYPES_H_ */