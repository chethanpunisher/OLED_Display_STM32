/*
 * 103_ADC.h
 *
 *  Created on: Jun 9, 2024
 *      Author: cheth
 */

#ifndef INC_103_ADC_H_
#define INC_103_ADC_H_

#include <stdint.h>

// ADC register structure
typedef struct {
    volatile uint32_t SR;     // Status register
    volatile uint32_t CR1;    // Control register 1
    volatile uint32_t CR2;    // Control register 2
    volatile uint32_t SMPR1;  // Sample time register 1
    volatile uint32_t SMPR2;  // Sample time register 2
    volatile uint32_t JOFR1;  // Injected channel data offset register 1
    volatile uint32_t JOFR2;  // Injected channel data offset register 2
    volatile uint32_t JOFR3;  // Injected channel data offset register 3
    volatile uint32_t JOFR4;  // Injected channel data offset register 4
    volatile uint32_t HTR;    // Watchdog higher threshold register
    volatile uint32_t LTR;    // Watchdog lower threshold register
    volatile uint32_t SQR1;   // Regular sequence register 1
    volatile uint32_t SQR2;   // Regular sequence register 2
    volatile uint32_t SQR3;   // Regular sequence register 3
    volatile uint32_t JSQR;   // Injected sequence register
    volatile uint32_t JDR1;   // Injected data register 1
    volatile uint32_t JDR2;   // Injected data register 2
    volatile uint32_t JDR3;   // Injected data register 3
    volatile uint32_t JDR4;   // Injected data register 4
    volatile uint32_t DR;     // Regular data register
} ADC_TypeDef;

// Base addresses for ADC peripherals
#define ADC1_BASE           0x40012400U
#define ADC2_BASE           0x40012800U

// Pointers to ADC peripherals
#define ADC1                ((ADC_TypeDef *) ADC1_BASE)
#define ADC2                ((ADC_TypeDef *) ADC2_BASE)

// Bit definitions for ADC_SR register
#define ADC_SR_AWD          (1U << 0)   // Analog watchdog flag
#define ADC_SR_EOC          (1U << 1)   // End of conversion
#define ADC_SR_JEOC         (1U << 2)   // Injected channel end of conversion
#define ADC_SR_JSTRT        (1U << 3)   // Injected channel start flag
#define ADC_SR_STRT         (1U << 4)   // Regular channel start flag

// Bit definitions for ADC_CR1 register
#define ADC_CR1_AWDCH       (0x1F << 0) // AWDCH[4:0] bits (Analog watchdog channel select bits)
#define ADC_CR1_EOCIE       (1U << 5)   // Interrupt enable for EOC
#define ADC_CR1_AWDIE       (1U << 6)   // Analog watchdog interrupt enable
#define ADC_CR1_JEOCIE      (1U << 7)   // Interrupt enable for injected channels
#define ADC_CR1_SCAN        (1U << 8)   // Scan mode
#define ADC_CR1_AWDSGL      (1U << 9)   // Enable the watchdog on a single channel in scan mode
#define ADC_CR1_JAUTO       (1U << 10)  // Automatic injected group conversion
#define ADC_CR1_DISCEN      (1U << 11)  // Discontinuous mode on regular channels
#define ADC_CR1_JDISCEN     (1U << 12)  // Discontinuous mode on injected channels
#define ADC_CR1_DISCNUM     (0x7 << 13) // DISCNUM[2:0] bits (Discontinuous mode channel count)
#define ADC_CR1_DUALMOD     (0xF << 16) // DUALMOD[3:0] bits (Dual mode selection)
#define ADC_CR1_JAWDEN      (1U << 22)  // Analog watchdog enable on injected channels
#define ADC_CR1_AWDEN       (1U << 23)  // Analog watchdog enable on regular channels

