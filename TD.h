
// Tap Dance keycodes
enum td_keycodes {
    TD_LSFT_LBRC_SPC,
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
