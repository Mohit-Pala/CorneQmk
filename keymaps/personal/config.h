#pragma once

// Home row mod tuning - tap fast, hold for mod
#define TAPPING_TERM 180
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
#define TAPPING_TERM_PER_KEY

// Per-key RGB backlight - adjust to taste
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_SLEEP
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#endif
