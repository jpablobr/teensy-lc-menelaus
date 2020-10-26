/* -*- mode: c++ -*-
*/

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Layer 0: Default/Main (Dvorak) layer (mostly letters and modifiers)
   * .--------------------------------------------.       .-------------------------------.
   * |' (FN2)      |, (FN3)|. (FN4)|P  |Y         |       |F  |G  |C   |R   |L            |
   * |--------------------------------------------|       |-------------------------------|
   * |A            |O      |E      |U  |I         |       |D  |H  |T   |N   |S            |
   * |--------------------------------------------|       |-------------------------------|
   * |; SHIFT (FN5)|Q      |J      |K  |X         |       |B  |M  |W   |V   |Z SHIFT (FN6)|
   * |--------------------------------------------+-------+-------------------------------|
   * |LCTRL        |LALT   |LGUI   |FN0|TAB (FN11)|ESC|FN1|SPC|FN0|RGUI|RALT|RCTRL        |
   * '------------------------------------------------------------------------------------'
   */
  KEYMAP( \
    FN2, FN3, FN4, P,  Y,            F,  G,  C,   R,   L, \
    A,   O,   E,   U,  I,            D,  H,  T,   N,   S, \
    FN5, Q,   J,   K,  X,            B,  M,  W,   V,   FN6, \
    LCTL,LALT,LGUI,FN0,FN11,FN28,FN1,SPC,FN0,RGUI,RALT,RCTL \
  ), \

  /*
   * Layer 1 (layover on FN0 and switch on FN1)
   * LHS: F1-F15
   * RHS: Movement
   * SPC -> ESC
   * .----------------------------.         .--------------------------------.
   * |F1   |F2  |F3  |F4    |F5   |         |   |GUI+LEFT|PGDN|PGUP|GUI+RIGHT|
   * |----------------------------|         |--------------------------------|
   * |F6   |F7  |F8  |F9    |F10  |         |   |LEFT    |DOWN|UP  |RIGHT    |
   * |----------------------------|         |--------------------------------|
   * |F11  |F12 |F13 |F14   |F15  |         |   |        |END |HOME|         |
   * |----------------------------+---------+--------------------------------|
   * |TRNS |TRNS|TRNS|>TRNS<|TRNS |TRNS|TRNS|F13|>TRNS<  |TRNS|TRNS|TRNS     |
   * '-----------------------------------------------------------------------'
   */
  KEYMAP( \
    F1,  F2,  F3,  F4,  F5,            NO, FN8, PGDN,PGUP,FN9, \
    F6,  F7,  F8,  F9,  F10,           NO, LEFT,DOWN,UP,  RIGHT, \
    F11, F12, F13, F14, F15,           NO, NO,  END, HOME,F13, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,F13,TRNS,TRNS,TRNS,TRNS \
  ), \

 /*
  * Layer 2 (FN2): Numbers while pressing and "'" on tap
   * .------------------------.         .------------------------.
   * |>'< |    |    |    |    |         |    |7   |8   |9   |0   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |+   |4   |5   |6   |=   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |-   |1   |2   |3   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    FN2, NO,  NO,  NO,  NO,            NO,     7,   8,   9,   0, \
    NO,  NO,  NO,  NO,  NO,            KP_PLUS,4,   5,   6,   EQL, \
    NO,  NO,  NO,  NO,  NO,            MINUS,  1,   2,   3,   NO, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS \
  ), \

  /*
   * Layer 3 (FN3): Symbols (numbers shifted) while pressing and "," on tap
   * .------------------------.         .------------------------.
   * |    |>,< |    |    |    |         |    |&   |*   |    |    |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |    |%   |%   |^   |    |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |    |!   |@   |#   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    NO,  FN3, NO,  NO,  NO,            NO,  FN18,FN19,NO,  NO, \
    NO,  NO,  NO,  NO,  NO,            NO,  FN15,FN16,FN17,NO, \
    NO,  NO,  NO,  NO,  NO,            NO,  FN12,FN13,FN14,NO, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
  ), \

  /*
   * Layer 4 (FN4): Symbols while pressing and "." on tap
   * .------------------------.         .------------------------.
   * |    |    |>.< |    |    |         |    |{   |}   |(   |)   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |?   |[   |]   |`   |~   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |_   |/   |\   ||   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    NO,  NO,  FN4, NO,  NO,            NO,  FN20,FN21,FN22,FN23, \
    NO,  NO,  NO,  NO,  NO,            FN24,LBRC,RBRC,GRV, FN25, \
    NO,  NO,  NO,  NO,  NO,            FN26,SLSH,BSLS,FN27,NO, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
  ), \

  /*
   * Layer 5 (FN11): Vol, media and misc while pressing and "Tab" on tap
   * .-------------------------.         .----------------------------.
   * |    |    |    |    |     |         |MUTE   |VOL-|VOL+|CAPS|BSPC |
   * |-------------------------|         |----------------------------|
   * |    |    |    |    |     |         |       |HELP|ESC |F13 |ENTER|
   * |-------------------------|         |----------------------------|
   * |    |    |    |    |     |         |MNXT   |MPRV|MSTP|MPLY|MSEL |
   * |-------------------------+---------+----------------------------|
   * |TRNS|TRNS|TRNS|TRNS|>TAB<|TRNS|TRNS|GUI+DEL|TRNS|TRNS|TRNS|TRNS |
   * '----------------------------------------------------------------'
   */
  KEYMAP( \
    NO,  NO,  NO,  NO,  NO,            MUTE,VOLD,VOLU,CAPS,BSPC, \
    NO,  NO,  NO,  NO,  NO,            NO,  HELP,ESC, F13, ENT, \
    NO,  NO,  NO,  NO,  NO,            MNXT,MPRV,MSTP,MPLY,MSEL, \
    TRNS,TRNS,TRNS,TRNS,FN11,TRNS,TRNS,FN10,TRNS,TRNS,TRNS,TRNS \
  ), \

  /*
   * Layer 6 (FN11): Mouse
   * KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5 for mouse buttons
   * KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_R for mouse cursor
   * KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_R for mouse wheel
   * .-------------------------.         .------------------------.
   * |    |    |    |    |     |         |   |    |    |    |     |
   * |-------------------------|         |------------------------|
   * |    |    |    |    |     |         |   |LEFT|DOWN|UP  |RIGHT|
   * |-------------------------|         |------------------------|
   * |    |    |    |    |     |         |   |LEFT|DOWN|UP  |RIGHT|
   * |-------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS |
   * '------------------------------------------------------------'
   */
  KEYMAP( \
    NO,  NO,  NO,  NO,  NO,            BTN1,BTN2,BTN3,BTN4,BTN5, \
    NO,  NO,  NO,  NO,  NO,            NO,  MS_L,MS_D,MS_U,MS_R,
    NO,  NO,  NO,  NO,  NO,            NO,  WH_L,WH_D,WH_U,WH_R,
    TRNS,TRNS,TRNS,TRNS,FN11,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
  )
};