// Bit definitions for ADC_CR2 register
#define ADC_CR2_ADON        (1U << 0)   // A/D Converter ON / OFF
#define ADC_CR2_CONT        (1U << 1)   // Continuous conversion
#define ADC_CR2_CAL         (1U << 2)   // A/D Calibration
#define ADC_CR2_RSTCAL      (1U << 3)   // Reset calibration
#define ADC_CR2_DMA         (1U << 8)   // Direct memory access mode
#define ADC_CR2_ALIGN       (1U << 11)  // Data alignment
#define ADC_CR2_JEXTSEL     (0x7 << 12) // JEXTSEL[2:0] bits (External event select for injected group)
#define ADC_CR2_JEXTTRIG    (1U << 15)  // External trigger conversion mode for injected channels
#define ADC_CR2_EXTSEL      (0x7 << 17) // EXTSEL[2:0] bits (External event select for regular group)
#define ADC_CR2_EXTTRIG     (1U << 20)  // External trigger conversion mode for regular channels
#define ADC_CR2_JSWSTART    (1U << 21)  // Start conversion of injected channels
#define ADC_CR2_SWSTART     (1U << 22)  // Start conversion of regular channels
#define ADC_CR2_TSVREFE     (1U << 23)  // Temperature sensor and VREFINT enable

// Bit definitions for ADC_SMPR1 register
#define ADC_SMPR1_SMP10     (0x7 << 0)  // SMP10[2:0] bits (Channel 10 Sample time selection)
#define ADC_SMPR1_SMP11     (0x7 << 3)  // SMP11[2:0] bits (Channel 11 Sample time selection)
#define ADC_SMPR1_SMP12     (0x7 << 6)  // SMP12[2:0] bits (Channel 12 Sample time selection)
#define ADC_SMPR1_SMP13     (0x7 << 9)  // SMP13[2:0] bits (Channel 13 Sample time selection)
#define ADC_SMPR1_SMP14     (0x7 << 12) // SMP14[2:0] bits (Channel 14 Sample time selection)
#define ADC_SMPR1_SMP15     (0x7 << 15) // SMP15[2:0] bits (Channel 15 Sample time selection)
#define ADC_SMPR1_SMP16     (0x7 << 18) // SMP16[2:0] bits (Channel 16 Sample time selection)
#define ADC_SMPR1_SMP17     (0x7 << 21) // SMP17[2:0] bits (Channel 17 Sample time selection)

// Bit definitions for ADC_SMPR2 register
#define ADC_SMPR2_SMP0      (0x7 << 0)  // SMP0[2:0] bits (Channel 0 Sample time selection)
#define ADC_SMPR2_SMP1      (0x7 << 3)  // SMP1[2:0] bits (Channel 1 Sample time selection)
#define ADC_SMPR2_SMP2      (0x7 << 6)  // SMP2[2:0] bits (Channel 2 Sample time selection)
#define ADC_SMPR2_SMP3      (0x7 << 9)  // SMP3[2:0] bits (Channel 3 Sample time selection)
#define ADC_SMPR2_SMP4      (0x7 << 12) // SMP4[2:0] bits (Channel 4 Sample time selection)
#define ADC_SMPR2_SMP5      (0x7 << 15) // SMP5[2:0] bits (Channel 5 Sample time selection)
#define ADC_SMPR2_SMP6      (0x7 << 18) // SMP6[2:0] bits (Channel 6 Sample time selection)
#define ADC_SMPR2_SMP7      (0x7 << 21) // SMP7[2:0] bits (Channel 7 Sample time selection)
#define ADC_SMPR2_SMP8      (0x7 << 24) // SMP8[2:0] bits (Channel 8 Sample time selection)
#define ADC_SMPR2_SMP9      (0x7 << 27) // SMP9[2:0] bits (Channel 9 Sample time selection)

// Bit definitions for ADC_JOFRx registers
#define ADC_JOFR1_JOFFSET1  (0xFFF << 0) // Data offset for injected channel 1
#define ADC_JOFR2_JOFFSET2  (0xFFF << 0) // Data offset for injected channel 2
#define ADC_JOFR3_JOFFSET3  (0xFFF << 0) // Data offset for injected channel 3
#define ADC_JOFR4_JOFFSET4  (0xFFF << 0) // Data offset for injected channel 4

