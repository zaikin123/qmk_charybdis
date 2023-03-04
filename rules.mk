SRC += source.c
# MCU name
# MCU = RP2040

# Bootloader selection
# BOOTLOADER = rp2040

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.
SERIAL_DRIVER = vendor
LAYOUT = LAYOUT_split_3x5_2
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
