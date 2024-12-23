#define USER_SETUP_INFO "480x480 Setup"

#define ST7796_DRIVER

// For ESP32-S3 display
#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST  14

#define TOUCH_CS 8  // Touch chip select if used

#define TFT_WIDTH  480
#define TFT_HEIGHT 480

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48

#define SMOOTH_FONT

// DMA - should work with ESP32, ESP32-S2, ESP32-S3 and ESP32-C3 (but ESP32-C3 DMA is not tested yet)
#define DMA_CHANNEL 1
// #define ESP32_DMA
// #define ESP32C3_DMA

#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000

// #define SUPPORT_TRANSACTIONS 