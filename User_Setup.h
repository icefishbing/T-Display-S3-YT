#define USER_SETUP_INFO "User_Setup"

// For ESP32-S3-Touch-LCD-4
#define GC9A01_DRIVER

// Pin Definitions for ESP32-S3-Touch-LCD-4
#define TFT_MISO 12
#define TFT_MOSI 11
#define TFT_SCLK 10
#define TFT_CS   9
#define TFT_DC   8
#define TFT_RST  14
#define TFT_BL   2

#define TOUCH_CS 16
#define TOUCH_IRQ 7

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

#define SPI_FREQUENCY         80000000
#define SPI_READ_FREQUENCY    20000000
#define SPI_TOUCH_FREQUENCY   2500000

// Display configuration
#define TFT_WIDTH  480
#define TFT_HEIGHT 480

// Color depth
#define COLOR_DEPTH 16 