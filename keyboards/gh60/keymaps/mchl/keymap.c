#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___X___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* 0: qwerty */
  LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, ___X___, KC_ENT,
    KC_LSFT, ___X___, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, ___X___, KC_RSFT,
    MO(1),   KC_LGUI, KC_LALT,                   KC_SPC,                             ___X___, KC_RALT, MO(2),  KC_APP,  MO(1)
  ),
  /* 1: arrows + movements */
  LAYOUT(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___X___,
    ___X___, ___X___, KC_UP,   ___X___, ___X___, ___X___, ___X___, ___X___, KC_INS,  ___X___, ___X___, KC_HOME, KC_END,  KC_PSCR,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_PGUP, KC_PGDN, ___X___, _______,
    _______, ___X___, KC_DEL,  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, _______,
    _______, _______, _______,                   ___X___,                            ___X___, _______, ___X___, _______, _______
  ),

    /* 2: media */
  LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,
    RESET,   _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, ___X___, _______,
    _______, ___X___, _______, _______, _______, _______, _______, _______, _______, KC_MRWD, KC_MFFD, _______, ___X___, _______,
    _______, _______, _______,                   KC_MPLY,                            ___X___, _______, _______, _______, _______
  ),

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

void matrix_init_user(){

}

void matrix_scan_user(void) {



};
