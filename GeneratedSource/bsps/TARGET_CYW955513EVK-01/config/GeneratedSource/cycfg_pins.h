/*******************************************************************************
 * File Name: cycfg_pins.h
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.50.0
 * device-db 4.28.0.8806
 * mtb-pdl-cat5 2.2.0.2580
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#if defined (CY_USING_HAL)
#define CYBSP_D6 (BT_GPIO_0)
#define CYBSP_D10 (BT_GPIO_16)
#define CYBSP_USER_LED CYBSP_D10
#define CYBSP_USER_LED1 CYBSP_D10
#define CYBSP_SPI_CS CYBSP_D10
#define CYBSP_D13 (BT_GPIO_17)
#define CYBSP_USER_LED2 CYBSP_D13
#define CYBSP_SPI_CLK CYBSP_D13
#define CYBSP_D9 (BT_GPIO_2)
#define CYBSP_ALS_INT CYBSP_D9
#define CYBSP_D2 (BT_GPIO_3)
#define CYBSP_D4 (BT_GPIO_4)
#define CYBSP_USER_BTN CYBSP_D4
#define CYBSP_USER_BTN1 CYBSP_D4
#define CYBSP_BTN_VOL_UP CYBSP_D4
#define CYBSP_D7 (BT_GPIO_5)
#define CYBSP_BTN_VOL_DN CYBSP_D7
#define CYBSP_I2C_SDA (BT_GPIO_6)
#define CYBSP_I2C_SCL (BT_GPIO_7)
#define CYBSP_D1 (LHL_GPIO_2)
#define CYBSP_DEBUG_UART_TX CYBSP_D1
#define CYBSP_D0 (LHL_GPIO_3)
#define CYBSP_DEBUG_UART_RX CYBSP_D0
#define CYBSP_A0 (LHL_GPIO_4)
#define CYBSP_DEBUG_UART_CTS CYBSP_A0
#define CYBSP_A1 (LHL_GPIO_5)
#define CYBSP_DEBUG_UART_RTS CYBSP_A1
#define CYBSP_D5 (LHL_GPIO_6)
#define CYBSP_D11 (LHL_GPIO_8)
#define CYBSP_A2 CYBSP_D11
#define CYBSP_SPI_MOSI CYBSP_D11
#define CYBSP_POT CYBSP_D11
#define CYBSP_D12 (LHL_GPIO_9)
#define CYBSP_A3 CYBSP_D12
#define CYBSP_SPI_MISO CYBSP_D12
#define CYBSP_BT_UART_CTS (BT_UART_CTS_N)
#define CYBSP_BT_UART_RTS (BT_UART_RTS_N)
#define CYBSP_BT_UART_RX (BT_UART_RXD)
#define CYBSP_BT_UART_TX (BT_UART_TXD)
#define CYBSP_DMIC_CK (DMIC_CK)
#define CYBSP_DMIC_DQ (DMIC_DQ)
#define CYBSP_TDM1_DI (TDM1_DI)
#define CYBSP_TDM1_DO (TDM1_DO)
#define CYBSP_TDM1_MCK (TDM1_MCK)
#define CYBSP_TDM1_SCK (TDM1_SCK)
#define CYBSP_TDM1_WS (TDM1_WS)
#define CYBSP_TDM2_SCK (TDM2_SCK)
#define CYBSP_TDM2_DI (TDM2_DI)
#define CYBSP_TDM2_MCK (TDM2_MCK)
#define CYBSP_TDM2_DO (TDM2_DO)
#define CYBSP_TDM2_WS (TDM2_WS)
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
