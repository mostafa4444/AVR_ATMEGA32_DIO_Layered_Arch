/*
 * DIO.h
 *
 * Created: 5/1/2020 1:52:29 PM
 *  Author: user
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "STD_Types.h"
#include "DIO_TYPES.h"
#include "DIO_HW.h"
#include "Bit_Math.h"

void DIO_WriteChannel(DIO_Channels Channel_Id , Level_Types level);

uint8 DIO_ReadChannel(DIO_Channels Channel_Id);




#endif /* DIO_H_ */