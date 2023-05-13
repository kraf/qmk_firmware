// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
  U_BASE,
  U_NAV,
  U_NUM,
  U_SYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [U_BASE] = LAYOUT( /* Qwerty */
  KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                                                    KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
  KC_A,              LGUI_T(KC_S),      LALT_T(KC_D),      LCTL_T(KC_F),      KC_G,                                                    KC_H,              RCTL_T(KC_J),      LALT_T(KC_K),      RGUI_T(KC_L),      KC_QUOT,
  LSFT_T(KC_Z),      ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_GRV,            KC_BSLS,           KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    RSFT_T(KC_SLSH),
  KC_ESC,            KC_TAB,            KC_LGUI,           KC_ESC,            LT(U_NAV,KC_BSPC), KC_TAB,            LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),  KC_RSFT,           KC_MINS,           KC_SCLN,           KC_ENT ),

  [U_NAV] = LAYOUT( /* MIRYOKU_ALTERNATIVES_NAV_INVERTEDT */
  KC_NO,             KC_NO,             KC_NO,             DF(U_BASE),        KC_NO,                                                   KC_INS,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,
  KC_NO,             KC_LGUI,           KC_LALT,           KC_LCTL,           KC_NO,                                                   KC_CAPS,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,
  KC_LSFT,           KC_ALGR,           DF(U_NUM),         DF(U_NAV),         KC_NO,             KC_GRV,            KC_BSLS,           KC_LBRC,           KC_LCRC,           KC_NO,             KC_NO,             KC_NO,
  KC_NO,             KC_NO,             KC_LGUI,           KC_NO,             KC_NO,             KC_NO,             KC_ENT,            KC_SPC,            KC_RSFT,           KC_MINS,           KC_NO,             KC_NO),

  [U_NUM] = LAYOUT( /* MIRYOKU_ALTERNATIVES_NUM */
  /* KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           KC_NO,             DF(U_BASE),        DF(U_EXTRA),       DF(U_TAP),         RESET, */
  KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,                                                 KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,
  KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,                                                  KC_NO,             KC_LCTL,           KC_LALT,           KC_LGUI,           KC_NO,
  KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           KC_GRV,            KC_BSLS,           KC_NO,             KC_NO,             KC_NO,             KC_ALGR,           KC_LSFT,
  KC_NO,             KC_NO,             KC_NO,             KC_DOT,            KC_0,              KC_MINS,           KC_NO,             KC_NO,             KC_RSFT,           KC_NO,             KC_NO,             KC_NO),

  [U_SYM] = LAYOUT( /* MIRYOKU_ALTERNATIVES_SYM */
  KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,                                                 KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,
  KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,                                                 KC_NO,             KC_LCTL,           KC_LALT,           KC_LGUI,           KC_NO,
  KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           KC_GRV,            KC_BSLS,           KC_NO,             KC_NO,             KC_NO,             KC_ALGR,           KC_LSFT,
  KC_NO,             KC_NO,             KC_NO,             KC_LPRN,           KC_RPRN,           KC_UNDS,           KC_NO,             KC_NO,             KC_RSFT,           KC_NO,             KC_NO,             KC_NO)
};
