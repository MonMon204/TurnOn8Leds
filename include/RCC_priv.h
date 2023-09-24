/***********************************************/
/* Author  : Mina Waguih Mounir                */
/* Date    : 22/9/2023                         */
/* Version : V_01                              */
/***********************************************/

#ifndef RCC_PRIV_H
#define RCC_PRIV_H

/* Registers */
#define RCC_BASE_ADDRESS           0x40021000

#define RCC_CR                     *((volatile u32*) (RCC_BASE_ADDRESS + 0x00))
#define RCC_CFGR                   *((volatile u32*) (RCC_BASE_ADDRESS + 0x04))
#define RCC_CIR                    *((volatile u32*) (RCC_BASE_ADDRESS + 0x08))
#define RCC_APB2RSTR               *((volatile u32*) (RCC_BASE_ADDRESS + 0x0C))
#define RCC_APB1RSTR               *((volatile u32*) (RCC_BASE_ADDRESS + 0x10))
#define RCC_AHBENR                 *((volatile u32*) (RCC_BASE_ADDRESS + 0x14))
#define RCC_APB2ENR                *((volatile u32*) (RCC_BASE_ADDRESS + 0x18))
#define RCC_APB1ENR                *((volatile u32*) (RCC_BASE_ADDRESS + 0x1C))
#define RCC_BDCR                   *((volatile u32*) (RCC_BASE_ADDRESS + 0x20))
#define RCC_CSR                    *((volatile u32*) (RCC_BASE_ADDRESS + 0x24))


/* Options for Clock type */
#define RCC_HSI                    0
#define RCC_HSE_CRYSTAL            1
#define RCC_HSE_RC                 2
#define RCC_PLL                    3


/* Options for PLL Input */
#define PLL_INPUT_HSI_DIV_2        0
#define PLL_INPUT_HSE_DIV_2        1
#define PLL_INPUT_HSE              2


/* Options for AHB Prescale */
#define AHB_PRESCALER_NOT_DIV      0b0000
#define AHB_PRESCALER_2            0b1000
#define AHB_PRESCALER_4            0b1001
#define AHB_PRESCALER_8            0b1010
#define AHB_PRESCALER_16     	   0b1011
#define AHB_PRESCALER_64     	   0b1100
#define AHB_PRESCALER_128          0b1101
#define AHB_PRESCALER_256          0b1110
#define AHB_PRESCALER_512          0b1111

/* Options for APB2 Prescale */
#define APB2_PRESCALER_NOT_DIV     0b000
#define APB2_PRESCALER_2      	   0b100
#define APB2_PRESCALER_4      	   0b101
#define APB2_PRESCALER_8           0b110
#define APB2_PRESCALER_16          0b111

/* Options for APB1 Prescale */
#define APB1_PRESCALER_NOT_DIV     0b000
#define APB1_PRESCALER_2           0b100
#define APB1_PRESCALER_4           0b101
#define APB1_PRESCALER_8           0b110
#define APB1_PRESCALER_16          0b111



#endif
