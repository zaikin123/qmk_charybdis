#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_RBRC_ENT,
    TD_LBRC_SPC,
    TD_QUOT_TAB
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_RBRC_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_ENT),
    [TD_LBRC_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_SPC),
    [TD_QUOT_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_TAB),
};

/*// Add tap dance item to your keymap in place of a keycode
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // ...
    TD(TD_RBRC_ENT),
    TD(TD_LBRC_SPC),
    TD(TD_QUOT_TAB)
    // ...
};*/

const uint16_t PROGMEM bspc_combo[] = {KC_LBRC, KC_RBRC, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_QUOT, KC_LCTL, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(bspc_combo, KC_BSPC),
    COMBO(del_combo, KC_DEL), // keycodes with modifiers are possible too!
};
