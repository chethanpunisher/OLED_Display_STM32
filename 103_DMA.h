/*
 * 103_DMA.h
 *
 *  Created on: Jun 9, 2024
 *      Author: cheth
 */

#ifndef INC_103_DMA_H_
#define INC_103_DMA_H_


#include <stdint.h>

// DMA register structure
typedef struct {
    volatile uint32_t ISR;    // DMA interrupt status register
    volatile uint32_t IFCR;   // DMA interrupt flag clear register
    struct {
        volatile uint32_t CCR;    // DMA channel configuration register
        volatile uint32_t CNDTR;  // DMA channel number of data register
        volatile uint32_t CPAR;   // DMA channel peripheral address register
        volatile uint32_t CMAR;   // DMA channel memory address register
        uint32_t RESERVED;        // Reserved
    } Channel[7];
} DMA_TypeDef;

// Base address for DMA peripheral
#define DMA1_BASE           0x40020000U
#define DMA2_BASE           0x40020400U

// Pointers to DMA peripherals
#define DMA1                ((DMA_TypeDef *) DMA1_BASE)
#define DMA2                ((DMA_TypeDef *) DMA2_BASE)

// Bit definitions for DMA_ISR register
#define DMA_ISR_GIF1        (1U << 0)  // Channel 1 global interrupt flag
#define DMA_ISR_TCIF1       (1U << 1)  // Channel 1 transfer complete flag
#define DMA_ISR_HTIF1       (1U << 2)  // Channel 1 half transfer flag
#define DMA_ISR_TEIF1       (1U << 3)  // Channel 1 transfer error flag
#define DMA_ISR_GIF2        (1U << 4)  // Channel 2 global interrupt flag
#define DMA_ISR_TCIF2       (1U << 5)  // Channel 2 transfer complete flag
#define DMA_ISR_HTIF2       (1U << 6)  // Channel 2 half transfer flag
#define DMA_ISR_TEIF2       (1U << 7)  // Channel 2 transfer error flag
#define DMA_ISR_GIF3        (1U << 8)  // Channel 3 global interrupt flag
#define DMA_ISR_TCIF3       (1U << 9)  // Channel 3 transfer complete flag
#define DMA_ISR_HTIF3       (1U << 10) // Channel 3 half transfer flag
#define DMA_ISR_TEIF3       (1U << 11) // Channel 3 transfer error flag
#define DMA_ISR_GIF4        (1U << 12) // Channel 4 global interrupt flag
#define DMA_ISR_TCIF4       (1U << 13) // Channel 4 transfer complete flag
#define DMA_ISR_HTIF4       (1U << 14) // Channel 4 half transfer flag
#define DMA_ISR_TEIF4       (1U << 15) // Channel 4 transfer error flag
#define DMA_ISR_GIF5        (1U << 16) // Channel 5 global interrupt flag
#define DMA_ISR_TCIF5       (1U << 17) // Channel 5 transfer complete flag
#define DMA_ISR_HTIF5       (1U << 18) // Channel 5 half transfer flag
#define DMA_ISR_TEIF5       (1U << 19) // Channel 5 transfer error flag
#define DMA_ISR_GIF6        (1U << 20) // Channel 6 global interrupt flag
#define DMA_ISR_TCIF6       (1U << 21) // Channel 6 transfer complete flag
#define DMA_ISR_HTIF6       (1U << 22) // Channel 6 half transfer flag
#define DMA_ISR_TEIF6       (1U << 23) // Channel 6 transfer error flag
#define DMA_ISR_GIF7        (1U << 24) // Channel 7 global interrupt flag
#define DMA_ISR_TCIF7       (1U << 25) // Channel 7 transfer complete flag
#define DMA_ISR_HTIF7       (1U << 26) // Channel 7 half transfer flag
#define DMA_ISR_TEIF7       (1U << 27) // Channel 7 transfer error flag

