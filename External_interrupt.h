/*
 * External_interrupt.h
 *
 *  Created on: Jun 9, 2024
 *      Author: cheth
 */

#ifndef INC_EXTERNAL_INTERRUPT_H_
#define INC_EXTERNAL_INTERRUPT_H_


#include <stdint.h>

// EXTI register structure
typedef struct {
    volatile uint32_t IMR;    // Interrupt mask register
    volatile uint32_t EMR;    // Event mask register
    volatile uint32_t RTSR;   // Rising trigger selection register
    volatile uint32_t FTSR;   // Falling trigger selection register
    volatile uint32_t SWIER;  // Software interrupt event register
    volatile uint32_t PR;     // Pending register
} EXTI_TypeDef;

// Base address for EXTI peripheral
#define EXTI_BASE           0x40010400U

// Pointer to EXTI peripheral
#define EXTI                ((EXTI_TypeDef *) EXTI_BASE)

// Bit definitions for EXTI registers
#define EXTI_IMR_MR0        (1U << 0)
#define EXTI_IMR_MR1        (1U << 1)
#define EXTI_IMR_MR2        (1U << 2)
#define EXTI_IMR_MR3        (1U << 3)
#define EXTI_IMR_MR4        (1U << 4)
#define EXTI_IMR_MR5        (1U << 5)
#define EXTI_IMR_MR6        (1U << 6)
#define EXTI_IMR_MR7        (1U << 7)
#define EXTI_IMR_MR8        (1U << 8)
#define EXTI_IMR_MR9        (1U << 9)
#define EXTI_IMR_MR10       (1U << 10)
#define EXTI_IMR_MR11       (1U << 11)
#define EXTI_IMR_MR12       (1U << 12)
#define EXTI_IMR_MR13       (1U << 13)
#define EXTI_IMR_MR14       (1U << 14)
#define EXTI_IMR_MR15       (1U << 15)
#define EXTI_IMR_MR16       (1U << 16)
#define EXTI_IMR_MR17       (1U << 17)
#define EXTI_IMR_MR18       (1U << 18)
#define EXTI_IMR_MR19       (1U << 19)
// Define other bit definitions for IMR register

#define EXTI_EMR_MR0        (1U << 0)
#define EXTI_EMR_MR1        (1U << 1)
#define EXTI_EMR_MR2        (1U << 2)
#define EXTI_EMR_MR3        (1U << 3)
#define EXTI_EMR_MR4        (1U << 4)
#define EXTI_EMR_MR5        (1U << 5)
#define EXTI_EMR_MR6        (1U << 6)
#define EXTI_EMR_MR7        (1U << 7)
#define EXTI_EMR_MR8        (1U << 8)
#define EXTI_EMR_MR9        (1U << 9)
#define EXTI_EMR_MR10       (1U << 10)
#define EXTI_EMR_MR11       (1U << 11)
#define EXTI_EMR_MR12       (1U << 12)
#define EXTI_EMR_MR13       (1U << 13)
#define EXTI_EMR_MR14       (1U << 14)
#define EXTI_EMR_MR15       (1U << 15)
#define EXTI_EMR_MR16       (1U << 16)
#define EXTI_EMR_MR17       (1U << 17)
#define EXTI_EMR_MR18       (1U << 18)
#define EXTI_EMR_MR19       (1U << 19)
// Define other bit definitions for EMR register

#define EXTI_RTSR_TR0       (1U << 0)
#define EXTI_RTSR_TR1       (1U << 1)
#define EXTI_RTSR_TR2       (1U << 2)
#define EXTI_RTSR_TR3       (1U << 3)
#define EXTI_RTSR_TR4       (1U << 4)
#define EXTI_RTSR_TR5       (1U << 5)
#define EXTI_RTSR_TR6       (1U << 6)
#define EXTI_RTSR_TR7       (1U << 7)
#define EXTI_RTSR_TR8       (1U << 8)
#define EXTI_RTSR_TR9       (1U << 9)
#define EXTI_RTSR_TR10      (1U << 10)
#define EXTI_RTSR_TR11      (1U << 11)
#define EXTI_RTSR_TR12      (1U << 12)
#define EXTI_RTSR_TR13      (1U << 13)
#define EXTI_RTSR_TR14      (1U << 14)
#define EXTI_RTSR_TR15      (1U << 15)
#define EXTI_RTSR_TR16      (1U << 16)
#define EXTI_RTSR_TR17      (1U << 17)
#define EXTI_RTSR_TR18      (1U << 18)
#define EXTI_RTSR_TR19      (1U << 19)
// Define other bit definitions for RTSR register

