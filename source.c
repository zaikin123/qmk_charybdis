#include QMK_KEYBOARD_H

#include "oled.c"
#include "encoder.c"

// Base layer is the number of layers CYCLE selects from.
// #define BASE_LAYERS 2

// enum custom_keycodes {
//     PLACEHOLDER = SAFE_RANGE,  // can always be here (4 bytes)
//     CYCLE                      // cycle through first BASE_LAYERS (62 bytes)
// };

// enum custom_layers {
//     _QWERTY,
//     _COLEMAK,
//     _LOWER,
//     _RAISE
// };

// // Custom keycode handling.
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // handling this once instead of in each keycode uses less program memory.
//     if ((keycode >= SAFE_RANGE) && !(record->event.pressed)) {
//         return false;
//     }

//     switch (keycode) {
//         case CYCLE:
//             set_single_persistent_default_layer((1+get_highest_layer(default_layer_state)) % BASE_LAYERS);
//             break;
//     }

//     // this uses less memory than returning in each case.
//     return keycode < SAFE_RANGE;
// };