// Bit definitions for DMA_IFCR register
#define DMA_IFCR_CGIF1      (1U << 0)  // Channel 1 global interrupt flag clear
#define DMA_IFCR_CTCIF1     (1U << 1)  // Channel 1 transfer complete flag clear
#define DMA_IFCR_CHTIF1     (1U << 2)  // Channel 1 half transfer flag clear
#define DMA_IFCR_CTEIF1     (1U << 3)  // Channel 1 transfer error flag clear
#define DMA_IFCR_CGIF2      (1U << 4)  // Channel 2 global interrupt flag clear
#define DMA_IFCR_CTCIF2     (1U << 5)  // Channel 2 transfer complete flag clear
#define DMA_IFCR_CHTIF2     (1U << 6)  // Channel 2 half transfer flag clear
#define DMA_IFCR_CTEIF2     (1U << 7)  // Channel 2 transfer error flag clear
#define DMA_IFCR_CGIF3      (1U << 8)  // Channel 3 global interrupt flag clear
#define DMA_IFCR_CTCIF3     (1U << 9)  // Channel 3 transfer complete flag clear
#define DMA_IFCR_CHTIF3     (1U << 10) // Channel 3 half transfer flag clear
#define DMA_IFCR_CTEIF3     (1U << 11) // Channel 3 transfer error flag clear
#define DMA_IFCR_CGIF4      (1U << 12) // Channel 4 global interrupt flag clear
#define DMA_IFCR_CTCIF4     (1U << 13) // Channel 4 transfer complete flag clear
#define DMA_IFCR_CHTIF4     (1U << 14) // Channel 4 half transfer flag clear
#define DMA_IFCR_CTEIF4     (1U << 15) // Channel 4 transfer error flag clear
#define DMA_IFCR_CGIF5      (1U << 16) // Channel 5 global interrupt flag clear
#define DMA_IFCR_CTCIF5     (1U << 17) // Channel 5 transfer complete flag clear
#define DMA_IFCR_CHTIF5     (1U << 18) // Channel 5 half transfer flag clear
#define DMA_IFCR_CTEIF5     (1U << 19) // Channel 5 transfer error flag clear
#define DMA_IFCR_CGIF6      (1U << 20) // Channel 6 global interrupt flag clear
#define DMA_IFCR_CTCIF6     (1U << 21) // Channel 6 transfer complete flag clear
#define DMA_IFCR_CHTIF6     (1U << 22) // Channel 6 half transfer flag clear
#define DMA_IFCR_CTEIF6     (1U << 23) // Channel 6 transfer error flag clear
#define DMA_IFCR_CGIF7      (1U << 24) // Channel 7 global interrupt flag clear
#define DMA_IFCR_CTCIF7     (1U << 25) // Channel 7 transfer complete flag clear
#define DMA_IFCR_CHTIF7     (1U << 26) // Channel 7 half transfer flag clear
#define DMA_IFCR_CTEIF7     (1U << 27) // Channel 7 transfer error flag clear

// Bit definitions for DMA_CCR register
#define DMA_CCR_EN          (1U << 0)  // Channel enable
#define DMA_CCR_TCIE        (1U << 1)  // Transfer complete interrupt enable
#define DMA_CCR_HTIE        (1U << 2)  // Half transfer interrupt enable
#define DMA_CCR_TEIE        (1U << 3)  // Transfer error interrupt enable
#define DMA_CCR_DIR         (1U << 4)  // Data transfer direction
#define DMA_CCR_CIRC        (1U << 5)  // Circular mode
#define DMA_CCR_PINC        (1U << 6)  // Peripheral increment mode
#define DMA_CCR_MINC        (1U << 7)  // Memory increment mode
#define DMA_CCR_PSIZE       (0x3 << 8) // PSIZE[1:0] bits (Peripheral size)
#define DMA_CCR_PSIZE_8BITS (0x0 << 8) // 00: 8-bits
#define DMA_CCR_PSIZE_16BITS (0x1 << 8) // 01: 16-bits
#define DMA_CCR_PSIZE_32BITS (0x2 << 8) // 10: 32-bits
#define DMA_CCR_MSIZE       (0x3 << 10)// MSIZE[1:0] bits (Memory size)
#define DMA_CCR_MSIZE_8BITS (0x0 << 10) // 00: 8-bits
#define DMA_CCR_MSIZE_16BITS (0x1 << 10) // 01: 16-bits
#define DMA_CCR_MSIZE_32BITS (0x2 << 10) // 10: 32-bits
#define DMA_CCR_PL          (0x3 << 12)// PL[1:0] bits(Channel Priority level)
#define DMA_CCR_PL_LOW      (0x0 << 12) // 00: Low
#define DMA_CCR_PL_MEDIUM   (0x1 << 12) // 01: Medium
#define DMA_CCR_PL_HIGH     (0x2 << 12) // 10: High
#define DMA_CCR_PL_VERYHIGH (0x3 << 12) // 11: Very high
#define DMA_CCR_MEM2MEM     (1U << 14) // Memory to memory mode

// Bit definitions for DMA_CNDTR register
#define DMA_CNDTR_NDT       (0xFFFFU << 0) // Number of data to transfer

// Bit definitions for DMA_CPAR register
#define DMA_CPAR_PA         (0xFFFFFFFFU << 0) // Peripheral address

// Bit definitions for DMA_CMAR register
#define DMA_CMAR_MA         (0xFFFFFFFFU << 0) // Memory address


#endif /* INC_103_DMA_H_ */
