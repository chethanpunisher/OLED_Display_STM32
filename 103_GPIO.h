/*
 * 103_GPIO.h
 *
 *  Created on: Jun 9, 2024
 *      Author: cheth
 */

#ifndef INC_103_GPIO_H_
#define INC_103_GPIO_H_



#include <stdint.h>

// Base address for GPIO ports
#define GPIOA_BASE  0x40010800
#define GPIOB_BASE  0x40010C00
#define GPIOC_BASE  0x40011000
#define GPIOD_BASE  0x40011400
#define GPIOE_BASE  0x40011800
#define GPIOF_BASE  0x40011C00
#define GPIOG_BASE  0x40012000

// GPIO registers offsets
#define GPIO_CRL_OFFSET  0x00
#define GPIO_CRH_OFFSET  0x04
#define GPIO_IDR_OFFSET  0x08
#define GPIO_ODR_OFFSET  0x0C
#define GPIO_BSRR_OFFSET 0x10
#define GPIO_BRR_OFFSET  0x14
#define GPIO_LCKR_OFFSET 0x18

// GPIO registers addresses
#define GPIOA_CRL    (*(volatile uint32_t *)(GPIOA_BASE + GPIO_CRL_OFFSET))
#define GPIOA_CRH    (*(volatile uint32_t *)(GPIOA_BASE + GPIO_CRH_OFFSET))
#define GPIOA_IDR    (*(volatile uint32_t *)(GPIOA_BASE + GPIO_IDR_OFFSET))
#define GPIOA_ODR    (*(volatile uint32_t *)(GPIOA_BASE + GPIO_ODR_OFFSET))
#define GPIOA_BSRR   (*(volatile uint32_t *)(GPIOA_BASE + GPIO_BSRR_OFFSET))
#define GPIOA_BRR    (*(volatile uint32_t *)(GPIOA_BASE + GPIO_BRR_OFFSET))
#define GPIOA_LCKR   (*(volatile uint32_t *)(GPIOA_BASE + GPIO_LCKR_OFFSET))

#define GPIOB_CRL    (*(volatile uint32_t *)(GPIOB_BASE + GPIO_CRL_OFFSET))
#define GPIOB_CRH    (*(volatile uint32_t *)(GPIOB_BASE + GPIO_CRH_OFFSET))
#define GPIOB_IDR    (*(volatile uint32_t *)(GPIOB_BASE + GPIO_IDR_OFFSET))
#define GPIOB_ODR    (*(volatile uint32_t *)(GPIOB_BASE + GPIO_ODR_OFFSET))
#define GPIOB_BSRR   (*(volatile uint32_t *)(GPIOB_BASE + GPIO_BSRR_OFFSET))
#define GPIOB_BRR    (*(volatile uint32_t *)(GPIOB_BASE + GPIO_BRR_OFFSET))
#define GPIOB_LCKR   (*(volatile uint32_t *)(GPIOB_BASE + GPIO_LCKR_OFFSET))

#define GPIOC_CRL    (*(volatile uint32_t *)(GPIOC_BASE + GPIO_CRL_OFFSET))
#define GPIOC_CRH    (*(volatile uint32_t *)(GPIOC_BASE + GPIO_CRH_OFFSET))
#define GPIOC_IDR    (*(volatile uint32_t *)(GPIOC_BASE + GPIO_IDR_OFFSET))
#define GPIOC_ODR    (*(volatile uint32_t *)(GPIOC_BASE + GPIO_ODR_OFFSET))
#define GPIOC_BSRR   (*(volatile uint32_t *)(GPIOC_BASE + GPIO_BSRR_OFFSET))
#define GPIOC_BRR    (*(volatile uint32_t *)(GPIOC_BASE + GPIO_BRR_OFFSET))
#define GPIOC_LCKR   (*(volatile uint32_t *)(GPIOC_BASE + GPIO_LCKR_OFFSET))

#define GPIOD_CRL    (*(volatile uint32_t *)(GPIOD_BASE + GPIO_CRL_OFFSET))
#define GPIOD_CRH    (*(volatile uint32_t *)(GPIOD_BASE + GPIO_CRH_OFFSET))
#define GPIOD_IDR    (*(volatile uint32_t *)(GPIOD_BASE + GPIO_IDR_OFFSET))
#define GPIOD_ODR    (*(volatile uint32_t *)(GPIOD_BASE + GPIO_ODR_OFFSET))
#define GPIOD_BSRR   (*(volatile uint32_t *)(GPIOD_BASE + GPIO_BSRR_OFFSET))
#define GPIOD_BRR    (*(volatile uint32_t *)(GPIOD_BASE + GPIO_BRR_OFFSET))
#define GPIOD_LCKR   (*(volatile uint32_t *)(GPIOD_BASE + GPIO_LCKR_OFFSET))

#define GPIOE_CRL    (*(volatile uint32_t *)(GPIOE_BASE + GPIO_CRL_OFFSET))
#define GPIOE_CRH    (*(volatile uint32_t *)(GPIOE_BASE + GPIO_CRH_OFFSET))
#define GPIOE_IDR    (*(volatile uint32_t *)(GPIOE_BASE + GPIO_IDR_OFFSET))
#define GPIOE_ODR    (*(volatile uint32_t *)(GPIOE_BASE + GPIO_ODR_OFFSET))
#define GPIOE_BSRR   (*(volatile uint32_t *)(GPIOE_BASE + GPIO_BSRR_OFFSET))
#define GPIOE_BRR    (*(volatile uint32_t *)(GPIOE_BASE + GPIO_BRR_OFFSET))
#define GPIOE_LCKR   (*(volatile uint32_t *)(GPIOE_BASE + GPIO_LCKR_OFFSET))

#define GPIOF_CRL    (*(volatile uint32_t *)(GPIOF_BASE + GPIO_CRL_OFFSET))
#define GPIOF_CRH    (*(volatile uint32_t *)(GPIOF_BASE + GPIO_CRH_OFFSET))
#define GPIOF_IDR    (*(volatile uint32_t *)(GPIOF_BASE + GPIO_IDR_OFFSET))
#define GPIOF_ODR    (*(volatile uint32_t *)(GPIOF_BASE + GPIO_ODR_OFFSET))
#define GPIOF_BSRR   (*(volatile uint32_t *)(GPIOF_BASE + GPIO_BSRR_OFFSET))
#define GPIOF_BRR    (*(volatile uint32_t *)(GPIOF_BASE + GPIO_BRR_OFFSET))
#define GPIOF_LCKR   (*(volatile uint32_t *)(GPIOF_BASE + GPIO_LCKR_OFFSET))

