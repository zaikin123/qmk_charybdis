#pragma once

#undef DIODE_DIRECTION
#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { GP29, GP26, GP5, GP4, GP9 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { GP27, GP28, GP21, GP6, GP7, GP8 }

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5


/* Handedness. */
#define MASTER_RIGHT

//#define SPLIT_USB_DETECT
//#define SPLIT_USB_TIMEOUT_POLL 10

/* VBUS detection. */
#define USB_VBUS_PIN GP19 

/* serial.c configuration (for split keyboard). */
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN GP1


/* PMW3360 settings. */
#define POINTING_DEVICE_DEBUG
#define CHARYBDIS_CONFIG_SYNC

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
