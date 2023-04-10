#include "process_tap_dance.h"
#include "action.h"

// Tap Dance keycodes
enum td_keycodes {
    TD_LSFT_LBRC_SPC = SAFE_RANGE,
    TD_LT1_RBRC_ENT,
    TD_RBRC_ENT,
    TD_LBRC_SPC,
    TD_QUOT_TAB
};
// Define a type containing as many tapdance states as you need
typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_SINGLE_TAP
} td_state_t;

#define SFTLBRCSPC TD(TD_LSFT_LBRC_SPC)
#define LT1RBRCENT TD(TD_LT1_RBRC_ENT)

// Define `ACTION_TAP_DANCE_FN_ADVANCED()` for each tapdance keycode, passing in `finished` and `reset` functions
tap_dance_action_t tap_dance_actions[] = {
    [TD_LSFT_LBRC_SPC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sftlbrcspc_finished, sftlbrcspc_reset),
    [TD_LT1_RBRC_ENT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lt1rbrcent_finished, lt1rbrcent_reset),
};

// Combos 
const uint16_t PROGMEM bspc_combo[] = {KC_LBRC, KC_RBRC, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_QUOT, KC_LCTL, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(bspc_combo, KC_BSPC),
    COMBO(del_combo, KC_DEL), // keycodes with modifiers are possible too!
};




/*// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_RBRC_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_ENT),
    [TD_LBRC_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_SPC),
    [TD_QUOT_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_TAB),
}; */