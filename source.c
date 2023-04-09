#include QMK_KEYBOARD_H
#include "TD.h"



// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_RBRC_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_ENT),
    [TD_LBRC_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_SPC),
    [TD_QUOT_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_TAB),
};



// Create a global instance of the tapdance state type
static td_state_t td_state;

// Declare your tapdance functions:

// Function to determine the current tapdance state
td_state_t cur_dance(tap_dance_state_t *state);

// `finished` and `reset` functions for each tapdance keycode
void sftlbrcspc_finished(tap_dance_state_t *state, void *user_data);
void sftlbrcspc_reset(tap_dance_state_t *state, void *user_data);
void lt1rbrcent_finished(tap_dance_state_t *state, void *user_data);
void lt1rbrcent_reset(tap_dance_state_t *state, void *user_data);

// Determine the tapdance state to return
td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    }

    if (state->count == 2) return TD_DOUBLE_SINGLE_TAP;
    else return TD_UNKNOWN; // Any number higher than the maximum state value you return above
}

// Handle the possible states for each tapdance keycode you define:

void sftlbrcspc_finished(tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
            register_code16(KC_LBRC);
            break;
        case TD_SINGLE_HOLD:
            register_mods(MOD_BIT(KC_LSFT)); // For a layer-tap key, use `layer_on(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP: // Allow nesting of 2 parens `((` within tapping term
            tap_code16(KC_SPC);
            register_code16(KC_SPC);
            break;
        default:
            break;
    }
}

void sftlbrcspc_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_SINGLE_TAP:
            unregister_code16(KC_LBRC);
            break;
        case TD_SINGLE_HOLD:
            unregister_mods(MOD_BIT(KC_LSFT)); // For a layer-tap key, use `layer_off(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP:
            unregister_code16(KC_SPC);
            break;
        default:
            break;
    }
}

// LT1_RBRC_ENT
void lt1rbrcent_finished(tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
            register_code16(KC_RBRC);
            break;
        case TD_SINGLE_HOLD:
            layer_on(1); // For a layer-tap key, use `layer_on(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP: // Allow nesting of 2 parens `((` within tapping term
            tap_code16(KC_ENT);
            register_code16(KC_ENT);
            break;
        default:
            break;
    }
}

void lt1rbrcent_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_SINGLE_TAP:
            unregister_code16(KC_RBRC);
            break;
        case TD_SINGLE_HOLD:
            layer_off(1); // For a layer-tap key, use `layer_off(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ENT);
            break;
        default:
            break;
    }
}

// Define `ACTION_TAP_DANCE_FN_ADVANCED()` for each tapdance keycode, passing in `finished` and `reset` functions
tap_dance_action_t tap_dance_actions[] = {
    [LSFT_LBRC_SPC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sftlbrcspc_finished, sftlbrcspc_reset),
    [LT1_RBRC_ENT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lt1rbrcent_finished, lt1rbrcent_reset)
};

// Combos 
const uint16_t PROGMEM bspc_combo[] = {KC_LBRC, KC_RBRC, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_QUOT, KC_LCTL, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(bspc_combo, KC_BSPC),
    COMBO(del_combo, KC_DEL), // keycodes with modifiers are possible too!
};
