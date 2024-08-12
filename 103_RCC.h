/*
 * 103_RCC.h
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */

#ifndef INC_103_RCC_H_
#define INC_103_RCC_H_


#include <stdint.h>

// Base address for RCC registers
#define RCC_BASE        0x40021000

// Register offsets from RCC base address
#define RCC_CR_OFFSET       0x00
#define RCC_CFGR_OFFSET     0x04
#define RCC_CIR_OFFSET      0x08
#define RCC_APB2RSTR_OFFSET 0x0C
#define RCC_APB1RSTR_OFFSET 0x10
#define RCC_AHBENR_OFFSET   0x14
#define RCC_APB2ENR_OFFSET  0x18
#define RCC_APB1ENR_OFFSET  0x1C
#define RCC_BDCR_OFFSET     0x20
#define RCC_CSR_OFFSET      0x24

// Register addresses
#define RCC_CR          (*(volatile uint32_t *)(RCC_BASE + RCC_CR_OFFSET))
#define RCC_CFGR        (*(volatile uint32_t *)(RCC_BASE + RCC_CFGR_OFFSET))
#define RCC_CIR         (*(volatile uint32_t *)(RCC_BASE + RCC_CIR_OFFSET))
#define RCC_APB2RSTR    (*(volatile uint32_t *)(RCC_BASE + RCC_APB2RSTR_OFFSET))
#define RCC_APB1RSTR    (*(volatile uint32_t *)(RCC_BASE + RCC_APB1RSTR_OFFSET))
#define RCC_AHBENR      (*(volatile uint32_t *)(RCC_BASE + RCC_AHBENR_OFFSET))
#define RCC_APB2ENR     (*(volatile uint32_t *)(RCC_BASE + RCC_APB2ENR_OFFSET))
#define RCC_APB1ENR     (*(volatile uint32_t *)(RCC_BASE + RCC_APB1ENR_OFFSET))
#define RCC_BDCR        (*(volatile uint32_t *)(RCC_BASE + RCC_BDCR_OFFSET))
#define RCC_CSR         (*(volatile uint32_t *)(RCC_BASE + RCC_CSR_OFFSET))

// Bit definitions for RCC_CR register
#define RCC_CR_HSION         (1 << 0)
#define RCC_CR_HSIRDY        (1 << 1)
#define RCC_CR_HSEON         (1 << 16)
#define RCC_CR_HSERDY        (1 << 17)
#define RCC_CR_HSEBYP        (1 << 18)
#define RCC_CR_CSSON         (1 << 19)
#define RCC_CR_PLLON         (1 << 24)
#define RCC_CR_PLLRDY        (1 << 25)

// Bit definitions for RCC_CFGR register
#define RCC_CFGR_SW_HSI      (0 << 0)
#define RCC_CFGR_SW_HSE      (1 << 0)
#define RCC_CFGR_SW_PLL      (2 << 0)
#define RCC_CFGR_SWS_HSI     (0 << 2)
#define RCC_CFGR_SWS_HSE     (1 << 2)
#define RCC_CFGR_SWS_PLL     (2 << 2)
#define RCC_CFGR_HPRE_DIV1   (0 << 4)
#define RCC_CFGR_HPRE_DIV2   (8 << 4)
#define RCC_CFGR_HPRE_DIV4   (9 << 4)
#define RCC_CFGR_HPRE_DIV8   (10 << 4)
#define RCC_CFGR_HPRE_DIV16  (11 << 4)
#define RCC_CFGR_HPRE_DIV64  (12 << 4)
#define RCC_CFGR_HPRE_DIV128 (13 << 4)
#define RCC_CFGR_HPRE_DIV256 (14 << 4)
#define RCC_CFGR_HPRE_DIV512 (15 << 4)
#define RCC_CFGR_PPRE1_DIV1  (0 << 8)
#define RCC_CFGR_PPRE1_DIV2  (4 << 8)
#define RCC_CFGR_PPRE1_DIV4  (5 << 8)
#define RCC_CFGR_PPRE1_DIV8  (6 << 8)
#define RCC_CFGR_PPRE1_DIV16 (7 << 8)
#define RCC_CFGR_PPRE2_DIV1  (0 << 11)
#define RCC_CFGR_PPRE2_DIV2  (4 << 11)
#define RCC_CFGR_PPRE2_DIV4  (5 << 11)
#define RCC_CFGR_PPRE2_DIV8  (6 << 11)
#define RCC_CFGR_PPRE2_DIV16 (7 << 11)
#define RCC_CFGR_PLLSRC_HSI_DIV2 (0 << 16)
#define RCC_CFGR_PLLSRC_HSE      (1 << 16)
#define RCC_CFGR_PLLXTPRE_HSE    (0 << 17)
#define RCC_CFGR_PLLXTPRE_HSE_DIV2 (1 << 17)
#define RCC_CFGR_PLLMUL2     (0 << 18)
#define RCC_CFGR_PLLMUL3     (1 << 18)
#define RCC_CFGR_PLLMUL4     (2 << 18)
#define RCC_CFGR_PLLMUL5     (3 << 18)
#define RCC_CFGR_PLLMUL6     (4 << 18)
#define RCC_CFGR_PLLMUL7     (5 << 18)
#define RCC_CFGR_PLLMUL8     (6 << 18)
#define RCC_CFGR_PLLMUL9     (7 << 18)
#define RCC_CFGR_PLLMUL10    (8 << 18)
#define RCC_CFGR_PLLMUL11    (9 << 18)
#define RCC_CFGR_PLLMUL12    (10 << 18)
#define RCC_CFGR_PLLMUL13    (11 << 18)
#define RCC_CFGR_PLLMUL14    (12 << 18)
#define RCC_CFGR_PLLMUL15    (13 << 18)
#define RCC_CFGR_PLLMUL16    (14 << 18)

