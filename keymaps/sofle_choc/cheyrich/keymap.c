#include QMK_KEYBOARD_H
#include "keymap_us_international.h"


// #####################################################################################################################################
// #####################################################################################################################################




// #####################################################################################################################################
// Layer names
// #####################################################################################################################################

enum sofle_choc_cheyrich_layers {
    _BASE,
    _SYM,
    _NAV,
    _FUN,
};

// #####################################################################################################################################
// Convenience and other definitions
// #####################################################################################################################################

// Cut/copy/paste and undo/redo method selection
#if defined (CLIPBOARD_FUN)
    #define U_UND   KC_UNDO
    #define U_CUT   KC_CUT
    #define U_CPY   KC_COPY
    #define U_PST   KC_PSTE
    #define U_RDO   KC_AGIN
#elif defined (CLIPBOARD_MAC)
    #define U_UND   LCMD(KC_Z)
    #define U_CUT   LCMD(KC_X)
    #define U_CPY   LCMD(KC_C)
    #define U_PST   LCMD(KC_V)
    #define U_RDO   SCMD(KC_Z)
#elif defined (CLIPBOARD_WIN)
    #define U_UND   C(KC_Z)
    #define U_CUT   C(KC_X)
    #define U_CPY   C(KC_C)
    #define U_PST   C(KC_V)
    #define U_RDO   C(KC_Y)
#else
    #define U_UND   KC_UNDO
    #define U_CUT   S(KC_DEL)
    #define U_CPY   C(KC_INS)
    #define U_PST   S(KC_INS)
    #define U_RDO   KC_AGIN
#endif

// Other abbreviations of key combinations/features
#define DEL_RSFT   RSFT_T(KC_DEL)
#define TAB_SYM    LT(_SYM, KC_TAB)
#define TAB_FUN    LT(_FUN, KC_TAB)
#define BSPC_NAV   LT(_NAV, KC_BSPC)
#define BSPC_FUN   LT(_FUN, KC_BSPC)

#define OSM_LG     OSM(MOD_LGUI)
#define OSM_LA     OSM(MOD_LALT)
#define OSM_LS     OSM(MOD_LSFT)
#define OSM_LC     OSM(MOD_LCTL)
#define OSM_RA     OSM(MOD_RALT)


// #####################################################################################################################################
// Keymap definition
// #####################################################################################################################################


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_WH_U, KC_F,    KC_L,    KC_H,    KC_D,    KC_V,                         KC_P,    KC_W,    KC_O,    KC_U,    KC_SLSH, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_WH_D, KC_S,    KC_R,    KC_N,    KC_T,    KC_M,                         KC_Y,    KC_C,    KC_E,    KC_I,    KC_A,    XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
       XXXXXXX, KC_X ,   KC_J,    KC_B,    KC_K,    KC_Q,    KC_MUTE,    KC_MPLY, KC_Z,    KC_G,    KC_QUOT, KC_COMM, KC_DOT,  XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         XXXXXXX, XXXXXXX, KC_ESC,  KC_SPC,  TAB_SYM,    BSPC_NAV,DEL_RSFT,KC_ENT,  XXXXXXX, XXXXXXX
                      //`--------------------------------------------'  `--------------------------------------------'
  ),

  [_SYM] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, KC_GRV,  KC_MINS, KC_EQL,  US_EURO,                      XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS, KC_SLSH, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
       XXXXXXX, U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   XXXXXXX,    XXXXXXX, XXXXXXX, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         XXXXXXX, XXXXXXX, KC_ESC,  KC_SPC,  _______,    BSPC_FUN,DEL_RSFT,KC_ENT,  XXXXXXX, XXXXXXX
                      //`--------------------------------------------'  `--------------------------------------------'
  ),

  [_NAV] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PAUS, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, OSM_LG,  OSM_LA,  OSM_LS,  OSM_LC,  OSM_RA,                       KC_INS,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
       XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_PSCR, KC_BSPC, KC_WH_U, KC_WH_D, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         XXXXXXX, XXXXXXX, KC_ESC,  KC_SPC,  TAB_FUN,    _______, DEL_RSFT,KC_ENT,   XXXXXXX, XXXXXXX
                      //`--------------------------------------------'  `--------------------------------------------'
  ),

  [_FUN] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CW_TOGG, XXXXXXX,                      AS_RPT,  XXXXXXX, AS_UP,   AS_DOWN, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                      //`--------------------------------------------'  `--------------------------------------------'
  ),

};


// #####################################################################################################################################
// Combo keys
// #####################################################################################################################################

#if defined(COMBO_ENABLE)
const uint16_t PROGMEM a_dia[] =  { KC_A, KC_SLSH, COMBO_END };
const uint16_t PROGMEM o_dia[] =  { KC_O, KC_E,    COMBO_END };
const uint16_t PROGMEM u_dia[] =  { KC_U, KC_I,    COMBO_END };
const uint16_t PROGMEM eszett[] = { KC_S, KC_F,    COMBO_END };

combo_t key_combos[] = {
    COMBO(a_dia,  US_ADIA),
    COMBO(o_dia,  US_ODIA),
    COMBO(u_dia,  US_UDIA),
    COMBO(eszett, US_SS),
};
#endif

// #####################################################################################################################################
// Rotary encoder
// #####################################################################################################################################

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),       ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_SYM]  = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),       ENCODER_CCW_CW(U_UND, U_RDO) },
    [_NAV]  = { ENCODER_CCW_CW(C(KC_LEFT), C(KC_RGHT)), ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [_FUN]  = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),       ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
};
#endif


// #####################################################################################################################################
// Tapping term customization
// #####################################################################################################################################

#if defined (TAPPING_TERM_PER_KEY)
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return TAPPING_TERM;
    }
}
#endif



