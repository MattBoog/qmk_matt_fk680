/* Copyright 2022 ZhaQian
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define VENDOR_ID       0x00AA
#define PRODUCT_ID      0xAA14
#define DEVICE_VER      0x0001
#define MANUFACTURER    ZhaQian
#define PRODUCT         S80
#define DESCRIPTION     Keyboard

#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { C13, C15, C14, A4, A5, B9 }
#define MATRIX_COL_PINS { A15, B3, B4, B5, B6, B7, B8, A6, A7, B0, B12, B13, B14, B1, B15, A8, A9 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define QMK_KEYS_PER_SCAN 12
#define FORCE_NKRO

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN A10
#define RGBLED_NUM 11
#define DRIVER_LED_TOTAL RGBLED_NUM
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#define WS2812_DMA_CHANNEL 5
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 245
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#ifdef RGB_MATRIX_CUSTOM_KB
#define ENABLE_RGB_MATRIX_CYCLE_BANDVAL
#define ENABLE_RGB_MATRIX_CYCLE_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_DOWN_UP
#define ENABLE_RGB_MATRIX_CYCLE_IN_OUT
#define ENABLE_RGB_MATRIX_CYCLE_RIGHT_LEFT
#define ENABLE_RGB_MATRIX_KITT_RGB
#endif
#endif

