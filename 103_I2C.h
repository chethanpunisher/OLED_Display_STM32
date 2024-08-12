/*
 * 103_I2C.h
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */

#ifndef INC_103_I2C_H_
#define INC_103_I2C_H_



#include <stdint.h>
#include <103_RCC.h>
#include <103_GPIO.h>

// I2C register structure
typedef struct {
    volatile uint32_t CR1;        // I2C Control register 1
    volatile uint32_t CR2;        // I2C Control register 2
    volatile uint32_t OAR1;       // I2C Own address register 1
    volatile uint32_t OAR2;       // I2C Own address register 2
    volatile uint32_t DR;         // I2C Data register
    volatile uint32_t SR1;        // I2C Status register 1
    volatile uint32_t SR2;        // I2C Status register 2
    volatile uint32_t CCR;        // I2C Clock control register
    volatile uint32_t TRISE;      // I2C TRISE register
} I2C_TypeDef;

// Base addresses for I2C peripherals
#define I2C1_BASE           0x40005400U
#define I2C2_BASE           0x40005800U

// Pointers to I2C peripherals
#define I2C1                ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                ((I2C_TypeDef *) I2C2_BASE)

// Bit definitions for I2C_CR1 register
#define I2C_CR1_PE          (1U << 0)   // Peripheral enable
#define I2C_CR1_SMBUS       (1U << 1)   // SMBus mode
#define I2C_CR1_SMBTYPE     (1U << 3)   // SMBus type
#define I2C_CR1_ENARP       (1U << 4)   // ARP enable
#define I2C_CR1_ENPEC       (1U << 5)   // PEC enable
#define I2C_CR1_ENGC        (1U << 6)   // General call enable
#define I2C_CR1_NOSTRETCH   (1U << 7)   // Clock stretching disable (Slave mode)
#define I2C_CR1_START       (1U << 8)   // Start generation
#define I2C_CR1_STOP        (1U << 9)   // Stop generation
#define I2C_CR1_ACK         (1U << 10)  // Acknowledge enable
#define I2C_CR1_POS         (1U << 11)  // Acknowledge/PEC Position (for data reception)
#define I2C_CR1_PEC         (1U << 12)  // Packet error checking
#define I2C_CR1_ALERT       (1U << 13)  // SMBus alert
#define I2C_CR1_SWRST       (1U << 15)  // Software reset

// Bit definitions for I2C_CR2 register
#define I2C_CR2_FREQ        (0x3F << 0) // Peripheral clock frequency
#define I2C_CR2_ITERREN     (1U << 8)   // Error interrupt enable
#define I2C_CR2_ITEVTEN     (1U << 9)   // Event interrupt enable
#define I2C_CR2_ITBUFEN     (1U << 10)  // Buffer interrupt enable
#define I2C_CR2_DMAEN       (1U << 11)  // DMA requests enable
#define I2C_CR2_LAST        (1U << 12)  // DMA last transfer

// Bit definitions for I2C_OAR1 register
#define I2C_OAR1_ADD0       (1U << 0)   // Interface address
#define I2C_OAR1_ADD1_7     (0x7F << 1) // Interface address
#define I2C_OAR1_ADD8_9     (0x3 << 8)  // Interface address
#define I2C_OAR1_ADDMODE    (1U << 15)  // Addressing mode (slave mode)

// Bit definitions for I2C_OAR2 register
#define I2C_OAR2_ENDUAL     (1U << 0)   // Dual addressing mode enable
#define I2C_OAR2_ADD2       (0x7F << 1) // Interface address

// Bit definitions for I2C_DR register
#define I2C_DR_DR           (0xFF << 0) // 8-bit Data register

// Bit definitions for I2C_SR1 register
#define I2C_SR1_SB          (1U << 0)   // Start bit (Master mode)
#define I2C_SR1_ADDR        (1U << 1)   // Address sent (master mode)/matched (slave mode)
#define I2C_SR1_BTF         (1U << 2)   // Byte transfer finished
#define I2C_SR1_ADD10       (1U << 3)   // 10-bit header sent (Master mode)
#define I2C_SR1_STOPF       (1U << 4)   // Stop detection (Slave mode)
#define I2C_SR1_RXNE        (1U << 6)   // Data register not empty (receivers)
#define I2C_SR1_TXE         (1U << 7)   // Data register empty (transmitters)
#define I2C_SR1_BERR        (1U << 8)   // Bus error
#define I2C_SR1_ARLO        (1U << 9)   // Arbitration lost (master mode)
#define I2C_SR1_AF          (1U << 10)  // Acknowledge failure
#define I2C_SR1_OVR         (1U << 11)  // Overrun/Underrun
#define I2C_SR1_PECERR      (1U << 12)  // PEC error in reception
#define I2C_SR1_TIMEOUT     (1U << 14)  // Timeout or Tlow error
#define I2C_SR1_SMBALERT    (1U << 15)  // SMBus alert

// Bit definitions for I2C_SR2 register
#define I2C_SR2_MSL         (1U << 0)   // Master/slave
#define I2C_SR2_BUSY        (1U << 1)   // Bus busy
#define I2C_SR2_TRA         (1U << 2)   // Transmitter/receiver
#define I2C_SR2_GENCALL     (1U << 4)   // General call address (Slave mode)
#define I2C_SR2_SMBDEFAULT  (1U << 5)   // SMBus device default address (Slave mode)
#define I2C_SR2_SMBHOST     (1U << 6)   // SMBus host header (Slave mode)
#define I2C_SR2_DUALF       (1U << 7)   // Dual flag (Slave mode)
#define I2C_SR2_PEC         (0xFF << 8) // Packet error checking register

// Bit definitions for I2C_CCR register
#define I2C_CCR_CCR         (0xFFF << 0) // Clock control register in Fast/Standard mode (Master mode)
#define I2C_CCR_DUTY        (1U << 14)   // Fast mode duty cycle
#define I2C_CCR_FS          (1U << 15)   // I2C master mode selection

// Bit definitions for I2C_TRISE register
#define I2C_TRISE_TRISE     (0x3F << 0) // Maximum rise time in Fast/Standard mode (Master mode)

extern void I2C1_Init(void);
extern void I2C1_Start(void);
extern void I2C1_Address(uint8_t addr);
extern void I2C1_Write(uint8_t data);
extern void I2C1_TransferComplete(void);
extern void I2C1_Read(void);
extern void I2C1_Stop(void);

#endif /* INC_103_I2C_H_ */
