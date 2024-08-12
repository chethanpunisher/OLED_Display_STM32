/*
 * 103_power_control.h
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */

#ifndef INC_103_POWER_CONTROL_H_
#define INC_103_POWER_CONTROL_H_

#include <stdint.h>

// Base address for the PWR registers
#define PWR_BASE 0x40007000

// Register offsets from PWR base address
#define PWR_CR_OFFSET   0x00
#define PWR_CSR_OFFSET  0x04

// Register addresses
#define PWR_CR  (*(volatile uint32_t *)(PWR_BASE + PWR_CR_OFFSET))
#define PWR_CSR (*(volatile uint32_t *)(PWR_BASE + PWR_CSR_OFFSET))

// Bit definitions for PWR_CR register
#define PWR_CR_LPDS     (1 << 0)  // Low-power deep sleep
#define PWR_CR_PDDS     (1 << 1)  // Power down deepsleep
#define PWR_CR_CWUF     (1 << 2)  // Clear wakeup flag
#define PWR_CR_CSBF     (1 << 3)  // Clear standby flag
#define PWR_CR_PVDE     (1 << 4)  // Power voltage detector enable
#define PWR_CR_PLS      (7 << 5)  // PVD level selection
#define PWR_CR_DBP      (1 << 8)  // Disable backup domain write protection

// Bit definitions for PWR_CSR register
#define PWR_CSR_WUF     (1 << 0)  // Wakeup flag
#define PWR_CSR_SBF     (1 << 1)  // Standby flag
#define PWR_CSR_PVDO    (1 << 2)  // PVD output
#define PWR_CSR_EWUP    (1 << 8)  // Enable WKUP pin

// Function prototypes for power control
void PWR_EnableBackupAccess(void);
void PWR_DisableBackupAccess(void);
void PWR_ClearWakeupFlag(void);
void PWR_ClearStandbyFlag(void);

#endif /* INC_103_POWER_CONTROL_H_ */
