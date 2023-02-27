#undef  DIODE_DIRECTION
#define DIODE_DIRECTION ROW2COL
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { F6, F5, B6, D7, E6, B4 }
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { D0, F7, C6, D4, B5 }


/* Handedness. */
#undef MASTER_RIGHT
#define MASTER_LEFT
#define SPLIT_USB_DETECT
