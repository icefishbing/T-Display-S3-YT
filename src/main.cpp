#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

// Define pins from schematic
#define TOUCH_IRQ 7
#define TFT_BL   2

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32-S3 Display Test Starting...");
  
  // Initialize backlight with correct pin
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
  
  // Initialize touch interrupt pin
  pinMode(TOUCH_IRQ, INPUT);
  
  // Initialize display
  tft.init();
  tft.setRotation(2);
  tft.fillScreen(TFT_BLACK);
  
  // Set backlight to 50% (GC9A01 might be too bright at 100%)
  ledcSetup(0, 10000, 8); // PWM channel 0, 10kHz, 8-bit resolution
  ledcAttachPin(TFT_BL, 0);
  ledcWrite(0, 127);      // 50% brightness
  
  // Display test sequence
  Serial.println("Starting display test sequence...");
  
  // Color test
  Serial.println("Testing colors...");
  uint16_t colors[] = {TFT_RED, TFT_GREEN, TFT_BLUE, TFT_WHITE, TFT_YELLOW, TFT_CYAN, TFT_MAGENTA};
  for(uint8_t i = 0; i < 7; i++) {
    tft.fillScreen(colors[i]);
    delay(500);
  }
  
  // Return to black background
  tft.fillScreen(TFT_BLACK);
  
  // Draw test pattern
  Serial.println("Drawing test pattern...");
  
  // Draw border
  tft.drawRect(0, 0, tft.width(), tft.height(), TFT_WHITE);
  
  // Draw text
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(3);
  tft.drawString("ESP32-S3", 10, 20);
  tft.drawString("480x480 Display", 10, 60);
  
  // Draw some shapes
  tft.fillRect(50, 120, 100, 100, TFT_RED);
  tft.fillCircle(250, 170, 50, TFT_GREEN);
  tft.fillTriangle(350, 220, 400, 120, 450, 220, TFT_BLUE);
  
  // Draw grid pattern
  for(int i = 0; i < tft.width(); i += 40) {
    tft.drawLine(i, 240, i, 440, TFT_YELLOW);
    tft.drawLine(0, 240 + i, tft.width(), 240 + i, TFT_YELLOW);
  }
  
  Serial.println("Setup complete");
}

void loop() {
  static uint32_t hueShift = 0;
  
  // Create a moving rainbow pattern
  for(int x = 50; x < 430; x++) {
    for(int y = 300; y < 400; y++) {
      uint8_t hue = x + hueShift;
      uint8_t sat = 255;
      uint8_t val = 255;
      
      // Simple HSV to RGB conversion
      uint8_t r, g, b;
      uint8_t region = hue / 43;
      uint8_t remainder = (hue - (region * 43)) * 6;
      
      uint8_t p = (val * (255 - sat)) >> 8;
      uint8_t q = (val * (255 - ((sat * remainder) >> 8))) >> 8;
      uint8_t t = (val * (255 - ((sat * (255 - remainder)) >> 8))) >> 8;
      
      switch(region) {
        case 0: r = val; g = t; b = p; break;
        case 1: r = q; g = val; b = p; break;
        case 2: r = p; g = val; b = t; break;
        case 3: r = p; g = q; b = val; break;
        case 4: r = t; g = p; b = val; break;
        default: r = val; g = p; b = q; break;
      }
      
      tft.drawPixel(x, y, tft.color565(r, g, b));
    }
  }
  hueShift++;
  
  // Check touch (if touched, will invert colors temporarily)
  if(digitalRead(TOUCH_IRQ) == LOW) {
    tft.invertDisplay(true);
    delay(100);
    tft.invertDisplay(false);
  }
  
  delay(20);
} 