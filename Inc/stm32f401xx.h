/*
 * stm32f401xx.h
 *
 *  Created on: Mar 7, 2026
 *      Author: maksym
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STM32F401XX_H_
#define STM32F401XX_H_

#define  __weak __attribute__((weak))

#define FLASH_BASE 0x08000000UL
#define SRAM1_BASE 0x20000000UL
#define ROM_BASE   FLASH_BASE
#define SRAM_BASE  SRAM1_BASE

#define NVIC_ISER0 ((volatile uint32_t*)0xE000E100)
#define NVIC_ISER1 ((volatile uint32_t*)0xE000E104)
#define NVIC_ISER2 ((volatile uint32_t*)0xE000E108)
#define NVIC_ISER3 ((volatile uint32_t*)0xE000E10C)
#define NVIC_ISER4 ((volatile uint32_t*)0xE000E110)
#define NVIC_ISER5 ((volatile uint32_t*)0xE000E114)
#define NVIC_ISER6 ((volatile uint32_t*)0xE000E118)
#define NVIC_ISER7 ((volatile uint32_t*)0xE000E11C)

#define NVIC_ICER0 ((volatile uint32_t*)0xE000E180)
#define NVIC_ICER1 ((volatile uint32_t*)0xE000E184)
#define NVIC_ICER2 ((volatile uint32_t*)0xE000E188)
#define NVIC_ICER3 ((volatile uint32_t*)0xE000E18C)
#define NVIC_ICER4 ((volatile uint32_t*)0xE000E190)
#define NVIC_ICER5 ((volatile uint32_t*)0xE000E194)
#define NVIC_ICER6 ((volatile uint32_t*)0xE000E198)
#define NVIC_ICER7 ((volatile uint32_t*)0xE000E19C)

#define NVIC_ISPR0 ((volatile uint32_t*)0xE000E200)
#define NVIC_ISPR1 ((volatile uint32_t*)0xE000E204)
#define NVIC_ISPR2 ((volatile uint32_t*)0xE000E208)
#define NVIC_ISPR3 ((volatile uint32_t*)0xE000E20C)
#define NVIC_ISPR4 ((volatile uint32_t*)0xE000E210)
#define NVIC_ISPR5 ((volatile uint32_t*)0xE000E214)
#define NVIC_ISPR6 ((volatile uint32_t*)0xE000E218)
#define NVIC_ISPR7 ((volatile uint32_t*)0xE000E21C)

#define NVIC_ICPR0 ((volatile uint32_t*)0xE000E280)
#define NVIC_ICPR1 ((volatile uint32_t*)0xE000E284)
#define NVIC_ICPR2 ((volatile uint32_t*)0xE000E288)
#define NVIC_ICPR3 ((volatile uint32_t*)0xE000E28C)
#define NVIC_ICPR4 ((volatile uint32_t*)0xE000E290)
#define NVIC_ICPR5 ((volatile uint32_t*)0xE000E294)
#define NVIC_ICPR6 ((volatile uint32_t*)0xE000E298)
#define NVIC_ICPR7 ((volatile uint32_t*)0xE000E29C)

#define NVIC_IABR0 ((volatile uint32_t*)0xE000E300)
#define NVIC_IABR1 ((volatile uint32_t*)0xE000E304)
#define NVIC_IABR2 ((volatile uint32_t*)0xE000E308)
#define NVIC_IABR3 ((volatile uint32_t*)0xE000E30C)
#define NVIC_IABR4 ((volatile uint32_t*)0xE000E310)
#define NVIC_IABR5 ((volatile uint32_t*)0xE000E314)
#define NVIC_IABR6 ((volatile uint32_t*)0xE000E318)
#define NVIC_IABR7 ((volatile uint32_t*)0xE000E31C)

#define NVIC_IPR0   ((volatile uint32_t*)0xE000E400)
#define NVIC_IPR1   ((volatile uint32_t*)0xE000E404)
#define NVIC_IPR2   ((volatile uint32_t*)0xE000E408)
#define NVIC_IPR3   ((volatile uint32_t*)0xE000E40C)
#define NVIC_IPR4   ((volatile uint32_t*)0xE000E410)
#define NVIC_IPR5   ((volatile uint32_t*)0xE000E414)
#define NVIC_IPR6   ((volatile uint32_t*)0xE000E418)
#define NVIC_IPR7   ((volatile uint32_t*)0xE000E41C)
#define NVIC_IPR8   ((volatile uint32_t*)0xE000E420)
#define NVIC_IPR9   ((volatile uint32_t*)0xE000E424)
#define NVIC_IPR10  ((volatile uint32_t*)0xE000E428)
#define NVIC_IPR11  ((volatile uint32_t*)0xE000E42C)
#define NVIC_IPR12  ((volatile uint32_t*)0xE000E430)
#define NVIC_IPR13  ((volatile uint32_t*)0xE000E434)
#define NVIC_IPR14  ((volatile uint32_t*)0xE000E438)
#define NVIC_IPR15  ((volatile uint32_t*)0xE000E43C)
#define NVIC_IPR16  ((volatile uint32_t*)0xE000E440)
#define NVIC_IPR17  ((volatile uint32_t*)0xE000E444)
#define NVIC_IPR18  ((volatile uint32_t*)0xE000E448)
#define NVIC_IPR19  ((volatile uint32_t*)0xE000E44C)
#define NVIC_IPR20  ((volatile uint32_t*)0xE000E450)
#define NVIC_IPR21  ((volatile uint32_t*)0xE000E454)
#define NVIC_IPR22  ((volatile uint32_t*)0xE000E458)
#define NVIC_IPR23  ((volatile uint32_t*)0xE000E45C)
#define NVIC_IPR24  ((volatile uint32_t*)0xE000E460)
#define NVIC_IPR25  ((volatile uint32_t*)0xE000E464)
#define NVIC_IPR26  ((volatile uint32_t*)0xE000E468)
#define NVIC_IPR27  ((volatile uint32_t*)0xE000E46C)
#define NVIC_IPR28  ((volatile uint32_t*)0xE000E470)
#define NVIC_IPR29  ((volatile uint32_t*)0xE000E474)
#define NVIC_IPR30  ((volatile uint32_t*)0xE000E478)
#define NVIC_IPR31  ((volatile uint32_t*)0xE000E47C)
#define NVIC_IPR32  ((volatile uint32_t*)0xE000E480)
#define NVIC_IPR33  ((volatile uint32_t*)0xE000E484)
#define NVIC_IPR34  ((volatile uint32_t*)0xE000E488)
#define NVIC_IPR35  ((volatile uint32_t*)0xE000E48C)
#define NVIC_IPR36  ((volatile uint32_t*)0xE000E490)
#define NVIC_IPR37  ((volatile uint32_t*)0xE000E494)
#define NVIC_IPR38  ((volatile uint32_t*)0xE000E498)
#define NVIC_IPR39  ((volatile uint32_t*)0xE000E49C)
#define NVIC_IPR40  ((volatile uint32_t*)0xE000E4A0)
#define NVIC_IPR41  ((volatile uint32_t*)0xE000E4A4)
#define NVIC_IPR42  ((volatile uint32_t*)0xE000E4A8)
#define NVIC_IPR43  ((volatile uint32_t*)0xE000E4AC)
#define NVIC_IPR44  ((volatile uint32_t*)0xE000E4B0)
#define NVIC_IPR45  ((volatile uint32_t*)0xE000E4B4)
#define NVIC_IPR46  ((volatile uint32_t*)0xE000E4B8)
#define NVIC_IPR47  ((volatile uint32_t*)0xE000E4BC)
#define NVIC_IPR48  ((volatile uint32_t*)0xE000E4C0)
#define NVIC_IPR49  ((volatile uint32_t*)0xE000E4C4)
#define NVIC_IPR50  ((volatile uint32_t*)0xE000E4C8)
#define NVIC_IPR51  ((volatile uint32_t*)0xE000E4CC)
#define NVIC_IPR52  ((volatile uint32_t*)0xE000E4D0)
#define NVIC_IPR53  ((volatile uint32_t*)0xE000E4D4)
#define NVIC_IPR54  ((volatile uint32_t*)0xE000E4D8)
#define NVIC_IPR55  ((volatile uint32_t*)0xE000E4DC)
#define NVIC_IPR56  ((volatile uint32_t*)0xE000E4E0)
#define NVIC_IPR57  ((volatile uint32_t*)0xE000E4E4)
#define NVIC_IPR58  ((volatile uint32_t*)0xE000E4E8)
#define NVIC_IPR59  ((volatile uint32_t*)0xE000E4EC)

#define IRQ_NO_SPI1   35
#define IRQ_NO_SPI2   36
#define IRQ_NO_SPI3   51

#define IRQ_NO_I2C1_EV   31
#define IRQ_NO_I2C1_ER   32
#define IRQ_NO_I2C2_EV   33
#define IRQ_NO_I2C2_ER   34
#define IRQ_NO_I2C3_EV   72
#define IRQ_NO_I2C3_ER   73

#define NVIC_STIR   ((volatile uint32_t*)0xE000EF00)

#define PRIOR_BITS_IMPLEMENTED 4

#define PERIPH_BASE     0x40000000UL
#define APB1PERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE 0x40010000UL
#define AHB1PERIPH_BASE 0x40020000UL
#define AHB2PERIPH_BASE 0x50000000UL
#define RCC_BASE        0x40023800UL

#define GPIOA_BASE 0x40020000UL
#define GPIOB_BASE 0x40020400UL
#define GPIOC_BASE 0x40020800UL
#define GPIOD_BASE 0x40020C00UL
#define GPIOE_BASE 0x40021000UL
#define GPIOH_BASE 0x40021C00UL

#define I2C1_BASE   0x40005400UL
#define I2C2_BASE   0x40005800UL
#define I2C3_BASE   0x40005C00UL
#define SPI2_BASE   0x40003800UL
#define SPI3_BASE   0x40003C00UL
#define USART2_BASE 0x40004400UL
#define USART6_BASE 0x40011400UL

#define SPI1_BASE    0x40013000UL
#define USART1_BASE  0x40011000UL
#define EXTI_BASE    0x40013C00UL
#define SYSCFG_BASE  0x40013800UL

typedef struct{
	uint32_t volatile MODER;
	uint32_t volatile OTYPER;
	uint32_t volatile OSPEEDR;
	uint32_t volatile PUPDR;
	uint32_t volatile IDR;
	uint32_t volatile ODR;
	uint32_t volatile BSRR;
	uint32_t volatile LCKR;
	uint32_t volatile AFRL;
	uint32_t volatile AFRH;
}GPIO_REG_t;

#define GPIOA ((GPIO_REG_t*)GPIOA_BASE)
#define GPIOB ((GPIO_REG_t*)GPIOB_BASE)
#define GPIOC ((GPIO_REG_t*)GPIOC_BASE)
#define GPIOD ((GPIO_REG_t*)GPIOD_BASE)
#define GPIOE ((GPIO_REG_t*)GPIOE_BASE)
#define GPIOH ((GPIO_REG_t*)GPIOH_BASE)

typedef struct{
	uint32_t volatile CR;
	uint32_t volatile PLLCFGR;
	uint32_t volatile CFGR;
	uint32_t volatile CIR;
	uint32_t volatile AHB1RSTR;
	uint32_t volatile AHB2RSTR;
	uint32_t RESERVED0;
	uint32_t RESERVED1;
	uint32_t volatile APB1RSTR;
	uint32_t volatile APB2RSTR;
	uint32_t RESERVED2;
	uint32_t RESERVED3;
	uint32_t volatile AHB1ENR;
	uint32_t volatile AHB2ENR;
	uint32_t RESERVED4;
	uint32_t RESERVED5;
	uint32_t volatile APB1ENR;
	uint32_t volatile APB2ENR;
	uint32_t RESERVED6;
	uint32_t RESERVED7;
	uint32_t volatile AHB1LPENR;
	uint32_t volatile AHB2LPENR;
	uint32_t RESERVED8;
	uint32_t RESERVED9;
	uint32_t volatile APB1LPENR;
	uint32_t volatile APB2LPENR;
	uint32_t RESERVED10;
	uint32_t RESERVED11;
	uint32_t volatile BDCR;
	uint32_t volatile CSR;
	uint32_t RESERVED12;
	uint32_t RESERVED13;
	uint32_t volatile SSCGR;
	uint32_t volatile PLLI2SCFGR;
	uint32_t RESERVED14;
	uint32_t volatile DCKCFGR;
}RCC_REG_t;

#define RCC ((RCC_REG_t*)RCC_BASE)

#define GPIOA_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 0)); (RCC->AHB1RSTR &= ~(1 << 0));}while(0)
#define GPIOB_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 1)); (RCC->AHB1RSTR &= ~(1 << 1));}while(0)
#define GPIOC_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 2)); (RCC->AHB1RSTR &= ~(1 << 2));}while(0)
#define GPIOD_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 3)); (RCC->AHB1RSTR &= ~(1 << 3));}while(0)
#define GPIOE_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 4)); (RCC->AHB1RSTR &= ~(1 << 4));}while(0)
#define GPIOH_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 7)); (RCC->AHB1RSTR &= ~(1 << 7));}while(0)

#define GPIO_BASE_TO_CODE(x) ((x) == GPIOA) ? 0 :\
		                     ((x) == GPIOB) ? 1 :\
		                     ((x) == GPIOC) ? 2 :\
		                     ((x) == GPIOD) ? 3 :\
		                     ((x) == GPIOE) ? 4 :\
		                     ((x) == GPIOH) ? 7 :\
		                     0 \

#define RCC_GPIOA_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 0))
#define RCC_GPIOB_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 1))
#define RCC_GPIOC_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 2))
#define RCC_GPIOD_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 3))
#define RCC_GPIOE_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 4))
#define RCC_GPIOH_CLK_ENABLE()   ((RCC->AHB1ENR) |= (1 << 7))

#define RCC_GPIOA_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 0))
#define RCC_GPIOB_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 1))
#define RCC_GPIOC_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 2))
#define RCC_GPIOD_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 3))
#define RCC_GPIOE_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 4))
#define RCC_GPIOH_CLK_DISABLE()   ((RCC->AHB1ENR) &= ~(1 << 7))

#define RCC_I2C1_CLK_ENABLE()    ((RCC->APB1ENR) |= (1 << 21))
#define RCC_I2C2_CLK_ENABLE()    ((RCC->APB1ENR) |= (1 << 22))
#define RCC_I2C3_CLK_ENABLE()    ((RCC->APB1ENR) |= (1 << 23))

#define RCC_I2C1_CLK_DISABLE()    ((RCC->APB1ENR) &= ~(1 << 21))
#define RCC_I2C2_CLK_DISABLE()    ((RCC->APB1ENR) &= ~(1 << 22))
#define RCC_I2C3_CLK_DISABLE()    ((RCC->APB1ENR) &= ~(1 << 23))

#define RCC_SPI1_CLK_ENABLE()      ((RCC->APB2ENR) |= (1 << 12))
#define RCC_SPI2_CLK_ENABLE()      ((RCC->APB1ENR) |= (1 << 14))
#define RCC_SPI3_CLK_ENABLE()      ((RCC->APB1ENR) |= (1 << 15))

#define RCC_SPI1_CLK_DISABLE()      ((RCC->APB2ENR) &= ~(1 << 12))
#define RCC_SPI2_CLK_DISABLE()      ((RCC->APB1ENR) &= ~(1 << 14))
#define RCC_SPI3_CLK_DISABLE()      ((RCC->APB1ENR) &= ~(1 << 15))

#define RCC_USART1_CLK_ENABLE()  ((RCC->APB2ENR) |= (1 << 4))
#define RCC_USART2_CLK_ENABLE()  ((RCC->APB1ENR) |= (1 << 17))
#define RCC_USART6_CLK_ENABLE()  ((RCC->APB2ENR) |= (1 << 5))

#define RCC_USART1_CLK_DISABLE()  ((RCC->APB2ENR) &= ~(1 << 4))
#define RCC_USART2_CLK_DISABLE()  ((RCC->APB1ENR) &= ~(1 << 17))
#define RCC_USART6_CLK_DISABLE()  ((RCC->APB2ENR) &= ~(1 << 5))

#define RCC_SYSCFG_CLK_ENABLE()   ((RCC->APB2ENR) |= (1 << 14))
#define RCC_SYSCFG_CLK_DISABLE()  ((RCC->APB2ENR) &= ~(1 << 14))

typedef struct{
	uint32_t volatile MEMRMP;
	uint32_t volatile PMC;
	uint32_t volatile EXTICR[4];
	uint32_t RESERVED1;
	uint32_t RESERVED2;
	uint32_t volatile CMPCR;
	uint32_t RESERVED3;
	uint32_t RESERVED4;
	uint32_t volatile CFGR;
}SYSCFG_REG_t;

#define SYSCFG  ((SYSCFG_REG_t*)SYSCFG_BASE)

typedef struct{
	uint32_t volatile IMR;
	uint32_t volatile EMR;
	uint32_t volatile RTSR;
	uint32_t volatile FTSR;
	uint32_t volatile SWIER;
	uint32_t volatile PR;
}EXTI_REG_t;

#define EXTI ((EXTI_REG_t*)EXTI_BASE)

#define IRQ_EXTI0       6
#define IRQ_EXTI1       7
#define IRQ_EXTI2       8
#define IRQ_EXTI3       9
#define IRQ_EXTI4       10
#define IRQ_EXTI5_9     23
#define IRQ_EXTI10_15   40

#define NVIC_IRQ_PRIOR_BASE ((volatile uint32_t*)0xE000E400)

typedef struct{
	uint32_t volatile CR1;
	uint32_t volatile CR2;
	uint32_t volatile SR;
	uint32_t volatile DR;
	uint32_t volatile CRCPR;
	uint32_t volatile RXCRCR;
	uint32_t volatile TXCRCR;
	uint32_t volatile I2SCFGR;
	uint32_t volatile I2SPR;
}SPI_REG_t;

#define SPI1 ((SPI_REG_t*)SPI1_BASE)
#define SPI2 ((SPI_REG_t*)SPI2_BASE)
#define SPI3 ((SPI_REG_t*)SPI3_BASE)

#define SPI1_REG_RESET() do{(RCC->APB2RSTR |= (1 << 12)); (RCC->APB2RSTR &= ~(1 << 12));}while(0)
#define SPI2_REG_RESET() do{(RCC->APB1RSTR |= (1 << 14)); (RCC->APB1RSTR &= ~(1 << 14));}while(0)
#define SPI3_REG_RESET() do{(RCC->APB1RSTR |= (1 << 15)); (RCC->APB1RSTR &= ~(1 << 15));}while(0)

#define SPI_CR1_CPHA      0
#define SPI_CR1_CPOL      1
#define SPI_CR1_MSTR      2
#define SPI_CR1_BR        3
#define SPI_CR1_SPE       6
#define SPI_CR1_LSBF      7
#define SPI_CR1_SSI       8
#define SPI_CR1_SSM       9
#define SPI_CR1_RXONLY    10
#define SPI_CR1_DFF       11
#define SPI_CR1_CRCNEXT   12
#define SPI_CR1_CRCEN     13
#define SPI_CR1_BIDIOE    14
#define SPI_CR1_BIDIMODE  15

#define SPI_CR2_RXDMAEN    0
#define SPI_CR2_TXDMAEN    1
#define SPI_CR2_SSOE       2
#define SPI_CR2_RESERVED   3
#define SPI_CR2_FRF        4
#define SPI_CR2_ERRIE      5
#define SPI_CR2_RXNEIE     6
#define SPI_CR2_TXEIE      7

#define SPI_SR_RXNE      0
#define SPI_SR_TXE       1
#define SPI_SR_CHSIDE    2
#define SPI_SR_UDR       3
#define SPI_SR_CRCERR    4
#define SPI_SR_MODF      5
#define SPI_SR_OVR       6
#define SPI_SR_BSY       7
#define SPI_SR_FRE       8

typedef struct{
	uint32_t volatile CR1;
	uint32_t volatile CR2;
	uint32_t volatile OAR1;
	uint32_t volatile OAR2;
	uint32_t volatile DR;
	uint32_t volatile SR1;
	uint32_t volatile SR2;
	uint32_t volatile CCR;
	uint32_t volatile TRISE;
	uint32_t volatile FLTR;
}I2C_REG_t;

#define I2C1 ((I2C_REG_t*)I2C1_BASE)
#define I2C2 ((I2C_REG_t*)I2C2_BASE)
#define I2C3 ((I2C_REG_t*)I2C3_BASE)

#define I2C1_REG_RESET() do{(RCC->APB1RSTR |= (1 << 21)); (RCC->APB1RSTR &= ~(1 << 21));}while(0)
#define I2C2_REG_RESET() do{(RCC->APB1RSTR |= (1 << 22)); (RCC->APB1RSTR &= ~(1 << 22));}while(0)
#define I2C3_REG_RESET() do{(RCC->APB1RSTR |= (1 << 23)); (RCC->APB1RSTR &= ~(1 << 23));}while(0)

#define I2C_CR1_PE          0
#define I2C_CR1_SMBUS       1
#define I2C_CR1_SMBTYPE     3
#define I2C_CR1_ENARP       4
#define I2C_CR1_ENPEC       5
#define I2C_CR1_ENGC        6
#define I2C_CR1_NOSTRETCH   7
#define I2C_CR1_START       8
#define I2C_CR1_STOP        9
#define I2C_CR1_ACK         10
#define I2C_CR1_POS         11
#define I2C_CR1_PEC         12
#define I2C_CR1_ALERT       13
#define I2C_CR1_SWRST       15

#define I2C_CR2_FREQ        0
#define I2C_CR2_ITERREN     8
#define I2C_CR2_ITEVTEN     9
#define I2C_CR2_ITBUFEN     10
#define I2C_CR2_DMAEN       11
#define I2C_CR2_LAST        12

#define I2C_OAR1_ADD0       0
#define I2C_OAR1_ADD1       1
#define I2C_OAR1_ADD8       8
#define I2C_OAR1_ADDMODE    15

#define I2C_OAR2_ENDUAL     0
#define I2C_OAR2_ADD2       1

#define I2C_SR1_SB          0
#define I2C_SR1_ADDR        1
#define I2C_SR1_BTF         2
#define I2C_SR1_ADD10       3
#define I2C_SR1_STOPF       4
#define I2C_SR1_RXNE        6
#define I2C_SR1_TXE         7
#define I2C_SR1_BERR        8
#define I2C_SR1_ARLO        9
#define I2C_SR1_AF          10
#define I2C_SR1_OVR         11
#define I2C_SR1_PECERR      12
#define I2C_SR1_TIMEOUT     14
#define I2C_SR1_SMBALERT    15

#define I2C_SR2_MSL         0
#define I2C_SR2_BUSY        1
#define I2C_SR2_TRA         2
#define I2C_SR2_GENCALL     4
#define I2C_SR2_SMBDEFAULT  5
#define I2C_SR2_SMBHOST     6
#define I2C_SR2_DUALF       7
#define I2C_SR2_PEC         8

#define I2C_CCR_CCR         0
#define I2C_CCR_DUTY        14
#define I2C_CCR_FS          15

#define I2C_TRISE_TRISE     0

#define I2C_FLTR_DNF        0
#define I2C_FLTR_ANOFF      4

#define HIGH            1
#define LOW             0
#define ENABLE          1
#define DISABLE         0
#define SET             1
#define RESET           0
#define PRESSED         0
#define RELEASED        1
#define FLAG_RESET      RESET
#define FLAG_SET        SET

#include "gpio.h"
#include "i2c.h"
#endif /* STM32F401XX_H_ */
