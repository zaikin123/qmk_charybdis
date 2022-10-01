#pragma once

/* Key matrix configuration. */
#define MATRIX_ROWS 10 // Rows are doubled-up.
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS \
    { A3, A2, A1, A0, A10 }
#define MATRIX_COL_PINS \
    { D4, C6, D7, E6, B4 , B5 }


#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25



/* Handedness. */
#define MASTER_RIGHT

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN D0

/* RGB settings. */
/* #define RGB_DI_PIN D3 */

/* PMW3360 settings. */
#define PMW33XX_CS_PIN D1
