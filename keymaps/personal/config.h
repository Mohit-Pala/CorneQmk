#pragma once

// Home row mod tuning - tap fast, hold for mod
#define TAPPING_TERM 180
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
#define TAPPING_TERM_PER_KEY

// RGB backlight (underglow) - adjust to taste
#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LIMIT_VAL 150
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#endif