#define GPIOG_CRL    (*(volatile uint32_t *)(GPIOG_BASE + GPIO_CRL_OFFSET))
#define GPIOG_CRH    (*(volatile uint32_t *)(GPIOG_BASE + GPIO_CRH_OFFSET))
#define GPIOG_IDR    (*(volatile uint32_t *)(GPIOG_BASE + GPIO_IDR_OFFSET))
#define GPIOG_ODR    (*(volatile uint32_t *)(GPIOG_BASE + GPIO_ODR_OFFSET))
#define GPIOG_BSRR   (*(volatile uint32_t *)(GPIOG_BASE + GPIO_BSRR_OFFSET))
#define GPIOG_BRR    (*(volatile uint32_t *)(GPIOG_BASE + GPIO_BRR_OFFSET))
#define GPIOG_LCKR   (*(volatile uint32_t *)(GPIOG_BASE + GPIO_LCKR_OFFSET))


// Bit definitions for GPIO_CRL and GPIO_CRH registers (continued)
#define GPIO_CRL_MODE1_Pos     (4U)
#define GPIO_CRL_MODE1_Msk     (0x3U << GPIO_CRL_MODE1_Pos)
#define GPIO_CRL_MODE1         GPIO_CRL_MODE1_Msk
#define GPIO_CRL_MODE1_0       (0x1U << GPIO_CRL_MODE1_Pos)
#define GPIO_CRL_MODE1_1       (0x2U << GPIO_CRL_MODE1_Pos)
#define GPIO_CRL_CNF1_Pos      (6U)
#define GPIO_CRL_CNF1_Msk      (0x3U << GPIO_CRL_CNF1_Pos)
#define GPIO_CRL_CNF1          GPIO_CRL_CNF1_Msk
#define GPIO_CRL_CNF1_0        (0x1U << GPIO_CRL_CNF1_Pos)
#define GPIO_CRL_CNF1_1        (0x2U << GPIO_CRL_CNF1_Pos)
#define GPIO_CRL_MODE2_Pos     (8U)
#define GPIO_CRL_MODE2_Msk     (0x3U << GPIO_CRL_MODE2_Pos)
#define GPIO_CRL_MODE2         GPIO_CRL_MODE2_Msk
#define GPIO_CRL_MODE2_0       (0x1U << GPIO_CRL_MODE2_Pos)
#define GPIO_CRL_MODE2_1       (0x2U << GPIO_CRL_MODE2_Pos)
#define GPIO_CRL_CNF2_Pos      (10U)
#define GPIO_CRL_CNF2_Msk      (0x3U << GPIO_CRL_CNF2_Pos)
#define GPIO_CRL_CNF2          GPIO_CRL_CNF2_Msk
#define GPIO_CRL_CNF2_0        (0x1U << GPIO_CRL_CNF2_Pos)
#define GPIO_CRL_CNF2_1        (0x2U << GPIO_CRL_CNF2_Pos)
#define GPIO_CRL_MODE3_Pos     (12U)
#define GPIO_CRL_MODE3_Msk     (0x3U << GPIO_CRL_MODE3_Pos)
#define GPIO_CRL_MODE3         GPIO_CRL_MODE3_Msk
#define GPIO_CRL_MODE3_0       (0x1U << GPIO_CRL_MODE3_Pos)
#define GPIO_CRL_MODE3_1       (0x2U << GPIO_CRL_MODE3_Pos)
#define GPIO_CRL_CNF3_Pos      (14U)
#define GPIO_CRL_CNF3_Msk      (0x3U << GPIO_CRL_CNF3_Pos)
#define GPIO_CRL_CNF3          GPIO_CRL_CNF3_Msk
#define GPIO_CRL_CNF3_0        (0x1U << GPIO_CRL_CNF3_Pos)
#define GPIO_CRL_CNF3_1        (0x2U << GPIO_CRL_CNF3_Pos)
#define GPIO_CRL_MODE4_Pos     (16U)
#define GPIO_CRL_MODE4_Msk     (0x3U << GPIO_CRL_MODE4_Pos)
#define GPIO_CRL_MODE4         GPIO_CRL_MODE4_Msk
#define GPIO_CRL_MODE4_0       (0x1U << GPIO_CRL_MODE4_Pos)
#define GPIO_CRL_MODE4_1       (0x2U << GPIO_CRL_MODE4_Pos)
#define GPIO_CRL_CNF4_Pos      (18U)
#define GPIO_CRL_CNF4_Msk      (0x3U << GPIO_CRL_CNF4_Pos)
#define GPIO_CRL_CNF4          GPIO_CRL_CNF4_Msk
#define GPIO_CRL_CNF4_0        (0x1U << GPIO_CRL_CNF4_Pos)
#define GPIO_CRL_CNF4_1        (0x2U << GPIO_CRL_CNF4_Pos)
#define GPIO_CRL_MODE5_Pos     (20U)
#define GPIO_CRL_MODE5_Msk     (0x3U << GPIO_CRL_MODE5_Pos)
#define GPIO_CRL_MODE5         GPIO_CRL_MODE5_Msk
#define GPIO_CRL_MODE5_0       (0x1U << GPIO_CRL_MODE5_Pos)
#define GPIO_CRL_MODE5_1       (0x2U << GPIO_CRL_MODE5_Pos)
#define GPIO_CRL_CNF5_Pos      (22U)
#define GPIO_CRL_CNF5_Msk      (0x3U << GPIO_CRL_CNF5_Pos)
#define GPIO_CRL_CNF5          GPIO_CRL_CNF5_Msk
#define GPIO_CRL_CNF5_0        (0x1U << GPIO_CRL_CNF5_Pos)
#define GPIO_CRL_CNF5_1        (0x2U << GPIO_CRL_CNF5_Pos)
#define GPIO_CRL_MODE6_Pos     (24U)
#define GPIO_CRL_MODE6_Msk     (0x3U << GPIO_CRL_MODE6_Pos)
#define GPIO_CRL_MODE6         GPIO_CRL_MODE6_Msk
#define GPIO_CRL_MODE6_0       (0x1U << GPIO_CRL_MODE6_Pos)
#define GPIO_CRL_MODE6_1       (0x2U << GPIO_CRL_MODE6_Pos)
#define GPIO_CRL_CNF6_Pos      (26U)
#define GPIO_CRL_CNF6_Msk      (0x3U << GPIO_CRL_CNF6_Pos)
#define GPIO_CRL_CNF6          GPIO_CRL_CNF6_Msk
#define GPIO_CRL_CNF6_0        (0x1U << GPIO_CRL_CNF6_Pos)
#define GPIO_CRL_CNF6_1        (0x2U << GPIO_CRL_CNF6_Pos)
#define GPIO_CRL_MODE7_Pos     (28U)
#define GPIO_CRL_MODE7_Msk     (0x3U << GPIO_CRL_MODE7_Pos)
#define GPIO_CRL_MODE7         GPIO_CRL_MODE7_Msk
#define GPIO_CRL_MODE7_0       (0x1U << GPIO_CRL_MODE7_Pos)
#define GPIO_CRL_MODE7_1       (0x2U << GPIO_CRL_MODE7_Pos)
#define GPIO_CRL_CNF7_Pos      (30U)
#define GPIO_CRL_CNF7_Msk      (0x3U << GPIO_CRL_CNF7_Pos)
#define GPIO_CRL_CNF7          GPIO_CRL_CNF7_Msk
#define GPIO_CRL_CNF7_0        (0x1U << GPIO_CRL_CNF7_Pos)
#define GPIO_CRL_CNF7_1        (0x2U << GPIO_CRL_CNF7_Pos)


