// Pure QMK keymap for Corne (crkbd), no Vial/VIA.
// Copy this whole `personal` folder into:
//   qmk_firmware/keyboards/crkbd/keymaps/personal
// (or keyboards/crkbd/rev4/keymaps/personal if your qmk_firmware version
// splits rev4 out separately)
// Then build with:
//   qmk compile -kb crkbd/rev4 -km personal
// and flash the resulting .uf2/.hex.

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

// Home row mods, left hand: GUI, ALT, SHIFT, CTRL
#define HM_A LGUI_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LSFT_T(KC_D)
#define HM_F LCTL_T(KC_F)

// Home row mods, right hand: CTRL, SHIFT, ALT, GUI
#define HM_J RCTL_T(KC_J)
#define HM_K RSFT_T(KC_K)
#define HM_L LALT_T(KC_L)
#define HM_SCLN RGUI_T(KC_SCLN)

// Thumb cluster
#define TH_SPC LSFT_T(KC_SPC)
#define TH_ENT RSFT_T(KC_ENT)

const uint16_t PROGMEM keymaps[MATRIX_ROWS][MATRIX_COLS] = {

/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  Tab |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |GUI/A |Alt/S |Sft/D |Ctl/F |   G  |                    |   H  |Ctl/J |Sft/K |Alt/L |GUI/; |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |                    |   N  |   M  |   ,  |   .  |   /  |      |
 * `-----------------------------------------'                    `-----------------------------------------'
 *                     | GUI  | LOWER| Sft/Spc |                | Sft/Ent| RAISE| Esc  |
 *                     `------------------------'                `------------------------'
 */
[_QWERTY] = LAYOUT_split_3x6_3(
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_NO,   HM_A,    HM_S,    HM_D,    HM_F,    KC_G,                        KC_H,    HM_J,    HM_K,    HM_L,    HM_SCLN, KC_NO,
  KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
                              KC_LGUI, MO(_LOWER), TH_SPC,                   TH_ENT,  MO(_RAISE), KC_ESC
),

/*
 * LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   ~  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * `-----------------------------------------'                    `-----------------------------------------'
 *                     | GUI  | LOWER| Sft/Spc |                | Sft/Ent| RAISE| Esc  |
 *                     `------------------------'                `------------------------'
 */
[_LOWER] = LAYOUT_split_3x6_3(
  KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS
),

/*
 * RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * `-----------------------------------------'                    `-----------------------------------------'
 *                     | GUI  | LOWER| Sft/Spc |                | Sft/Ent| RAISE| Esc  |
 *                     `------------------------'                `------------------------'
 */
[_RAISE] = LAYOUT_split_3x6_3(
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS
),

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER]  = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [_RAISE]  = { ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
};
#endif