// Bit definitions for RCC_CIR register
#define RCC_CIR_LSIRDYF      (1 << 0)
#define RCC_CIR_LSERDYF      (1 << 1)
#define RCC_CIR_HSIRDYF      (1 << 2)
#define RCC_CIR_HSERDYF      (1 << 3)
#define RCC_CIR_PLLRDYF      (1 << 4)
#define RCC_CIR_CSSF         (1 << 7)
#define RCC_CIR_LSIRDYIE     (1 << 8)
#define RCC_CIR_LSERDYIE     (1 << 9)
#define RCC_CIR_HSIRDYIE     (1 << 10)
#define RCC_CIR_HSERDYIE     (1 << 11)
#define RCC_CIR_PLLRDYIE     (1 << 12)
#define RCC_CIR_LSIRDYC      (1 << 16)
#define RCC_CIR_LSERDYC      (1 << 17)
#define RCC_CIR_HSIRDYC      (1 << 18)
#define RCC_CIR_HSERDYC      (1 << 19)
#define RCC_CIR_PLLRDYC      (1 << 20)
#define RCC_CIR_CSSC         (1 << 23)

// Bit definitions for RCC_APB2RSTR register
#define RCC_APB2RSTR_AFIORST  (1 << 0)
#define RCC_APB2RSTR_IOPARST  (1 << 2)
#define RCC_APB2RSTR_IOPBRST  (1 << 3)
#define RCC_APB2RSTR_IOPCRST  (1 << 4)
#define RCC_APB2RSTR_IOPDRST  (1 << 5)
#define RCC_APB2RSTR_IOPERST  (1 << 6)
#define RCC_APB2RSTR_ADC1RST  (1 << 9)
#define RCC_APB2RSTR_ADC2RST  (1 << 10)
#define RCC_APB2RSTR_TIM1RST  (1 << 11)
#define RCC_APB2RSTR_SPI1RST  (1 << 12)
#define RCC_APB2RSTR_USART1RST (1 << 14)

// Bit definitions for RCC_APB1RSTR register
#define RCC_APB1RSTR_TIM2RST  (1 << 0)
#define RCC_APB1RSTR_TIM3RST  (1 << 1)
#define RCC_APB1RSTR_TIM4RST  (1 << 2)
#define RCC_APB1RSTR_TIM5RST  (1 << 3)
#define RCC_APB1RSTR_TIM6RST  (1 << 4)
#define RCC_APB1RSTR_TIM7RST  (1 << 5)
#define RCC_APB1RSTR_WWDGRST  (1 << 11)
#define RCC_APB1RSTR_SPI2RST  (1 << 14)
#define RCC_APB1RSTR_SPI3RST  (1 << 15)
#define RCC_APB1RSTR_USART2RST (1 << 17)
#define RCC_APB1RSTR_USART3RST (1 << 18)
#define RCC_APB1RSTR_USART4RST (1 << 19)
#define RCC_APB1RSTR_USART5RST (1 << 20)
#define RCC_APB1RSTR_I2C1RST  (1 << 21)
#define RCC_APB1RSTR_I2C2RST  (1 << 22)
#define RCC_APB1RSTR_USBRST   (1 << 23)
#define RCC_APB1RSTR_CAN1RST  (1 << 25)
#define RCC_APB1RSTR_CAN2RST  (1 << 26)
#define RCC_APB1RSTR_BKPRST   (1 << 27)
#define RCC_APB1RSTR_PWRRST   (1 << 28)
#define RCC_APB1RSTR_DACRST   (1 << 29)

