#include <TFT_eSPI.h>
#include <lvgl.h>
//#include "ui/ui.h"  // Comment out this line

// Display and LVGL objects
TFT_eSPI tft = TFT_eSPI();
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[LV_HOR_RES_MAX * 10];
static lv_disp_drv_t disp_drv;

// Screen dimensions
uint16_t screenWidth = 480;
uint16_t screenHeight = 480;

// Display flush callback
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors((uint16_t *)&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

// Initialize display
void init_display() {
    tft.init();
    tft.setRotation(0);
    tft.fillScreen(TFT_BLACK);
    
    // Set up backlight if your display has it
    // pinMode(TFT_BL, OUTPUT);
    // digitalWrite(TFT_BL, HIGH);
}

// Initialize LVGL
void init_lvgl() {
    lv_init();
    
    // Allocate larger drawing buffer for 480x480
    static lv_color_t draw_buf[480 * 20];  // Increased buffer size
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, draw_buf, NULL, 480 * 20);
    
    // Display driver initialization
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &disp_buf;
    disp_drv.hor_res = 480;
    disp_drv.ver_res = 480;
    lv_disp_drv_register(&disp_drv);
}

// UI Scaling Explanation
void init_UI() {
    // Create a simple test screen instead of using ui_Screen1
    static lv_obj_t* screen = lv_obj_create(NULL);
    lv_scr_load(screen);
    
    // Create a test label
    lv_obj_t* label = lv_label_create(screen);
    lv_label_set_text(label, "Hello World!");
    lv_obj_center(label);
}

void setup() {
    Serial.begin(115200);
    
    // Initialize hardware
    init_display();
    
    // Initialize LVGL
    init_lvgl();
    
    // Setup UI
    //ui_init();  // Comment out this line
    init_UI();
}

void loop() {
    lv_timer_handler();
    delay(5);
} 