/*
 * Macro definition
 *
 * GUI_LEFT, GUI_RIGHT and ALT_DEL
 */
enum macro_id {
  GUI_LEFT,
  GUI_RIGHT,
  ALT_DEL,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
  case GUI_LEFT:
    if (record->event.pressed) {
      return (MACRO( D(LGUI), D(LEFT), END ));
    } else {
      return (MACRO(U(LEFT), U(LGUI), END));
    }
  case GUI_RIGHT:
    if (record->event.pressed) {
      return (MACRO( D(RGUI), D(RIGHT), END ));
    } else {
      return (MACRO( U(RIGHT), U(RGUI), END ));
    }
  case ALT_DEL:
    if (record->event.pressed) {
      return (MACRO( D(LALT), D(BSPC), END ));
    } else {
      return (MACRO( U(LALT), U(BSPC), END ));
    }
  }
  return MACRO_NONE;
}

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),              // FN0: Turn main FN layer(1) on momentarily (overlay)
  [1] = ACTION_LAYER_TOGGLE(1),                 // FN1: Turn main FN layer(1) on and off
  [2] = ACTION_LAYER_TAP_KEY(2, KC_QUOT),       // FN2: Turn number layer(2) on while pressed and "'" key on tap
  [3] = ACTION_LAYER_TAP_KEY(3, KC_COMM),       // FN3: Turn symbol(shifted) layer(3) on while pressed and "," key on tap
  [4] = ACTION_LAYER_TAP_KEY(4, KC_DOT),        // FN4: Turn symbol layer(4) on while pressed and "." key on tap
  [5] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SCLN), // FN5: Activate left shift while pressed and ";" key on tap
  [6] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_Z),    // FN6: Activate right shift while pressed and "Z" key on tap
  [8] = ACTION_MACRO(GUI_LEFT),                 // FN8: GUI + LEFT (move left by word)
  [9] = ACTION_MACRO(GUI_RIGHT),                // FN9: GUI + RIGHT (move right by word)
  [10] = ACTION_MACRO(ALT_DEL),                 // FN10: ALT + BACKSPACE (backwards delete by word)
  [11] = ACTION_LAYER_TAP_KEY(5, KC_TAB),       // FN11: Turn misc layer(5) on while pressed and "TAB" key on tap
  [12] = ACTION_MODS_KEY(MOD_LSFT, KC_1),       // FN12: !
  [13] = ACTION_MODS_KEY(MOD_LSFT, KC_2),       // FN13: @
  [14] = ACTION_MODS_KEY(MOD_LSFT, KC_3),       // FN14: #
  [15] = ACTION_MODS_KEY(MOD_LSFT, KC_4),       // FN15: $
  [16] = ACTION_MODS_KEY(MOD_LSFT, KC_5),       // FN16: %
  [17] = ACTION_MODS_KEY(MOD_LSFT, KC_6),       // FN17: ^
  [18] = ACTION_MODS_KEY(MOD_LSFT, KC_7),       // FN18: &
  [19] = ACTION_MODS_KEY(MOD_LSFT, KC_8),       // FN19: *
  [20] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),    // FN20: {
  [21] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),    // FN21: }
  [22] = ACTION_MODS_KEY(MOD_LSFT, KC_9),       // FN22: (
  [23] = ACTION_MODS_KEY(MOD_LSFT, KC_0),       // FN23: )
  [24] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),    // FN24: ?
  [25] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),     // FN25: ~
  [26] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),    // FN26: _
  [27] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),    // FN27: |
  [28] = ACTION_LAYER_TOGGLE(6),                // FN28: Turn layer(6) on and off
};