// Bit definitions for GPIO_CRH register
#define GPIO_CRH_MODE8_Pos     (0U)
#define GPIO_CRH_MODE8_Msk     (0x3U << GPIO_CRH_MODE8_Pos)
#define GPIO_CRH_MODE8         GPIO_CRH_MODE8_Msk
#define GPIO_CRH_MODE8_0       (0x1U << GPIO_CRH_MODE8_Pos)
#define GPIO_CRH_MODE8_1       (0x2U << GPIO_CRH_MODE8_Pos)
#define GPIO_CRH_CNF8_Pos      (2U)
#define GPIO_CRH_CNF8_Msk      (0x3U << GPIO_CRH_CNF8_Pos)
#define GPIO_CRH_CNF8          GPIO_CRH_CNF8_Msk
#define GPIO_CRH_CNF8_0        (0x1U << GPIO_CRH_CNF8_Pos)
#define GPIO_CRH_CNF8_1        (0x2U << GPIO_CRH_CNF8_Pos)
#define GPIO_CRH_MODE9_Pos     (4U)
#define GPIO_CRH_MODE9_Msk     (0x3U << GPIO_CRH_MODE9_Pos)
#define GPIO_CRH_MODE9         GPIO_CRH_MODE9_Msk
#define GPIO_CRH_MODE9_0       (0x1U << GPIO_CRH_MODE9_Pos)
#define GPIO_CRH_MODE9_1       (0x2U << GPIO_CRH_MODE9_Pos)
#define GPIO_CRH_CNF9_Pos      (6U)
#define GPIO_CRH_CNF9_Msk      (0x3U << GPIO_CRH_CNF9_Pos)
#define GPIO_CRH_CNF9          GPIO_CRH_CNF9_Msk
#define GPIO_CRH_CNF9_0        (0x1U << GPIO_CRH_CNF9_Pos)
#define GPIO_CRH_CNF9_1        (0x2U << GPIO_CRH_CNF9_Pos)
#define GPIO_CRH_MODE10_Pos    (8U)
#define GPIO_CRH_MODE10_Msk    (0x3U << GPIO_CRH_MODE10_Pos)
#define GPIO_CRH_MODE10        GPIO_CRH_MODE10_Msk
#define GPIO_CRH_MODE10_0      (0x1U << GPIO_CRH_MODE10_Pos)
#define GPIO_CRH_MODE10_1      (0x2U << GPIO_CRH_MODE10_Pos)
#define GPIO_CRH_CNF10_Pos     (10U)
#define GPIO_CRH_CNF10_Msk     (0x3U << GPIO_CRH_CNF10_Pos)
#define GPIO_CRH_CNF10         GPIO_CRH_CNF10_Msk
#define GPIO_CRH_CNF10_0       (0x1U << GPIO_CRH_CNF10_Pos)
#define GPIO_CRH_CNF10_1       (0x2U << GPIO_CRH_CNF10_Pos)
#define GPIO_CRH_MODE11_Pos    (12U)
#define GPIO_CRH_MODE11_Msk    (0x3U << GPIO_CRH_MODE11_Pos)
#define GPIO_CRH_MODE11        GPIO_CRH_MODE11_Msk
#define GPIO_CRH_MODE11_0      (0x1U << GPIO_CRH_MODE11_Pos)
#define GPIO_CRH_MODE11_1      (0x2U << GPIO_CRH_MODE11_Pos)
#define GPIO_CRH_CNF11_Pos     (14U)
#define GPIO_CRH_CNF11_Msk     (0x3U << GPIO_CRH_CNF11_Pos)
#define GPIO_CRH_CNF11         GPIO_CRH_CNF11_Msk
#define GPIO_CRH_CNF11_0       (0x1U << GPIO_CRH_CNF11_Pos)
#define GPIO_CRH_CNF11_1       (0x2U << GPIO_CRH_CNF11_Pos)
#define GPIO_CRH_MODE12_Pos    (16U)
#define GPIO_CRH_MODE12_Msk    (0x3U << GPIO_CRH_MODE12_Pos)
#define GPIO_CRH_MODE12        GPIO_CRH_MODE12_Msk
#define GPIO_CRH_MODE12_0      (0x1U << GPIO_CRH_MODE12_Pos)
#define GPIO_CRH_MODE12_1      (0x2U << GPIO_CRH_MODE12_Pos)
#define GPIO_CRH_CNF12_Pos     (18U)
#define GPIO_CRH_CNF12_Msk     (0x3U << GPIO_CRH_CNF12_Pos)
#define GPIO_CRH_CNF12         GPIO_CRH_CNF12_Msk
#define GPIO_CRH_CNF12_0       (0x1U << GPIO_CRH_CNF12_Pos)
#define GPIO_CRH_CNF12_1       (0x2U << GPIO_CRH_CNF12_Pos)
#define GPIO_CRH_MODE13_Pos    (20U)
#define GPIO_CRH_MODE13_Msk    (0x3U << GPIO_CRH_MODE13_Pos)
#define GPIO_CRH_MODE13        GPIO_CRH_MODE13_Msk
#define GPIO_CRH_MODE13_0      (0x1U << GPIO_CRH_MODE13_Pos)
#define GPIO_CRH_MODE13_1      (0x2U << GPIO_CRH_MODE13_Pos)
#define GPIO_CRH_CNF13_Pos     (22U)
#define GPIO_CRH_CNF13_Msk     (0x3U << GPIO_CRH_CNF13_Pos)
#define GPIO_CRH_CNF13         GPIO_CRH_CNF13_Msk
#define GPIO_CRH_CNF13_0       (0x1U << GPIO_CRH_CNF13_Pos)
#define GPIO_CRH_CNF13_1       (0x2U << GPIO_CRH_CNF13_Pos)
#define GPIO_CRH_MODE14_Pos    (24U)
#define GPIO_CRH_MODE14_Msk    (0x3U << GPIO_CRH_MODE14_Pos)
#define GPIO_CRH_MODE14        GPIO_CRH_MODE14_Msk
#define GPIO_CRH_MODE14_0      (0x1U << GPIO_CRH_MODE14_Pos)
#define GPIO_CRH_MODE14_1      (0x2U << GPIO_CRH_MODE14_Pos)
#define GPIO_CRH_CNF14_Pos     (26U)
#define GPIO_CRH_CNF14_Msk     (0x3U << GPIO_CRH_CNF14_Pos)
#define GPIO_CRH_CNF14         GPIO_CRH_CNF14_Msk
#define GPIO_CRH_CNF14_0       (0x1U << GPIO_CRH_CNF14_Pos)
#define GPIO_CRH_CNF14_1       (0x2U << GPIO_CRH_CNF14_Pos)
#define GPIO_CRH_MODE15_Pos    (28U)
#define GPIO_CRH_MODE15_Msk    (0x3U << GPIO_CRH_MODE15_Pos)
#define GPIO_CRH_MODE15        GPIO_CRH_MODE15_Msk
#define GPIO_CRH_MODE15_0      (0x1U << GPIO_CRH_MODE15_Pos)
#define GPIO_CRH_MODE15_1      (0x2U << GPIO_CRH_MODE15_Pos)
#define GPIO_CRH_CNF15_Pos     (30U)
#define GPIO_CRH_CNF15_Msk     (0x3U << GPIO_CRH_CNF15_Pos)
#define GPIO_CRH_CNF15         GPIO_CRH_CNF15_Msk
#define GPIO_CRH_CNF15_0       (0x1U << GPIO_CRH_CNF15_Pos)
#define GPIO_CRH_CNF15_1       (0x2U << GPIO_CRH_CNF15_Pos)