// Bit definitions for RCC_AHBENR register
#define RCC_AHBENR_DMA1EN     (1 << 0)
#define RCC_AHBENR_DMA2EN     (1 << 1)
#define RCC_AHBENR_SRAMEN     (1 << 2)
#define RCC_AHBENR_FLITFEN    (1 << 4)
#define RCC_AHBENR_CRCEN      (1 << 6)
#define RCC_AHBENR_FSMCEN     (1 << 8)
#define RCC_AHBENR_SDIOEN     (1 << 10)

// Bit definitions for RCC_APB2ENR register
#define RCC_APB2ENR_AFIOEN    (1 << 0)
#define RCC_APB2ENR_IOPAEN    (1 << 2)
#define RCC_APB2ENR_IOPBEN    (1 << 3)
#define RCC_APB2ENR_IOPCEN    (1 << 4)
#define RCC_APB2ENR_IOPDEN    (1 << 5)
#define RCC_APB2ENR_IOPEEN    (1 << 6)
#define RCC_APB2ENR_ADC1EN    (1 << 9)
#define RCC_APB2ENR_ADC2EN    (1 << 10)
#define RCC_APB2ENR_TIM1EN    (1 << 11)
#define RCC_APB2ENR_SPI1EN    (1 << 12)
#define RCC_APB2ENR_USART1EN  (1 << 14)

// Bit definitions for RCC_APB1ENR register
#define RCC_APB1ENR_TIM2EN    (1 << 0)
#define RCC_APB1ENR_TIM3EN    (1 << 1)
#define RCC_APB1ENR_TIM4EN    (1 << 2)
#define RCC_APB1ENR_TIM5EN    (1 << 3)
#define RCC_APB1ENR_TIM6EN    (1 << 4)
#define RCC_APB1ENR_TIM7EN    (1 << 5)
#define RCC_APB1ENR_WWDGEN    (1 << 11)
#define RCC_APB1ENR_SPI2EN    (1 << 14)
#define RCC_APB1ENR_SPI3EN    (1 << 15)
#define RCC_APB1ENR_USART2EN  (1 << 17)
#define RCC_APB1ENR_USART3EN  (1 << 18)
#define RCC_APB1ENR_USART4EN  (1 << 19)
#define RCC_APB1ENR_USART5EN  (1 << 20)
#define RCC_APB1ENR_I2C1EN    (1 << 21)
#define RCC_APB1ENR_I2C2EN    (1 << 22)
#define RCC_APB1ENR_USBEN     (1 << 23)
#define RCC_APB1ENR_CAN1EN    (1 << 25)
#define RCC_APB1ENR_CAN2EN    (1 << 26)
#define RCC_APB1ENR_BKPEN     (1 << 27)
#define RCC_APB1ENR_PWREN     (1 << 28)
#define RCC_APB1ENR_DACEN     (1 << 29)

// Bit definitions for RCC_BDCR register
#define RCC_BDCR_LSEON        (1 << 0)
#define RCC_BDCR_LSERDY       (1 << 1)
#define RCC_BDCR_LSEBYP       (1 << 2)
#define RCC_BDCR_RTCSEL_LSE   (1 << 8)
#define RCC_BDCR_RTCSEL_LSI   (2 << 8)
#define RCC_BDCR_RTCSEL_HSE   (3 << 8)
#define RCC_BDCR_RTCEN        (1 << 15)
#define RCC_BDCR_BDRST        (1 << 16)

// Bit definitions for RCC_CSR register
#define RCC_CSR_LSION         (1 << 0)
#define RCC_CSR_LSIRDY        (1 << 1)
#define RCC_CSR_RMVF          (1 << 24)
#define RCC_CSR_PINRSTF       (1 << 26)
#define RCC_CSR_PORRSTF       (1 << 27)
#define RCC_CSR_SFTRSTF       (1 << 28)
#define RCC_CSR_IWDGRSTF      (1 << 29)
#define RCC_CSR_WWDGRSTF      (1 << 30)
#define RCC_CSR_LPWRRSTF      (1 << 31)


#endif /* INC_103_RCC_H_ */
