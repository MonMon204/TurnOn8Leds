/***********************************************/
/* Author  : Mina Waguih Mounir                */
/* Date    : 22/9/2023                         */
/* Version : V_01                              */
/***********************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H


/* Options: RCC_HSI
			RCC_HSE_CRYSTAL
			RCC_HSE_RC
			RCC_PLL
 	 	 	 	 	 	 	 	 */

#define CLOCK_TYPE           RCC_HSI

/* Options: AHB_PRESCALER_NOT_DIV
 * 			AHB_PRESCALER_2
 * 			AHB_PRESCALER_4
 * 			AHB_PRESCALER_8
 * 			AHB_PRESCALER_16
 * 			AHB_PRESCALER_64
 * 			AHB_PRESCALER_128
 * 			AHB_PRESCALER_256
 * 			AHB_PRESCALER_512
 */
#define AHB_PRESCALE         AHB_PRESCALER_8
/* Options: APB2_PRESCALER_NOT_DIV
 * 			APB2_PRESCALER_2
 * 			APB2_PRESCALER_4
 * 			APB2_PRESCALER_8
 * 			APB2_PRESCALER_16
 */
#define APB2_PRESCALE        APB2_PRESCALER_NOT_DIV
/* Options: APB1_PRESCALER_NOT_DIV
 * 			APB1_PRESCALER_2
 * 			APB1_PRESCALER_4
 * 			APB1_PRESCALER_8
 * 			APB1_PRESCALER_16
 */
#define APB1_PRESCALE        APB1_PRESCALER_NOT_DIV



#endif