// Bit definitions for GPIO_IDR register
#define GPIO_IDR_ID0_Pos       (0U)
#define GPIO_IDR_ID0_Msk       (0x1U << GPIO_IDR_ID0_Pos)
#define GPIO_IDR_ID0           GPIO_IDR_ID0_Msk
#define GPIO_IDR_ID1_Pos       (1U)
#define GPIO_IDR_ID1_Msk       (0x1U << GPIO_IDR_ID1_Pos)
#define GPIO_IDR_ID1           GPIO_IDR_ID1_Msk
#define GPIO_IDR_ID2_Pos       (2U)
#define GPIO_IDR_ID2_Msk       (0x1U << GPIO_IDR_ID2_Pos)
#define GPIO_IDR_ID2           GPIO_IDR_ID2_Msk
#define GPIO_IDR_ID3_Pos       (3U)
#define GPIO_IDR_ID3_Msk       (0x1U << GPIO_IDR_ID3_Pos)
#define GPIO_IDR_ID3           GPIO_IDR_ID3_Msk
#define GPIO_IDR_ID4_Pos       (4U)
#define GPIO_IDR_ID4_Msk       (0x1U << GPIO_IDR_ID4_Pos)
#define GPIO_IDR_ID4           GPIO_IDR_ID4_Msk
#define GPIO_IDR_ID5_Pos       (5U)
#define GPIO_IDR_ID5_Msk       (0x1U << GPIO_IDR_ID5_Pos)
#define GPIO_IDR_ID5           GPIO_IDR_ID5_Msk
#define GPIO_IDR_ID6_Pos       (6U)
#define GPIO_IDR_ID6_Msk       (0x1U << GPIO_IDR_ID6_Pos)
#define GPIO_IDR_ID6           GPIO_IDR_ID6_Msk
#define GPIO_IDR_ID7_Pos       (7U)
#define GPIO_IDR_ID7_Msk       (0x1U << GPIO_IDR_ID7_Pos)
#define GPIO_IDR_ID7           GPIO_IDR_ID7_Msk
#define GPIO_IDR_ID8_Pos       (8U)
#define GPIO_IDR_ID8_Msk       (0x1U << GPIO_IDR_ID8_Pos)
#define GPIO_IDR_ID8           GPIO_IDR_ID8_Msk
#define GPIO_IDR_ID9_Pos       (9U)
#define GPIO_IDR_ID9_Msk       (0x1U << GPIO_IDR_ID9_Pos)
#define GPIO_IDR_ID9           GPIO_IDR_ID9_Msk
#define GPIO_IDR_ID10_Pos      (10U)
#define GPIO_IDR_ID10_Msk      (0x1U << GPIO_IDR_ID10_Pos)
#define GPIO_IDR_ID10          GPIO_IDR_ID10_Msk
#define GPIO_IDR_ID11_Pos      (11U)
#define GPIO_IDR_ID11_Msk      (0x1U << GPIO_IDR_ID11_Pos)
#define GPIO_IDR_ID11          GPIO_IDR_ID11_Msk
#define GPIO_IDR_ID12_Pos      (12U)
#define GPIO_IDR_ID12_Msk      (0x1U << GPIO_IDR_ID12_Pos)
#define GPIO_IDR_ID12          GPIO_IDR_ID12_Msk
#define GPIO_IDR_ID13_Pos      (13U)
#define GPIO_IDR_ID13_Msk      (0x1U << GPIO_IDR_ID13_Pos)
#define GPIO_IDR_ID13          GPIO_IDR_ID13_Msk
#define GPIO_IDR_ID14_Pos      (14U)
#define GPIO_IDR_ID14_Msk      (0x1U << GPIO_IDR_ID14_Pos)
#define GPIO_IDR_ID14          GPIO_IDR_ID14_Msk
#define GPIO_IDR_ID15_Pos      (15U)
#define GPIO_IDR_ID15_Msk      (0x1U << GPIO_IDR_ID15_Pos)
#define GPIO_IDR_ID15          GPIO_IDR_ID15_Msk

