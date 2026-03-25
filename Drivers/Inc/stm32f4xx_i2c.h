/*
 * stm32f4xx_i2c.h
 *
 *  Created on: Mar 25, 2026
 *      Author: BALA
 */

#ifndef INC_STM32F4XX_I2C_H_
#define INC_STM32F4XX_I2C_H_

typedef struct i2cConfig
{

}I2C_Config_t;

/******__ I2C Bit Position __*******/
/*1. 		CR1			*/
#define CR1_PE			0
#define CR1_SMBUS		1
#define CR1_SMBTYPE		3
#define CR1_ENARP		4
#define CR1_ENPEC		5
#define CR1_ENGC		6
#define CR1_NOSTRETCH	7
#define CR1_START		8
#define CR1_STOP		9
#define CR1_ACK			10
#define CR1_POS			11
#define CR1_PEC			12
#define CR1_ALERT		13
#define CR1_SWRST		15

/*2. 		CR2			*/
#define CR2_ITERREN		8
#define CR2_ITEVTEN		9
#define CR2_ITBUFEN		10
#define CR2_DMAEN		11
#define CR2_LAST		12

/*3. 		SR1			*/
#define SR1_SB			0
#define SR1_ADDR		1
#define SR1_BTF			2
#define SR1_ADD10		3
#define SR1_STOPF		4
#define SR1_RXNE		6
#define SR1_TXE			7
#define SR1_BERR		8
#define SR1_ARLO		9
#define SR1_AF			10
#define SR1_OVR			11
#define SR1_PECERR		12
#define SR1_TIMEOUT		13
#define SR1_SMBALRT		14

/*4. 		SR2			*/
#define SR2_MSL			0
#define SR2_BUSY		1
#define SR2_TRA			2
#define SR2_GENCALL		4
#define SR2_SMBDEFLT	5
#define SR2_SMBHOST		6
#define SR2_DUALF		7

#endif /* INC_STM32F4XX_I2C_H_ */
