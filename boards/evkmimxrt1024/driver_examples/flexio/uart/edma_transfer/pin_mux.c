/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MIMXRT1024xxxxx
package_id: MIMXRT1024DAG5A
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();

/* GPIO_AD_B1_00~GPIO_AD_B1_05 can only be configured as flexspi function. Note that it can't be modified here */
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_00_FLEXSPI_A_DATA03,1U);
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_01_FLEXSPI_A_SCLK,1U);
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_02_FLEXSPI_A_DATA00,1U);
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_03_FLEXSPI_A_DATA02,1U);
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_04_FLEXSPI_A_DATA01,1U);
    IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_05_FLEXSPI_A_SS0_B,1U);
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '81', peripheral: FLEXIO1, signal: 'IO, 06', pin_signal: GPIO_AD_B1_09, open_drain: Disable}
  - {pin_num: '82', peripheral: FLEXIO1, signal: 'IO, 07', pin_signal: GPIO_AD_B1_08, open_drain: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_08_FLEXIO1_FLEXIO07,  /* GPIO_AD_B1_08 is configured as FLEXIO1_FLEXIO07 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_09_FLEXIO1_FLEXIO06,  /* GPIO_AD_B1_09 is configured as FLEXIO1_FLEXIO06 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B1_08_FLEXIO1_FLEXIO07,  /* GPIO_AD_B1_08 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B1_09_FLEXIO1_FLEXIO06,  /* GPIO_AD_B1_09 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/