// Bit definitions for ADC_HTR register
#define ADC_HTR_HT          (0xFFF << 0) // Analog watchdog high threshold

// Bit definitions for ADC_LTR register
#define ADC_LTR_LT          (0xFFF << 0) // Analog watchdog low threshold

// Bit definitions for ADC_SQR1 register
#define ADC_SQR1_L          (0xF << 20)  // L[3:0] bits (Regular channel sequence length)
#define ADC_SQR1_SQ16       (0x1F << 15) // SQ16[4:0] bits (16th conversion in regular sequence)
#define ADC_SQR1_SQ15       (0x1F << 10) // SQ15[4:0] bits (15th conversion in regular sequence)
#define ADC_SQR1_SQ14       (0x1F << 5)  // SQ14[4:0] bits (14th conversion in regular sequence)
#define ADC_SQR1_SQ13       (0x1F << 0)  // SQ13[4:0] bits (13th conversion in regular sequence)

// Bit definitions for ADC_SQR2 register
#define ADC_SQR2_SQ12       (0x1F << 25) // SQ12[4:0] bits (12th conversion in regular sequence)
#define ADC_SQR2_SQ11       (0x1F << 20) // SQ11[4:0] bits (11th conversion in regular sequence)
#define ADC_SQR2_SQ10       (0x1F << 15) // SQ10[4:0] bits (10th conversion in regular sequence)
#define ADC_SQR2_SQ9        (0x1F << 10) // SQ9[4:0] bits (9th conversion in regular sequence)
#define ADC_SQR2_SQ8        (0x1F << 5)  // SQ8[4:0] bits (8th conversion in regular sequence)
#define ADC_SQR2_SQ7        (0x1F << 0)  // SQ7[4:0] bits (7th conversion in regular sequence)

// Bit definitions for ADC_SQR3 register
#define ADC_SQR3_SQ6        (0x1F << 25) // SQ6[4:0] bits (6th conversion in regular sequence)
#define ADC_SQR3_SQ5        (0x1F << 20) // SQ5[4:0] bits (5th conversion in regular sequence)
#define ADC_SQR3_SQ4        (0x1F << 15) // SQ4[4:0] bits (4th conversion in regular sequence)
#define ADC_SQR3_SQ3        (0x1F << 10) // SQ3[4:0] bits (3rd conversion in regular sequence)
#define ADC_SQR3_SQ2        (0x1F << 5)  // SQ2[4:0] bits (2nd conversion in regular sequence)
#define ADC_SQR3_SQ1        (0x1F << 0)  // SQ1[4:0] bits (1st conversion in regular sequence)

// Bit definitions for ADC_JSQR register
#define ADC_JSQR_JL         (0x3 << 20)  // JL[1:0] bits (Injected sequence length)
#define ADC_JSQR_JSQ4       (0x1F << 15) // JSQ4[4:0] bits (4th conversion in injected sequence)
#define ADC_JSQR_JSQ3       (0x1F << 10) // JSQ3[4:0] bits (3rd conversion in injected sequence)
#define ADC_JSQR_JSQ2       (0x1F << 5)  // JSQ2[4:0] bits (2nd conversion in injected sequence)
#define ADC_JSQR_JSQ1       (0x1F << 0)  // JSQ1[4:0] bits (1st conversion in injected sequence)

// Bit definitions for ADC_JDRx registers
#define ADC_JDR1_JDATA      (0xFFFF << 0) // Injected data
#define ADC_JDR2_JDATA      (0xFFFF << 0) // Injected data
#define ADC_JDR3_JDATA      (0xFFFF << 0) // Injected data
#define ADC_JDR4_JDATA      (0xFFFF << 0) // Injected data

// Bit definitions for ADC_DR register
#define ADC_DR_DATA         (0xFFFF << 0) // Regular data


#endif /* INC_103_ADC_H_ */
