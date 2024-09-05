/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

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
#define LIN_EN_Pin GPIO_PIN_7
#define LIN_EN_GPIO_Port GPIOA
#define SW_Pin GPIO_PIN_0
#define SW_GPIO_Port GPIOB
#define RS485_TXD_Pin GPIO_PIN_10
#define RS485_TXD_GPIO_Port GPIOB
#define RS485_RXD_Pin GPIO_PIN_11
#define RS485_RXD_GPIO_Port GPIOB
#define RS485_DE_Pin GPIO_PIN_14
#define RS485_DE_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_15
#define LED_GPIO_Port GPIOB
#define CAN_STB_Pin GPIO_PIN_10
#define CAN_STB_GPIO_Port GPIOA
#define RS232_RXD_Pin GPIO_PIN_15
#define RS232_RXD_GPIO_Port GPIOA
#define RS232_TXD_Pin GPIO_PIN_3
#define RS232_TXD_GPIO_Port GPIOB
#define LIN_RSTN_Pin GPIO_PIN_5
#define LIN_RSTN_GPIO_Port GPIOB
#define LIN_TXD_Pin GPIO_PIN_6
#define LIN_TXD_GPIO_Port GPIOB
#define LIN_RXD_Pin GPIO_PIN_7
#define LIN_RXD_GPIO_Port GPIOB
#define CAN_RXD_Pin GPIO_PIN_8
#define CAN_RXD_GPIO_Port GPIOB
#define CAN_TXD_Pin GPIO_PIN_9
#define CAN_TXD_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
