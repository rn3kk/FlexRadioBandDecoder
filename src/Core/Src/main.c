/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
  /*
   INPUTS
	A0 - Bit0
	A1 - Bit1 
	A2 - Bit2 
	A3 - Bit3 
	A4 - Bit4 
   OUTPUTS
	A5 - 160
	A6 - 80
	A7 - 60
	A8 - 40
	A9 - 30
	A10 - 20
	A11 - 17
	A12 - 15
	A15 - 12
	B0 - 10
	B1 - 6
	B3 - 2
	B4 - 222
	B5 - 432
	B6 - 902
	B7 - 1296
	B8 - 2304
	B9 - 3456
	B10 - 5760
	B11 - 10368
	B12 - 24048
	B13 - 47088
	B14 - 4
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
void SetBand (void)
{
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
				&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
				&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//160
			{
				LL_GPIO_SetOutputPin(B160_GPIO_Port, B160_Pin);
				LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
				LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
				LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
				LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
				LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
				LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
				LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
				LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
				LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
				LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
				LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
				LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
				LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
				LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
				LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
				LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
				LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
				LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
				LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
				LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
				LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
				LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);
			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//80
			{
				LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_SetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);
			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//60
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_SetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//40
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_SetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((!LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//30
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_SetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//20
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_SetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((!LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//17
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_SetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//15
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_SetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((!LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//12
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_SetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//10
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_SetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//6
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_SetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((!LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//2
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_SetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//222
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_SetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//432
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_SetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//902
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_SetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//1296
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_SetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&!(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//2304
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_SetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//3456
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_SetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//5760
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_SetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//10368
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_SetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&!(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//24048
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_SetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if (!(LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//47088
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_SetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&!(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
					&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))														//4
			{
		LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
						LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
						LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
						LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
						LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
						LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
						LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
						LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
						LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
						LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
						LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
						LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
						LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
						LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
						LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
						LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
						LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
						LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
						LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
						LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
						LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
						LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
						LL_GPIO_SetOutputPin(B4_GPIO_Port, B4_Pin);

			}
	if ((LL_GPIO_IsInputPinSet(Bit0_GPIO_Port, Bit0_Pin))&&(LL_GPIO_IsInputPinSet(Bit1_GPIO_Port, Bit1_Pin))
						&&(LL_GPIO_IsInputPinSet(Bit2_GPIO_Port, Bit2_Pin))&&(LL_GPIO_IsInputPinSet(Bit3_GPIO_Port, Bit3_Pin))
						&&(LL_GPIO_IsInputPinSet(Bit4_GPIO_Port, Bit4_Pin)))
			{
				LL_GPIO_ResetOutputPin(B160_GPIO_Port, B160_Pin);
				LL_GPIO_ResetOutputPin(B80_GPIO_Port, B80_Pin);
				LL_GPIO_ResetOutputPin(B60_GPIO_Port, B60_Pin);
				LL_GPIO_ResetOutputPin(B40_GPIO_Port, B40_Pin);
				LL_GPIO_ResetOutputPin(B30_GPIO_Port, B30_Pin);
				LL_GPIO_ResetOutputPin(B20_GPIO_Port, B20_Pin);
				LL_GPIO_ResetOutputPin(B17_GPIO_Port, B17_Pin);
				LL_GPIO_ResetOutputPin(B15_GPIO_Port, B15_Pin);
				LL_GPIO_ResetOutputPin(B12_GPIO_Port, B12_Pin);
				LL_GPIO_ResetOutputPin(B10_GPIO_Port, B10_Pin);
				LL_GPIO_ResetOutputPin(B6_GPIO_Port, B6_Pin);
				LL_GPIO_ResetOutputPin(B2_GPIO_Port, B2_Pin);
				LL_GPIO_ResetOutputPin(B222_GPIO_Port, B222_Pin);
				LL_GPIO_ResetOutputPin(B432_GPIO_Port, B432_Pin);
				LL_GPIO_ResetOutputPin(B902_GPIO_Port, B902_Pin);
				LL_GPIO_ResetOutputPin(B1296_GPIO_Port, B1296_Pin);
				LL_GPIO_ResetOutputPin(B2304_GPIO_Port, B2304_Pin);
				LL_GPIO_ResetOutputPin(B3456_GPIO_Port, B3456_Pin);
				LL_GPIO_ResetOutputPin(B5760_GPIO_Port, B5760_Pin);
				LL_GPIO_ResetOutputPin(B10368_GPIO_Port, B10368_Pin);
				LL_GPIO_ResetOutputPin(B24048_GPIO_Port, B24048_Pin);
				LL_GPIO_ResetOutputPin(B47088_GPIO_Port, B47088_Pin);
				LL_GPIO_ResetOutputPin(B4_GPIO_Port, B4_Pin);

			}

}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */

  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_AFIO);
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);

  NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

  /* System interrupt init*/

  /** NOJTAG: JTAG-DP Disabled and SW-DP Enabled
  */
  LL_GPIO_AF_Remap_SWJ_NOJTAG();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM4_Init();
  /* USER CODE BEGIN 2 */
  LL_TIM_EnableCounter(TIM4);
  LL_TIM_EnableIT_UPDATE(TIM4);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  SetBand();
	  LL_mDelay(100);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  LL_FLASH_SetLatency(LL_FLASH_LATENCY_0);
  while(LL_FLASH_GetLatency()!= LL_FLASH_LATENCY_0)
  {
  }
  LL_RCC_HSI_SetCalibTrimming(16);
  LL_RCC_HSI_Enable();

   /* Wait till HSI is ready */
  while(LL_RCC_HSI_IsReady() != 1)
  {

  }
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_1);
  LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_HSI);

   /* Wait till System clock is ready */
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_HSI)
  {

  }
  LL_Init1msTick(8000000);
  LL_SetSystemCoreClock(8000000);
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
