/**
 * @file lv_conf.h
 * Configuration file for v8.3.9
 */

#ifndef LV_CONF_H
#define LV_CONF_H

#include <stdint.h>

/* Display configuration */
#define LV_HOR_RES_MAX          480
#define LV_VER_RES_MAX          480
#define LV_COLOR_DEPTH          16
#define LV_COLOR_16_SWAP        0

/* Memory configuration */
#define LV_MEM_CUSTOM           0
#define LV_MEM_SIZE            (32U * 1024U)
#define LV_MEM_ADR             0x0
#define LV_MEM_POOL_INCLUDE    <stdlib.h>
#define LV_MEM_POOL_ALLOC      malloc
#define LV_MEM_POOL_FREE       free

/* HAL configuration */
#define LV_TICK_CUSTOM         0
#define LV_DPI_DEF             130

/* Feature configuration */
#define LV_USE_PERF_MONITOR    0
#define LV_USE_LOG             0
#define LV_USE_ASSERT_NULL     1
#define LV_USE_ASSERT_MEM      1
#define LV_USE_ASSERT_STR      1
#define LV_USE_ASSERT_OBJ      1
#define LV_USE_ASSERT_STYLE    1

/* Drawing configuration */
#define LV_DRAW_COMPLEX        1
#define LV_SHADOW_CACHE_SIZE   0
#define LV_CIRCLE_CACHE_SIZE   4

/* GPU configuration */
#define LV_USE_GPU             0
#define LV_USE_GPU_STM32_DMA2D 0
#define LV_USE_GPU_NXP_PXP     0
#define LV_USE_GPU_NXP_VG_LITE 0
#define LV_USE_GPU_SDL         0

/* Enable built-in fonts */
#define LV_FONT_MONTSERRAT_8   0
#define LV_FONT_MONTSERRAT_10  0
#define LV_FONT_MONTSERRAT_12  1
#define LV_FONT_MONTSERRAT_14  1
#define LV_FONT_MONTSERRAT_16  1
#define LV_FONT_MONTSERRAT_18  0
#define LV_FONT_MONTSERRAT_20  0
#define LV_FONT_MONTSERRAT_22  0
#define LV_FONT_MONTSERRAT_24  0
#define LV_FONT_MONTSERRAT_26  0
#define LV_FONT_MONTSERRAT_28  0
#define LV_FONT_MONTSERRAT_30  0
#define LV_FONT_MONTSERRAT_32  0
#define LV_FONT_MONTSERRAT_34  0
#define LV_FONT_MONTSERRAT_36  0
#define LV_FONT_MONTSERRAT_38  0
#define LV_FONT_MONTSERRAT_40  0
#define LV_FONT_MONTSERRAT_42  0
#define LV_FONT_MONTSERRAT_44  0
#define LV_FONT_MONTSERRAT_46  0
#define LV_FONT_MONTSERRAT_48  0

/* Enable features */
#define LV_USE_ANIMATION       1
#define LV_USE_SHADOW         1
#define LV_USE_GROUP          1
#define LV_USE_FILESYSTEM     1
#define LV_USE_IMG           1
#define LV_USE_LINE          1
#define LV_USE_ARC           1
#define LV_USE_CHART         1
#define LV_USE_CALENDAR      1
#define LV_USE_TEXTAREA      1
#define LV_USE_SPINBOX       1
#define LV_USE_TILEVIEW      1
#define LV_USE_MSGBOX        1
#define LV_USE_KEYBOARD      1

#endif /*LV_CONF_H*/ 