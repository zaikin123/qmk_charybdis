#include "process_tap_dance.h"
#include "action.h"

// Tap Dance keycodes
enum td_keycodes {
    TD_LSFT_LBRC_SPC = 0,
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
