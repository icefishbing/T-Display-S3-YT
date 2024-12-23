#include "ui.h"

lv_obj_t* ui_Screen1;

void ui_init(void) {
    ui_Screen1 = lv_obj_create(NULL);
    lv_scr_load(ui_Screen1);
    
    // Add your UI elements here
    lv_obj_t* label = lv_label_create(ui_Screen1);
    lv_label_set_text(label, "Hello World!");
    lv_obj_center(label);
} 