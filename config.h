#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x414B // AK
#define PRODUCT_ID      0x0052 // 82
#define DEVICE_VER      0x0001
#define MANUFACTURER    Atlantis
#define PRODUCT         AK82
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, F7, D6, B7, D4, D5 }
#define MATRIX_COL_PINS { D7, B4, C6, C7, F6, F5, F4, F1, F0, B1, B2, B3, D1, D0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define FORCE_NKRO
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_LAYERS //NEW
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF //NEW

#define RGB_DI_PIN B0
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS

#define RGBLED_NUM 82
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 180
#endif

#endif