#define EXTI_FTSR_TR0       (1U << 0)
#define EXTI_FTSR_TR1       (1U << 1)
#define EXTI_FTSR_TR2       (1U << 2)
#define EXTI_FTSR_TR3       (1U << 3)
#define EXTI_FTSR_TR4       (1U << 4)
#define EXTI_FTSR_TR5       (1U << 5)
#define EXTI_FTSR_TR6       (1U << 6)
#define EXTI_FTSR_TR7       (1U << 7)
#define EXTI_FTSR_TR8       (1U << 8)
#define EXTI_FTSR_TR9       (1U << 9)
#define EXTI_FTSR_TR10      (1U << 10)
#define EXTI_FTSR_TR11      (1U << 11)
#define EXTI_FTSR_TR12      (1U << 12)
#define EXTI_FTSR_TR13      (1U << 13)
#define EXTI_FTSR_TR14      (1U << 14)
#define EXTI_FTSR_TR15      (1U << 15)
#define EXTI_FTSR_TR16      (1U << 16)
#define EXTI_FTSR_TR17      (1U << 17)
#define EXTI_FTSR_TR18      (1U << 18)
#define EXTI_FTSR_TR19      (1U << 19)
// Define other bit definitions for FTSR register

#define EXTI_SWIER_SWIER0   (1U << 0)
#define EXTI_SWIER_SWIER1   (1U << 1)
#define EXTI_SWIER_SWIER2   (1U << 2)
#define EXTI_SWIER_SWIER3   (1U << 3)
#define EXTI_SWIER_SWIER4   (1U << 4)
#define EXTI_SWIER_SWIER5   (1U << 5)
#define EXTI_SWIER_SWIER6   (1U << 6)
#define EXTI_SWIER_SWIER7   (1U << 7)
#define EXTI_SWIER_SWIER8   (1U << 8)
#define EXTI_SWIER_SWIER9   (1U << 9)
#define EXTI_SWIER_SWIER10  (1U << 10)
#define EXTI_SWIER_SWIER11  (1U << 11)
#define EXTI_SWIER_SWIER12  (1U << 12)
#define EXTI_SWIER_SWIER13  (1U << 13)
#define EXTI_SWIER_SWIER14  (1U << 14)
#define EXTI_SWIER_SWIER15  (1U << 15)
#define EXTI_SWIER_SWIER16  (1U << 16)
#define EXTI_SWIER_SWIER17  (1U << 17)
#define EXTI_SWIER_SWIER18  (1U << 18)
#define EXTI_SWIER_SWIER19  (1U << 19)
// Define other bit definitions for SWIER register

#define EXTI_PR_PR0         (1U << 0)
#define EXTI_PR_PR1         (1U << 1)
#define EXTI_PR_PR2         (1U << 2)
#define EXTI_PR_PR3         (1U << 3)
#define EXTI_PR_PR4         (1U << 4)
#define EXTI_PR_PR5         (1U << 5)
#define EXTI_PR_PR6         (1U << 6)
#define EXTI_PR_PR7         (1U << 7)
#define EXTI_PR_PR8         (1U << 8)
#define EXTI_PR_PR9         (1U << 9)
#define EXTI_PR_PR10        (1U << 10)
#define EXTI_PR_PR11        (1U << 11)
#define EXTI_PR_PR12        (1U << 12)
#define EXTI_PR_PR13        (1U << 13)
#define EXTI_PR_PR14        (1U << 14)
#define EXTI_PR_PR15        (1U << 15)
#define EXTI_PR_PR16        (1U << 16)
#define EXTI_PR_PR17        (1U << 17)
#define EXTI_PR_PR18        (1U << 18)
#define EXTI_PR_PR19        (1U << 19)
// Define other bit definitions for PR register




#endif /* INC_EXTERNAL_INTERRUPT_H_ */