// Bit definitions for GPIO_ODR register
#define GPIO_ODR_OD0_Pos       (0U)
#define GPIO_ODR_OD0_Msk       (0x1U << GPIO_ODR_OD0_Pos)
#define GPIO_ODR_OD0           GPIO_ODR_OD0_Msk
#define GPIO_ODR_OD1_Pos       (1U)
#define GPIO_ODR_OD1_Msk       (0x1U << GPIO_ODR_OD1_Pos)
#define GPIO_ODR_OD1           GPIO_ODR_OD1_Msk
#define GPIO_ODR_OD2_Pos       (2U)
#define GPIO_ODR_OD2_Msk       (0x1U << GPIO_ODR_OD2_Pos)
#define GPIO_ODR_OD2           GPIO_ODR_OD2_Msk
#define GPIO_ODR_OD3_Pos       (3U)
#define GPIO_ODR_OD3_Msk       (0x1U << GPIO_ODR_OD3_Pos)
#define GPIO_ODR_OD3           GPIO_ODR_OD3_Msk
#define GPIO_ODR_OD4_Pos       (4U)
#define GPIO_ODR_OD4_Msk       (0x1U << GPIO_ODR_OD4_Pos)
#define GPIO_ODR_OD4           GPIO_ODR_OD4_Msk
#define GPIO_ODR_OD5_Pos       (5U)
#define GPIO_ODR_OD5_Msk       (0x1U << GPIO_ODR_OD5_Pos)
#define GPIO_ODR_OD5           GPIO_ODR_OD5_Msk
#define GPIO_ODR_OD6_Pos       (6U)
#define GPIO_ODR_OD6_Msk       (0x1U << GPIO_ODR_OD6_Pos)
#define GPIO_ODR_OD6           GPIO_ODR_OD6_Msk
#define GPIO_ODR_OD7_Pos       (7U)
#define GPIO_ODR_OD7_Msk       (0x1U << GPIO_ODR_OD7_Pos)
#define GPIO_ODR_OD7           GPIO_ODR_OD7_Msk
#define GPIO_ODR_OD8_Pos       (8U)
#define GPIO_ODR_OD8_Msk       (0x1U << GPIO_ODR_OD8_Pos)
#define GPIO_ODR_OD8           GPIO_ODR_OD8_Msk
#define GPIO_ODR_OD9_Pos       (9U)
#define GPIO_ODR_OD9_Msk       (0x1U << GPIO_ODR_OD9_Pos)
#define GPIO_ODR_OD9           GPIO_ODR_OD9_Msk
#define GPIO_ODR_OD10_Pos      (10U)
#define GPIO_ODR_OD10_Msk      (0x1U << GPIO_ODR_OD10_Pos)
#define GPIO_ODR_OD10          GPIO_ODR_OD10_Msk
#define GPIO_ODR_OD11_Pos      (11U)
#define GPIO_ODR_OD11_Msk      (0x1U << GPIO_ODR_OD11_Pos)
#define GPIO_ODR_OD11          GPIO_ODR_OD11_Msk
#define GPIO_ODR_OD12_Pos      (12U)
#define GPIO_ODR_OD12_Msk      (0x1U << GPIO_ODR_OD12_Pos)
#define GPIO_ODR_OD12          GPIO_ODR_OD12_Msk
#define GPIO_ODR_OD13_Pos      (13U)
#define GPIO_ODR_OD13_Msk      (0x1U << GPIO_ODR_OD13_Pos)
#define GPIO_ODR_OD13          GPIO_ODR_OD13_Msk
#define GPIO_ODR_OD14_Pos      (14U)
#define GPIO_ODR_OD14_Msk      (0x1U << GPIO_ODR_OD14_Pos)
#define GPIO_ODR_OD14          GPIO_ODR_OD14_Msk
#define GPIO_ODR_OD15_Pos      (15U)
#define GPIO_ODR_OD15_Msk      (0x1U << GPIO_ODR_OD15_Pos)
#define GPIO_ODR_OD15          GPIO_ODR_OD15_Msk

