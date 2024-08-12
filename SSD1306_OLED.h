/*
 * SSD1306_OLED.h
 *
 *  Created on: Jun 11, 2024
 *      Author: cheth
 */




#ifndef INC_SSD1306_OLED_H_
#define INC_SSD1306_OLED_H_


#include <103_I2C.h>

#define SSD1306_I2C_ADDRESS 0x3C
#define SSD1306_COMMAND 0x00
#define SSD1306_DATA 0x40
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// SSD1306 Commands
#define SSD1306_DISPLAY_OFF 0xAE
#define SSD1306_DISPLAY_ON 0xAF
#define SSD1306_SET_DISPLAY_CLOCK_DIV 0xD5
#define SSD1306_SET_MULTIPLEX 0xA8
#define SSD1306_SET_DISPLAY_OFFSET 0xD3
#define SSD1306_SET_START_LINE 0x40
#define SSD1306_CHARGE_PUMP 0x8D
#define SSD1306_MEMORY_MODE 0x20
#define SSD1306_SEG_REMAP 0xA1
#define SSD1306_COM_SCAN_DEC 0xC8
#define SSD1306_SET_CONTRAST 0x81
#define SSD1306_SET_PRECHARGE 0xD9
#define SSD1306_SET_VCOM_DETECT 0xDB
#define SSD1306_DISPLAY_ALL_ON_RESUME 0xA4
#define SSD1306_NORMAL_DISPLAY 0xA6

extern const uint8_t font[];

extern void SSD1306_Init(void);
extern void SSD1306_WriteData(uint8_t data);
extern void SSD1306_SetCursor(uint8_t x, uint8_t y);
extern void SSD1306_WriteChar(char c);
extern void SSD1306_WriteString(const char* str);
extern void I2C1_to_SSD1306(uint8_t address, uint8_t reg, uint8_t data);


#endif /* INC_SSD1306_OLED_H_ */
