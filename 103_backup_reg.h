/*
 * 103_backup_reg.h
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */

#ifndef INC_103_BACKUP_REG_H_
#define INC_103_BACKUP_REG_H_

#include <stdint.h>

// Base address for Backup registers
#define BKP_BASE        0x40006C00

// Backup registers offsets (12 16-bit registers)
#define BKP_DR1_OFFSET  0x04
#define BKP_DR2_OFFSET  0x08
#define BKP_DR3_OFFSET  0x0C
#define BKP_DR4_OFFSET  0x10
#define BKP_DR5_OFFSET  0x14
#define BKP_DR6_OFFSET  0x18
#define BKP_DR7_OFFSET  0x1C
#define BKP_DR8_OFFSET  0x20
#define BKP_DR9_OFFSET  0x24
#define BKP_DR10_OFFSET 0x28

// Control and status register offsets
#define BKP_RTCCR_OFFSET 0x2C
#define BKP_CR_OFFSET    0x30
#define BKP_CSR_OFFSET   0x34

// Register addresses
#define BKP_DR1  (*(volatile uint16_t *)(BKP_BASE + BKP_DR1_OFFSET))
#define BKP_DR2  (*(volatile uint16_t *)(BKP_BASE + BKP_DR2_OFFSET))
#define BKP_DR3  (*(volatile uint16_t *)(BKP_BASE + BKP_DR3_OFFSET))
#define BKP_DR4  (*(volatile uint16_t *)(BKP_BASE + BKP_DR4_OFFSET))
#define BKP_DR5  (*(volatile uint16_t *)(BKP_BASE + BKP_DR5_OFFSET))
#define BKP_DR6  (*(volatile uint16_t *)(BKP_BASE + BKP_DR6_OFFSET))
#define BKP_DR7  (*(volatile uint16_t *)(BKP_BASE + BKP_DR7_OFFSET))
#define BKP_DR8  (*(volatile uint16_t *)(BKP_BASE + BKP_DR8_OFFSET))
#define BKP_DR9  (*(volatile uint16_t *)(BKP_BASE + BKP_DR9_OFFSET))
#define BKP_DR10 (*(volatile uint16_t *)(BKP_BASE + BKP_DR10_OFFSET))

#define BKP_RTCCR (*(volatile uint32_t *)(BKP_BASE + BKP_RTCCR_OFFSET))
#define BKP_CR    (*(volatile uint32_t *)(BKP_BASE + BKP_CR_OFFSET))
#define BKP_CSR   (*(volatile uint32_t *)(BKP_BASE + BKP_CSR_OFFSET))

// Bit definitions for BKP_CR register
#define BKP_CR_TPE    (1 << 0) // Tamper pin enable
#define BKP_CR_TPAL   (1 << 1) // Tamper pin active level

// Bit definitions for BKP_CSR register
#define BKP_CSR_CTE   (1 << 3) // Clear tamper event
#define BKP_CSR_TIF   (1 << 2) // Tamper interrupt flag
#define BKP_CSR_TEF   (1 << 8) // Tamper event flag

// Function prototypes for backup registers
void BKP_WriteBackupRegister(uint32_t BKP_DR, uint16_t Data);
uint16_t BKP_ReadBackupRegister(uint32_t BKP_DR);
void BKP_ClearTamperEvent(void);
uint8_t BKP_GetTamperEvent(void);

#endif /* INC_103_BACKUP_REG_H_ */
