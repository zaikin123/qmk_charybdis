#pragma once

/* Key matrix configuration. */

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { F4, F5, F6, F7, B6 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { D4, C6, D7, E6, B4 , B5 }




/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25



/* Handedness. */
#define MASTER_RIGHT

/* serial.c configuration (for split keyboard). */
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D0

/* RGB settings. */
/* #define RGB_DI_PIN D3 */

/* PMW3360 settings. */
#undef PMW33XX_CS_PIN
#define PMW33XX_CS_PIN D1
