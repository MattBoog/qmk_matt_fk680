# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = tinyuf2

ifeq ($(strip $(BOOTLOADER)), tinyuf2)
    MCU_LDSCRIPT = STM32F103x8_uf2
    FIRMWARE_FORMAT = uf2
	BOARD = STM32_F103_STM32DUINO
endif

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
NKRO_ENABLE = yes
RGBLIGHT_ENABLE = no

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE


