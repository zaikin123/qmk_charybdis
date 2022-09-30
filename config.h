#pragma once

/* Key matrix configuration. */
#define MATRIX_ROWS 10 // Rows are doubled-up.
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS \
    { F1, B7, C6, D4, B5 }
#define MATRIX_COL_PINS \
    { D5, C7, F0, D7, E6, B4 }

#define MATRIX_ROW_PINS_RIGHT \
    { D5, F0, C6, D4, B5 }
#define MATRIX_COL_PINS_RIGHT \
    { F1, C7, B7, D7, E6, B4 }

#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25



/* Handedness. */
#define MASTER_RIGHT

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN D2

/* RGB settings. */
/* #define RGB_DI_PIN D3 */

/* PMW3360 settings. */
#define PMW33XX_CS_PIN B0
