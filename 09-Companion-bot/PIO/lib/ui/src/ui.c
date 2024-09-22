// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: bot

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void full_Animation( lv_obj_t *TargetObject, int delay);
void angry_Animation( lv_obj_t *TargetObject, int delay);
void blink_Animation( lv_obj_t *TargetObject, int delay);
void love_Animation( lv_obj_t *TargetObject, int delay);
void sad_Animation( lv_obj_t *TargetObject, int delay);
void sleepy_Animation( lv_obj_t *TargetObject, int delay);
void awe_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_blink;
lv_obj_t *ui_angry;
lv_obj_t *ui_love;
lv_obj_t *ui_sad;
lv_obj_t *ui_sleepy;
lv_obj_t *ui_awe;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_1072461254[77] = {&ui_img_440651951, &ui_img_440650926, &ui_img_440649901, &ui_img_440657324, &ui_img_440656299, &ui_img_440655274, &ui_img_440654249, &ui_img_440661672, &ui_img_440643239, &ui_img_440642214, &ui_img_1248512660, &ui_img_1248511635, &ui_img_1248510610, &ui_img_1248518033, &ui_img_1248517008, &ui_img_1248515983, &ui_img_1248514958, &ui_img_1248522381, &ui_img_1248503948, &ui_img_1248502923, &ui_img_1722806407, &ui_img_1722807432, &ui_img_1722808457, &ui_img_1722801034, &ui_img_1722802059, &ui_img_1722803084, &ui_img_1722804109, &ui_img_1722796686, &ui_img_1722815119, &ui_img_1722816144, &ui_img_914945698, &ui_img_914946723, &ui_img_914947748, &ui_img_914940325, &ui_img_914941350, &ui_img_914942375, &ui_img_914943400, &ui_img_914935977, &ui_img_914954410, &ui_img_914955435, &ui_img_408702531, &ui_img_408701506, &ui_img_408700481, &ui_img_408707904, &ui_img_408706879, &ui_img_408705854, &ui_img_408704829, &ui_img_408712252, &ui_img_408693819, &ui_img_408692794, &ui_img_1216563240, &ui_img_1216562215, &ui_img_1216561190, &ui_img_1216568613, &ui_img_1216567588, &ui_img_1216566563, &ui_img_1216565538, &ui_img_1216572961, &ui_img_1216554528, &ui_img_1216553503, &ui_img_1754755827, &ui_img_1754756852, &ui_img_1754757877, &ui_img_1754750454, &ui_img_1754751479, &ui_img_1754752504, &ui_img_1754753529, &ui_img_1754746106, &ui_img_1754764539, &ui_img_1754765564, &ui_img_946895118, &ui_img_946896143, &ui_img_946897168, &ui_img_946889745, &ui_img_946890770, &ui_img_946891795, &ui_img_946892820};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void full_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 6000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 0, 76 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 2000);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);

}
void angry_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 12, 25 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_1_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 1000);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_1, 25, 12 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 1000 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_1);

}
void blink_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 0, 12 );
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
void love_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 27, 37 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_1_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 1000);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_1, 37, 27 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 1000 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_1);

}
void sad_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 40, 50 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_1_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 1000);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_1, 50, 40 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 1000 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_1);

}
void sleepy_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 53, 63 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_1_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 1000);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_1, 63, 53 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 1500 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_1);

}
void awe_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 65, 76 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->imgset = ui_imgset_1072461254;
PropertyAnimation_1_user_data->imgset_size = sizeof(ui_imgset_1072461254)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 1000);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_1, 76, 65 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 1000 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_frame );
lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
