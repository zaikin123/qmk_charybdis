#pragma once

/* Key matrix configuration. */

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { F4, F5, F6, F7, B5 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { D1, D4, C6, D7, E6, B4 }

#undef DIODE_DIRECTION
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25



/* Handedness. */
#define MASTER_RIGHT
#define SPLIT_USB_DETECT

/* serial.c configuration (for split keyboard). */
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2

/* RGB settings. */
/* #define RGB_DI_PIN D3 */

/* PMW3360 settings. */
#define POINTING_DEVICE_DEBUG
#define CHARYBDIS_CONFIG_SYNC

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT


#undef PMW33XX_CS_PIN
#define PMW33XX_CS_PIN B6
#define PMW3360_CPI 400

#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0


#define LAYER_POINTER 1

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE

/* Disable unused features. */
#define NO_ACTION_ONESHOT

/* Charybdis-specific features. */

#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 1000
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 8
