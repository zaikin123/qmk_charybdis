// Tap Dance keycodes
enum td_keycodes {
    LSFT_LBRC_SPC,
    LT1_RBRC_ENT,
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

// Define `ACTION_TAP_DANCE_FN_ADVANCED()` for each tapdance keycode, passing in `finished` and `reset` functions
tap_dance_action_t tap_dance_actions[] = {
    [LSFT_LBRC_SPC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sftlbrcspc_finished, sftlbrcspc_reset),
    [LT1_RBRC_ENT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lt1rbrcent_finished, lt1rbrcent_reset)
};