// Bit definitions for GPIO_BSRR register
#define GPIO_BSRR_BS0_Pos      (0U)
#define GPIO_BSRR_BS0_Msk      (0x1U << GPIO_BSRR_BS0_Pos)
#define GPIO_BSRR_BS0          GPIO_BSRR_BS0_Msk
#define GPIO_BSRR_BS1_Pos      (1U)
#define GPIO_BSRR_BS1_Msk      (0x1U << GPIO_BSRR_BS1_Pos)
#define GPIO_BSRR_BS1          GPIO_BSRR_BS1_Msk
#define GPIO_BSRR_BS2_Pos      (2U)
#define GPIO_BSRR_BS2_Msk      (0x1U << GPIO_BSRR_BS2_Pos)
#define GPIO_BSRR_BS2          GPIO_BSRR_BS2_Msk
#define GPIO_BSRR_BS3_Pos      (3U)
#define GPIO_BSRR_BS3_Msk      (0x1U << GPIO_BSRR_BS3_Pos)
#define GPIO_BSRR_BS3          GPIO_BSRR_BS3_Msk
#define GPIO_BSRR_BS4_Pos      (4U)
#define GPIO_BSRR_BS4_Msk      (0x1U << GPIO_BSRR_BS4_Pos)
#define GPIO_BSRR_BS4          GPIO_BSRR_BS4_Msk
#define GPIO_BSRR_BS5_Pos      (5U)
#define GPIO_BSRR_BS5_Msk      (0x1U << GPIO_BSRR_BS5_Pos)
#define GPIO_BSRR_BS5          GPIO_BSRR_BS5_Msk
#define GPIO_BSRR_BS6_Pos      (6U)
#define GPIO_BSRR_BS6_Msk      (0x1U << GPIO_BSRR_BS6_Pos)
#define GPIO_BSRR_BS6          GPIO_BSRR_BS6_Msk
#define GPIO_BSRR_BS7_Pos      (7U)
#define GPIO_BSRR_BS7_Msk      (0x1U << GPIO_BSRR_BS7_Pos)
#define GPIO_BSRR_BS7          GPIO_BSRR_BS7_Msk
#define GPIO_BSRR_BS8_Pos      (8U)
#define GPIO_BSRR_BS8_Msk      (0x1U << GPIO_BSRR_BS8_Pos)
#define GPIO_BSRR_BS8          GPIO_BSRR_BS8_Msk
#define GPIO_BSRR_BS9_Pos      (9U)
#define GPIO_BSRR_BS9_Msk      (0x1U << GPIO_BSRR_BS9_Pos)
#define GPIO_BSRR_BS9          GPIO_BSRR_BS9_Msk
#define GPIO_BSRR_BS10_Pos     (10U)
#define GPIO_BSRR_BS10_Msk     (0x1U << GPIO_BSRR_BS10_Pos)
#define GPIO_BSRR_BS10         GPIO_BSRR_BS10_Msk
#define GPIO_BSRR_BS11_Pos     (11U)
#define GPIO_BSRR_BS11_Msk     (0x1U << GPIO_BSRR_BS11_Pos)
#define GPIO_BSRR_BS11         GPIO_BSRR_BS11_Msk
#define GPIO_BSRR_BS12_Pos     (12U)
#define GPIO_BSRR_BS12_Msk     (0x1U << GPIO_BSRR_BS12_Pos)
#define GPIO_BSRR_BS12         GPIO_BSRR_BS12_Msk
#define GPIO_BSRR_BS13_Pos     (13U)
#define GPIO_BSRR_BS13_Msk     (0x1U << GPIO_BSRR_BS13_Pos)
#define GPIO_BSRR_BS13         GPIO_BSRR_BS13_Msk
#define GPIO_BSRR_BS14_Pos     (14U)
#define GPIO_BSRR_BS14_Msk     (0x1U << GPIO_BSRR_BS14_Pos)
#define GPIO_BSRR_BS14         GPIO_BSRR_BS14_Msk
#define GPIO_BSRR_BS15_Pos     (15U)
#define GPIO_BSRR_BS15_Msk     (0x1U << GPIO_BSRR_BS15_Pos)
#define GPIO_BSRR_BS15         GPIO_BSRR_BS15_Msk
#define GPIO_BSRR_BR0_Pos      (16U)
#define GPIO_BSRR_BR0_Msk      (0x1U << GPIO_BSRR_BR0_Pos)
#define GPIO_BSRR_BR0          GPIO_BSRR_BR0_Msk
#define GPIO_BSRR_BR1_Pos      (17U)
#define GPIO_BSRR_BR1_Msk      (0x1U << GPIO_BSRR_BR1_Pos)
#define GPIO_BSRR_BR1          GPIO_BSRR_BR1_Msk
#define GPIO_BSRR_BR2_Pos      (18U)
#define GPIO_BSRR_BR2_Msk      (0x1U << GPIO_BSRR_BR2_Pos)
#define GPIO_BSRR_BR2          GPIO_BSRR_BR2_Msk
#define GPIO_BSRR_BR3_Pos      (19U)
#define GPIO_BSRR_BR3_Msk      (0x1U << GPIO_BSRR_BR3_Pos)
#define GPIO_BSRR_BR3          GPIO_BSRR_BR3_Msk
#define GPIO_BSRR_BR4_Pos      (20U)
#define GPIO_BSRR_BR4_Msk      (0x1U << GPIO_BSRR_BR4_Pos)
#define GPIO_BSRR_BR4          GPIO_BSRR_BR4_Msk
#define GPIO_BSRR_BR5_Pos      (21U)
#define GPIO_BSRR_BR5_Msk      (0x1U << GPIO_BSRR_BR5_Pos)
#define GPIO_BSRR_BR5          GPIO_BSRR_BR5_Msk
#define GPIO_BSRR_BR6_Pos      (22U)
#define GPIO_BSRR_BR6_Msk      (0x1U << GPIO_BSRR_BR6_Pos)
#define GPIO_BSRR_BR6          GPIO_BSRR_BR6_Msk
#define GPIO_BSRR_BR7_Pos      (23U)
#define GPIO_BSRR_BR7_Msk      (0x1U << GPIO_BSRR_BR7_Pos)
#define GPIO_BSRR_BR7          GPIO_BSRR_BR7_Msk
#define GPIO_BSRR_BR8_Pos      (24U)
#define GPIO_BSRR_BR8_Msk      (0x1U << GPIO_BSRR_BR8_Pos)
#define GPIO_BSRR_BR8          GPIO_BSRR_BR8_Msk
#define GPIO_BSRR_BR9_Pos      (25U)
#define GPIO_BSRR_BR9_Msk      (0x1U << GPIO_BSRR_BR9_Pos)
#define GPIO_BSRR_BR9          GPIO_BSRR_BR9_Msk
#define GPIO_BSRR_BR10_Pos     (26U)
#define GPIO_BSRR_BR10_Msk     (0x1U << GPIO_BSRR_BR10_Pos)
#define GPIO_BSRR_BR10         GPIO_BSRR_BR10_Msk
#define GPIO_BSRR_BR11_Pos     (27U)
#define GPIO_BSRR_BR11_Msk     (0x1U << GPIO_BSRR_BR11_Pos)
#define GPIO_BSRR_BR11         GPIO_BSRR_BR11_Msk
#define GPIO_BSRR_BR12_Pos     (28U)
#define GPIO_BSRR_BR12_Msk     (0x1U << GPIO_BSRR_BR12_Pos)
#define GPIO_BSRR_BR12         GPIO_BSRR_BR12_Msk
#define GPIO_BSRR_BR13_Pos     (29U)
#define GPIO_BSRR_BR13_Msk     (0x1U << GPIO_BSRR_BR13_Pos)
#define GPIO_BSRR_BR13         GPIO_BSRR_BR13_Msk
#define GPIO_BSRR_BR14_Pos     (30U)
#define GPIO_BSRR_BR14_Msk     (0x1U << GPIO_BSRR_BR14_Pos)
#define GPIO_BSRR_BR14         GPIO_BSRR_BR14_Msk
#define GPIO_BSRR_BR15_Pos     (31U)
#define GPIO_BSRR_BR15_Msk     (0x1U << GPIO_BSRR_BR15_Pos)
#define GPIO_BSRR_BR15         GPIO_BSRR_BR15_Msk

