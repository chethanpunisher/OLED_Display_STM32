/*
 * 103_I2C.c
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */

#include <103_I2C.h>

void I2C1_Start(void){
    I2C1->CR1 |= I2C_CR1_START;
    while (!(I2C1->SR1 & I2C_SR1_SB));
}

void I2C1_Address(uint8_t address){
    I2C1->DR = address << 1;
    while (!(I2C1->SR1 & I2C_SR1_ADDR));
    (void) I2C1->SR2;  // Clear ADDR flag
}

void I2C1_TransferComplete(void){
    while (!(I2C1->SR1 & I2C_SR1_TXE));
}

void I2C1_Stop(void){
    I2C1->CR1 |= I2C_CR1_STOP;

}

void I2C1_Init(void){
    RCC_APB2ENR |= RCC_APB2ENR_IOPBEN;  // Enable GPIOB clock
    RCC_APB1ENR |= RCC_APB1ENR_I2C1EN;  // Enable I2C1 clock

    // Configure PB6 and PB7 as alternate function open-drain (I2C1 SCL and SDA)
    GPIOB_CRL &= ~((GPIO_CRL_MODE6 | GPIO_CRL_CNF6) | (GPIO_CRL_MODE7 | GPIO_CRL_CNF7));
    GPIOB_CRL |= (GPIO_CRL_MODE6_1 | GPIO_CRL_CNF6) | (GPIO_CRL_MODE7_1 | GPIO_CRL_CNF7);

    I2C1->CR2 = 36;  // APB1 clock frequency in MHz
    I2C1->CCR = 180; // 100 kHz I2C clock
    I2C1->TRISE = 37;
    I2C1->CR1 |= I2C_CR1_PE;  // Enable I2C1
}

void I2C1_Write(uint8_t data){
    I2C1->DR = data;
}

void I2C1_Read(void){

}
