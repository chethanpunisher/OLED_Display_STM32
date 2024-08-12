#include <SSD1306_OLED.h>


int main(void) {
    // Enable clock for GPIOC
	// Initialize I2C
	    I2C1_Init();

	    // Initialize SSD1306 OLED
	    SSD1306_Init();

	    // Clear the display (optional)
	    for (uint8_t y = 0; y < 8; y++) {
	        SSD1306_SetCursor(0, y);
	        for (uint8_t x = 0; x < 150; x++) {
	            SSD1306_WriteData(0x00);
	        }
	    }

	    // Set cursor position to start writing "HELLO"
	    SSD1306_SetCursor(50, 3);
	    SSD1306_WriteString("HELLO");

	    // Main loop
	    while (1) {
	        // Application code
	    }

	    return 0;
}
