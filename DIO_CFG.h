/*
 * DIO_CFG.h
 *
 * Created: 5/1/2020 2:47:39 PM
 *  Author: user
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "STD_Types.h"
#include "DIO_TYPES.h"
#include "DIO_HW.h"
#include "Bit_Math.h"

typedef struct{
	DIO_DIR PinDirection;
	Level_Types PinLevel;
	
}DIO_PinConfig;

#define PinCount 32

void DIO_INIT(void);

#endif /* DIO_CFG_H_ */