// Bit definitions for GPIO_BRR register
#define GPIO_BRR_BR0_Pos       (0U)
#define GPIO_BRR_BR0_Msk       (0x1U << GPIO_BRR_BR0_Pos)
#define GPIO_BRR_BR0           GPIO_BRR_BR0_Msk
#define GPIO_BRR_BR1_Pos       (1U)
#define GPIO_BRR_BR1_Msk       (0x1U << GPIO_BRR_BR1_Pos)
#define GPIO_BRR_BR1           GPIO_BRR_BR1_Msk
#define GPIO_BRR_BR2_Pos       (2U)
#define GPIO_BRR_BR2_Msk       (0x1U << GPIO_BRR_BR2_Pos)
#define GPIO_BRR_BR2           GPIO_BRR_BR2_Msk
#define GPIO_BRR_BR3_Pos       (3U)
#define GPIO_BRR_BR3_Msk       (0x1U << GPIO_BRR_BR3_Pos)
#define GPIO_BRR_BR3           GPIO_BRR_BR3_Msk
#define GPIO_BRR_BR4_Pos       (4U)
#define GPIO_BRR_BR4_Msk       (0x1U << GPIO_BRR_BR4_Pos)
#define GPIO_BRR_BR4           GPIO_BRR_BR4_Msk
#define GPIO_BRR_BR5_Pos       (5U)
#define GPIO_BRR_BR5_Msk       (0x1U << GPIO_BRR_BR5_Pos)
#define GPIO_BRR_BR5           GPIO_BRR_BR5_Msk
#define GPIO_BRR_BR6_Pos       (6U)
#define GPIO_BRR_BR6_Msk       (0x1U << GPIO_BRR_BR6_Pos)
#define GPIO_BRR_BR6           GPIO_BRR_BR6_Msk
#define GPIO_BRR_BR7_Pos       (7U)
#define GPIO_BRR_BR7_Msk       (0x1U << GPIO_BRR_BR7_Pos)
#define GPIO_BRR_BR7           GPIO_BRR_BR7_Msk
#define GPIO_BRR_BR8_Pos       (8U)
#define GPIO_BRR_BR8_Msk       (0x1U << GPIO_BRR_BR8_Pos)
#define GPIO_BRR_BR8           GPIO_BRR_BR8_Msk
#define GPIO_BRR_BR9_Pos       (9U)
#define GPIO_BRR_BR9_Msk       (0x1U << GPIO_BRR_BR9_Pos)
#define GPIO_BRR_BR9           GPIO_BRR_BR9_Msk
#define GPIO_BRR_BR10_Pos      (10U)
#define GPIO_BRR_BR10_Msk      (0x1U << GPIO_BRR_BR10_Pos)
#define GPIO_BRR_BR10          GPIO_BRR_BR10_Msk
#define GPIO_BRR_BR11_Pos      (11U)
#define GPIO_BRR_BR11_Msk      (0x1U << GPIO_BRR_BR11_Pos)
#define GPIO_BRR_BR11          GPIO_BRR_BR11_Msk
#define GPIO_BRR_BR12_Pos      (12U)
#define GPIO_BRR_BR12_Msk      (0x1U << GPIO_BRR_BR12_Pos)
#define GPIO_BRR_BR12          GPIO_BRR_BR12_Msk
#define GPIO_BRR_BR13_Pos      (13U)
#define GPIO_BRR_BR13_Msk      (0x1U << GPIO_BRR_BR13_Pos)
#define GPIO_BRR_BR13          GPIO_BRR_BR13_Msk
#define GPIO_BRR_BR14_Pos      (14U)
#define GPIO_BRR_BR14_Msk      (0x1U << GPIO_BRR_BR14_Pos)
#define GPIO_BRR_BR14          GPIO_BRR_BR14_Msk
#define GPIO_BRR_BR15_Pos      (15U)
#define GPIO_BRR_BR15_Msk      (0x1U << GPIO_BRR_BR15_Pos)
#define GPIO_BRR_BR15          GPIO_BRR_BR15_Msk

