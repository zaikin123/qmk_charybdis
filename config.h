#pragma once

/* Key matrix configuration. */

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { GP29, GP26, GP5, GP4 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { GP27, GP28, GP21, GP6, GP7 }

/* VBUS detection. */
#define USB_VBUS_PIN GP19

#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0
