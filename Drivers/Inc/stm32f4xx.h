/*
 * stm32f4xx.h
 *
 *  Created on: Mar 16, 2026
 *      Author: BSN
 */

#ifndef STM32F4XX_H_
#define STM32F4XX_H_

#define __vo			volatile


/*USART Register Definitions*/
typedef struct
{
	__vo uint32_t USART_SR;
	__vo uint32_t USART_DR;
	__vo uint32_t USART_BRR;
	__vo uint32_t USART_CR1;
	__vo uint32_t USART_CR2;
	__vo uint32_t USART_CR3;
	__vo uint32_t USART_GTPR;
}USART_RegDef_t;

/*------------------------- RCC Register Definitions ----------------------------------*/
typedef struct
{
	__vo uint32_t CR;
	__vo uint32_t PLLCFGR;
	__vo uint32_t CFGR;
	__vo uint32_t CIR;
	__vo uint32_t AHB1RSTR;
	__vo uint32_t AHB2RSTR;
	__vo uint32_t AHB3RSTR;
	__vo uint32_t RESERVED0;
	__vo uint32_t APB1RSTR;
	__vo uint32_t APB2RSTR;
	__vo uint32_t RESERVED1;
	__vo uint32_t RESERVED2;
	__vo uint32_t AHB1ENR;
	__vo uint32_t AHB2ENR;
	__vo uint32_t AHB3ENR;
	__vo uint32_t RESERVED3;
	__vo uint32_t APB1ENR;
	__vo uint32_t APB2ENR;
	__vo uint32_t RESERVED4;
	__vo uint32_t RESERVED5;
	__vo uint32_t AHB1LPENR;
	__vo uint32_t AHB2LPENR;
	__vo uint32_t AHB3LPENR;
	__vo uint32_t RESERVED6;
	__vo uint32_t APB1LPENR;
	__vo uint32_t APB2LPENR;
	__vo uint32_t RESERVED7;
	__vo uint32_t RESERVED8;
	__vo uint32_t BDCR;
	__vo uint32_t CSR;
	__vo uint32_t RESERVED9;
	__vo uint32_t RESERVED10;
	__vo uint32_t SSCGR;
	__vo uint32_t PLLI2SCFGR;
	__vo uint32_t PLLSAICFGR;
	__vo uint32_t DCKCFGR;
}RCC_RegDef_t;

/*------------------------- I2C Register Configurations ----------------------------------*/
typedef struct i2cRegisters
{
	__vo uint32_t CR1;
	__vo uint32_t CR2;
	__vo uint32_t OAR1;
	__vo uint32_t OAR2;
	__vo uint32_t DR;
	__vo uint32_t SR1;
	__vo uint32_t SR2;
	__vo uint32_t CCR;
	__vo uint32_t TRISE;
	__vo uint32_t FLTR;
}I2C_RegDef_t;
/*----------------------------------------------------------------------------------------*/

/*Memory Regions Base address*/
#define FLASH_ADDR		0x08000000U
#define SRAM1_ADDR		0x20000000U
#define SRAM2_ADDR		0x2001C000U
#define APB1_ADDR		0x40000000U
#define APB2_ADDR		0x40010000U
#define AHB1_ADDR		0x40020000U
#define AHB2_ADDR		0x50000000U


/*-------------- Peripheral Region Address -----------------*/
/*UART and USART*/
#define USART1_BASE		(APB2_ADDR + 1000)
#define USART2_BASE		(APB1_ADDR + 4400)
#define USART3_BASE		(APB1_ADDR + 4800)
#define USART6_BASE		(APB2_ADDR + 1400)
#define UART4_BASE		(APB1_ADDR + 4C00)
#define UART5_BASE		(APB1_ADDR + 5000)

/*I2C Base address*/
#define I2C1_BASE		(APB1_ADDR + 5400)
#define I2C2_BASE		(APB1_ADDR + 5800)
#define I2C3_BASE		(APB1_ADDR + 5C00)

/*RCC Address*/
#define RCC 			((RCC_RegDef_t *)0x40023800U)


/*----------------------------------------------------------------------------------------------------*/
/*Peripheral Clock Enabling*/
/*1. USART Clocks*/
#define USART1_CLK_EN()			(RCC->APB2ENR |= (1<<4))
#define USART2_CLK_EN()			(RCC->APB1ENR)|= (1<<17)
#define USART3_CLK_EN()			(RCC->APB1ENR)|= (1<<18)
#define USART6_CLK_EN()			(RCC->APB2ENR |= (1<<5))
#define UART4_CLK_EN()			(RCC->APB1ENR)|= (1<<19)
#define UART5_CLK_EN()			(RCC->APB1ENR)|= (1<<20)

/*2. I2C Clocks*/
#define I2C1_CLK_EN()			(RCC->APB1ENR |= (1<<21))
#define I2C2_CLK_EN()			(RCC->APB1ENR |= (1<<22))
#define I2C3_CLK_EN()			(RCC->APB1ENR |= (1<<23))
/*----------------------------------------------------------------------------------------------------*/

/*Includes*/
#include "stm32f4xx_usart.h"
#endif /* STM32F4XX_H_ */
