#define TFT_WIDTH  480
#define TFT_HEIGHT 480

// Define your display driver IC
#define ST7796_DRIVER  // Or your specific display driver

// Define your ESP32-S3 SPI pins
#define TFT_MISO PIN_NUM_MISO
#define TFT_MOSI PIN_NUM_MOSI
#define TFT_SCLK PIN_NUM_CLK
#define TFT_CS   PIN_NUM_CS
#define TFT_DC   PIN_NUM_DC
#define TFT_RST  PIN_NUM_RST 