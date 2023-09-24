/***********************************************/
/* Author  : Mina Waguih Mounir                */
/* Date    : 22/9/2023                         */
/* Version : V_01                              */

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/* Options for Bus Id */
#define RCC_BUS_AHB		0
#define RCC_BUS_APB2	1
#define RCC_BUS_APB1	2


void MRCC_voidInit();
void MRCC_voidEnablePeripheral(u8 Copy_u8BusId, u8 Copy_u8PerId);
void MRCC_voidDisablePeripheral(u8 Copy_u8BusId, u8 Copy_u8PerId);



#endif
