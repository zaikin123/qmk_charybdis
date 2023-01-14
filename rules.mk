SRC += source.c
# MCU name
MCU = STM32F411

# Bootloader selection
BOOTLOADER = stm-dfu
CONVERT_TO = stemcell
STMC=yes 
STMC_IS=yes



# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = WS2812
LTO_ENABLE = yes

# if firmware size over limit, try this option
# LTO_ENABLE = yes

LAYOUTS = split_3x5_3

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

SERIAL_DRIVER = usart
DEBOUNCE_TYPE = asym_eager_defer_pk