// Bit definitions for GPIO_LCKR register
#define GPIO_LCKR_LCK0_Pos     (0U)
#define GPIO_LCKR_LCK0_Msk     (0x1U << GPIO_LCKR_LCK0_Pos)
#define GPIO_LCKR_LCK0         GPIO_LCKR_LCK0_Msk
#define GPIO_LCKR_LCK1_Pos     (1U)
#define GPIO_LCKR_LCK1_Msk     (0x1U << GPIO_LCKR_LCK1_Pos)
#define GPIO_LCKR_LCK1         GPIO_LCKR_LCK1_Msk
#define GPIO_LCKR_LCK2_Pos     (2U)
#define GPIO_LCKR_LCK2_Msk     (0x1U << GPIO_LCKR_LCK2_Pos)
#define GPIO_LCKR_LCK2         GPIO_LCKR_LCK2_Msk
#define GPIO_LCKR_LCK3_Pos     (3U)
#define GPIO_LCKR_LCK3_Msk     (0x1U << GPIO_LCKR_LCK3_Pos)
#define GPIO_LCKR_LCK3         GPIO_LCKR_LCK3_Msk
#define GPIO_LCKR_LCK4_Pos     (4U)
#define GPIO_LCKR_LCK4_Msk     (0x1U << GPIO_LCKR_LCK4_Pos)
#define GPIO_LCKR_LCK4         GPIO_LCKR_LCK4_Msk
#define GPIO_LCKR_LCK5_Pos     (5U)
#define GPIO_LCKR_LCK5_Msk     (0x1U << GPIO_LCKR_LCK5_Pos)
#define GPIO_LCKR_LCK5         GPIO_LCKR_LCK5_Msk
#define GPIO_LCKR_LCK6_Pos     (6U)
#define GPIO_LCKR_LCK6_Msk     (0x1U << GPIO_LCKR_LCK6_Pos)
#define GPIO_LCKR_LCK6         GPIO_LCKR_LCK6_Msk
#define GPIO_LCKR_LCK7_Pos     (7U)
#define GPIO_LCKR_LCK7_Msk     (0x1U << GPIO_LCKR_LCK7_Pos)
#define GPIO_LCKR_LCK7         GPIO_LCKR_LCK7_Msk
#define GPIO_LCKR_LCK8_Pos     (8U)
#define GPIO_LCKR_LCK8_Msk     (0x1U << GPIO_LCKR_LCK8_Pos)
#define GPIO_LCKR_LCK8         GPIO_LCKR_LCK8_Msk
#define GPIO_LCKR_LCK9_Pos     (9U)
#define GPIO_LCKR_LCK9_Msk     (0x1U << GPIO_LCKR_LCK9_Pos)
#define GPIO_LCKR_LCK9         GPIO_LCKR_LCK9_Msk
#define GPIO_LCKR_LCK10_Pos    (10U)
#define GPIO_LCKR_LCK10_Msk    (0x1U << GPIO_LCKR_LCK10_Pos)
#define GPIO_LCKR_LCK10        GPIO_LCKR_LCK10_Msk
#define GPIO_LCKR_LCK11_Pos    (11U)
#define GPIO_LCKR_LCK11_Msk    (0x1U << GPIO_LCKR_LCK11_Pos)
#define GPIO_LCKR_LCK11        GPIO_LCKR_LCK11_Msk
#define GPIO_LCKR_LCK12_Pos    (12U)
#define GPIO_LCKR_LCK12_Msk    (0x1U << GPIO_LCKR_LCK12_Pos)
#define GPIO_LCKR_LCK12        GPIO_LCKR_LCK12_Msk
#define GPIO_LCKR_LCK13_Pos    (13U)
#define GPIO_LCKR_LCK13_Msk    (0x1U << GPIO_LCKR_LCK13_Pos)
#define GPIO_LCKR_LCK13        GPIO_LCKR_LCK13_Msk
#define GPIO_LCKR_LCK14_Pos    (14U)
#define GPIO_LCKR_LCK14_Msk    (0x1U << GPIO_LCKR_LCK14_Pos)
#define GPIO_LCKR_LCK14        GPIO_LCKR_LCK14_Msk
#define GPIO_LCKR_LCK15_Pos    (15U)
#define GPIO_LCKR_LCK15_Msk    (0x1U << GPIO_LCKR_LCK15_Pos)
#define GPIO_LCKR_LCK15        GPIO_LCKR_LCK15_Msk
#define GPIO_LCKR_LCKK_Pos     (16U)
#define GPIO_LCKR_LCKK_Msk     (0x1U << GPIO_LCKR_LCKK_Pos)
#define GPIO_LCKR_LCKK         GPIO_LCKR_LCKK_Msk

// Bit definitions for GPIO_AFRL and GPIO_AFRH registers
#define GPIO_AFRL_AFSEL0_Pos   (0U)
#define GPIO_AFRL_AFSEL0_Msk   (0xFU << GPIO_AFRL_AFSEL0_Pos)
#define GPIO_AFRL_AFSEL0       GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFSEL1_Pos   (4U)
#define GPIO_AFRL_AFSEL1_Msk   (0xFU << GPIO_AFRL_AFSEL1_Pos)
#define GPIO_AFRL_AFSEL1       GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFSEL2_Pos   (8U)
#define GPIO_AFRL_AFSEL2_Msk   (0xFU << GPIO_AFRL_AFSEL2_Pos)
#define GPIO_AFRL_AFSEL2       GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFSEL3_Pos   (12U)
#define GPIO_AFRL_AFSEL3_Msk   (0xFU << GPIO_AFRL_AFSEL3_Pos)
#define GPIO_AFRL_AFSEL3       GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFSEL4_Pos   (16U)
#define GPIO_AFRL_AFSEL4_Msk   (0xFU << GPIO_AFRL_AFSEL4_Pos)
#define GPIO_AFRL_AFSEL4       GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFSEL5_Pos   (20U)
#define GPIO_AFRL_AFSEL5_Msk   (0xFU << GPIO_AFRL_AFSEL5_Pos)
#define GPIO_AFRL_AFSEL5       GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFSEL6_Pos   (24U)
#define GPIO_AFRL_AFSEL6_Msk   (0xFU << GPIO_AFRL_AFSEL6_Pos)
#define GPIO_AFRL_AFSEL6       GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFSEL7_Pos   (28U)
#define GPIO_AFRL_AFSEL7_Msk   (0xFU << GPIO_AFRL_AFSEL7_Pos)
#define GPIO_AFRL_AFSEL7       GPIO_AFRL_AFSEL7_Msk
#define GPIO_AFRH_AFSEL8_Pos   (0U)
#define GPIO_AFRH_AFSEL8_Msk   (0xFU << GPIO_AFRH_AFSEL8_Pos)
#define GPIO_AFRH_AFSEL8       GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFSEL9_Pos   (4U)
#define GPIO_AFRH_AFSEL9_Msk   (0xFU << GPIO_AFRH_AFSEL9_Pos)
#define GPIO_AFRH_AFSEL9       GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFSEL10_Pos  (8U)
#define GPIO_AFRH_AFSEL10_Msk  (0xFU << GPIO_AFRH_AFSEL10_Pos)
#define GPIO_AFRH_AFSEL10      GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFSEL11_Pos  (12U)
#define GPIO_AFRH_AFSEL11_Msk  (0xFU << GPIO_AFRH_AFSEL11_Pos)
#define GPIO_AFRH_AFSEL11      GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFSEL12_Pos  (16U)
#define GPIO_AFRH_AFSEL12_Msk  (0xFU << GPIO_AFRH_AFSEL12_Pos)
#define GPIO_AFRH_AFSEL12      GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFSEL13_Pos  (20U)
#define GPIO_AFRH_AFSEL13_Msk  (0xFU << GPIO_AFRH_AFSEL13_Pos)
#define GPIO_AFRH_AFSEL13      GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFSEL14_Pos  (24U)
#define GPIO_AFRH_AFSEL14_Msk  (0xFU << GPIO_AFRH_AFSEL14_Pos)
#define GPIO_AFRH_AFSEL14      GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFSEL15_Pos  (28U)
#define GPIO_AFRH_AFSEL15_Msk  (0xFU << GPIO_AFRH_AFSEL15_Pos)
#define GPIO_AFRH_AFSEL15      GPIO_AFRH_AFSEL15_Msk



#endif /* INC_103_GPIO_H_ */
