#pragma once

#include "config_common.h"

/* USB device descriptor */
#define VENDOR_ID       0x6964
#define PRODUCT_ID      0x0065
#define DEVICE_VER      0x0001
#define MANUFACTURER    EricLi
#define PRODUCT         Staccato65
#define DESCRIPTION     A 65% keyboard

/* Board matrix dimensions */
#define MATRIX_ROWS 7
#define MATRIX_COLS 10

/* Pin maps */         /* 0   1   2   3   4   5   6   7   8   9 */
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, C7, C6, B6, B5}
#define MATRIX_ROW_PINS { B4, D7, D6, D4, D5, D3, D2}
#define DIODE_DIRECTION COL2ROW

/* RGB settings */
#define RGB_DI_PIN E6
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255  // Maximum brightness level
#define RGBLIGHT_SLEEP          // If defined, the RGB lighting will be switched off when the host goes to sleep
// #define RGBLIGHT_ANIMATIONS     // All animations enable
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING

/* Rotary Encoder Settings */
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { B0 }
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP
#define TAP_CODE_DELAY 50

/* OLED Display Settings */
//#define BONGO_CAT
#define NEW_BONGO_CAT
//#define ANIME_OLED
//#define SUPREME_OLED
#define OLED_TIMEOUT 60000
#define OLED_DISPLAY_ADDRESS 0x3C

/* Features that can be disabled */
#define NO_ACTION_MACRO         // Disable old-style macro handling
#define NO_ACTION_FUNCTION      // Disable old-style function handling
#define NO_ACTION_ONESHOT       // Disable one-shot modifiers
#define FORCE_NKRO              // Having NKRO makes it less compatible
