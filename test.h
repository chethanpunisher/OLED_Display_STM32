/*
 * test.h
 *
 *  Created on: Jun 7, 2024
 *      Author: cheth
 */

#ifndef INC_TEST_H_
#define INC_TEST_H_

#define RCC_BASE        0x40021000
#define GPIOC_BASE      0x40011000

#define RCC_APB2ENR     (*(volatile unsigned int *)(RCC_BASE + 0x18))
#define GPIOC_CRH       (*(volatile unsigned int *)(GPIOC_BASE + 0x04))
#define GPIOC_ODR       (*(volatile unsigned int *)(GPIOC_BASE + 0x0C))

#define RCC_APB2ENR_IOPCEN (1 << 4)

extern void delay(volatile unsigned int s);

#endif /* INC_TEST_H_ */
