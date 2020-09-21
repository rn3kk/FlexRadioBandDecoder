/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx_ll_tim.h"
#include "stm32f1xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin LL_GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define Bit0_Pin LL_GPIO_PIN_0
#define Bit0_GPIO_Port GPIOA
#define Bit1_Pin LL_GPIO_PIN_1
#define Bit1_GPIO_Port GPIOA
#define Bit2_Pin LL_GPIO_PIN_2
#define Bit2_GPIO_Port GPIOA
#define Bit3_Pin LL_GPIO_PIN_3
#define Bit3_GPIO_Port GPIOA
#define Bit4_Pin LL_GPIO_PIN_4
#define Bit4_GPIO_Port GPIOA
#define B160_Pin LL_GPIO_PIN_5
#define B160_GPIO_Port GPIOA
#define B80_Pin LL_GPIO_PIN_6
#define B80_GPIO_Port GPIOA
#define B60_Pin LL_GPIO_PIN_7
#define B60_GPIO_Port GPIOA
#define B10_Pin LL_GPIO_PIN_0
#define B10_GPIO_Port GPIOB
#define B6_Pin LL_GPIO_PIN_1
#define B6_GPIO_Port GPIOB
#define B5760_Pin LL_GPIO_PIN_10
#define B5760_GPIO_Port GPIOB
#define B10368_Pin LL_GPIO_PIN_11
#define B10368_GPIO_Port GPIOB
#define B24048_Pin LL_GPIO_PIN_12
#define B24048_GPIO_Port GPIOB
#define B47088_Pin LL_GPIO_PIN_13
#define B47088_GPIO_Port GPIOB
#define B4_Pin LL_GPIO_PIN_14
#define B4_GPIO_Port GPIOB
#define B40_Pin LL_GPIO_PIN_8
#define B40_GPIO_Port GPIOA
#define B30_Pin LL_GPIO_PIN_9
#define B30_GPIO_Port GPIOA
#define B20_Pin LL_GPIO_PIN_10
#define B20_GPIO_Port GPIOA
#define B17_Pin LL_GPIO_PIN_11
#define B17_GPIO_Port GPIOA
#define B15_Pin LL_GPIO_PIN_12
#define B15_GPIO_Port GPIOA
#define B12_Pin LL_GPIO_PIN_15
#define B12_GPIO_Port GPIOA
#define B2_Pin LL_GPIO_PIN_3
#define B2_GPIO_Port GPIOB
#define B222_Pin LL_GPIO_PIN_4
#define B222_GPIO_Port GPIOB
#define B432_Pin LL_GPIO_PIN_5
#define B432_GPIO_Port GPIOB
#define B902_Pin LL_GPIO_PIN_6
#define B902_GPIO_Port GPIOB
#define B1296_Pin LL_GPIO_PIN_7
#define B1296_GPIO_Port GPIOB
#define B2304_Pin LL_GPIO_PIN_8
#define B2304_GPIO_Port GPIOB
#define B3456_Pin LL_GPIO_PIN_9
#define B3456_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
