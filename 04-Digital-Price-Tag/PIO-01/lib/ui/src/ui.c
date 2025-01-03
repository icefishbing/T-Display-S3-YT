// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Digital Pricetag

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void wifi_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_screen_wifi
void ui_screen_wifi_screen_init(void);
void ui_event_screen_wifi( lv_event_t * e);
lv_obj_t *ui_screen_wifi;
lv_obj_t *ui_Img_wifi;
lv_obj_t *ui_Label_wifi;


// SCREEN: ui_screen_tag
void ui_screen_tag_screen_init(void);
lv_obj_t *ui_screen_tag;
lv_obj_t *ui_Label_product;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Panel_save;
lv_obj_t *ui_label_now_price;
lv_obj_t *ui_label_was_price;
lv_obj_t *ui_label_save_value;
lv_obj_t *ui_label_per;
lv_obj_t *ui_label_save;
lv_obj_t *ui_img_barcode;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_wifi_[4] = {&ui_img_wifi_icon_wifi_1_png, &ui_img_wifi_icon_wifi_2_png, &ui_img_wifi_icon_wifi_3_png, &ui_img_wifi_icon_wifi_4_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void wifi_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_wifi_;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_wifi_)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 2000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 0, 4 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 1000);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_screen_wifi( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_screen_change( &ui_screen_tag, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, &ui_screen_tag_screen_init);
}
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      wifi_Animation(ui_Img_wifi, 0);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_screen_wifi_screen_init();
ui_screen_tag_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_screen_wifi);
}
