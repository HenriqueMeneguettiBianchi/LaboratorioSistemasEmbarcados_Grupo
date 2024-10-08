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
#define PRESSED   '1'
#define RELEASED  '0'
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef struct
{

  unsigned char ucCurrentState;
  unsigned char ucUp;
  unsigned char ucDown;
  unsigned char ucLeft;
  unsigned char ucRight;
  unsigned char ucEnter;
} mainButtonState;
extern mainButtonState buttonState;
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
#define Motor_Esq_PWM_Pin GPIO_PIN_0
#define Motor_Esq_PWM_GPIO_Port GPIOC
#define Motor_Dir_PWM_Pin GPIO_PIN_1
#define Motor_Dir_PWM_GPIO_Port GPIOC
#define IR1_AD_Pin GPIO_PIN_0
#define IR1_AD_GPIO_Port GPIOA
#define LPUART1_TX_Pin GPIO_PIN_2
#define LPUART1_TX_GPIO_Port GPIOA
#define LPUART1_RX_Pin GPIO_PIN_3
#define LPUART1_RX_GPIO_Port GPIOA
#define IR2_AD_Pin GPIO_PIN_6
#define IR2_AD_GPIO_Port GPIOA
#define LCD_I2C_SCL_Pin GPIO_PIN_4
#define LCD_I2C_SCL_GPIO_Port GPIOC
#define BT_Enter_Pin GPIO_PIN_5
#define BT_Enter_GPIO_Port GPIOC
#define Motor_Dir_IN1_Pin GPIO_PIN_12
#define Motor_Dir_IN1_GPIO_Port GPIOB
#define IR3_AD_Pin GPIO_PIN_13
#define IR3_AD_GPIO_Port GPIOB
#define IR4_AD_Pin GPIO_PIN_15
#define IR4_AD_GPIO_Port GPIOB
#define BT_Baixo_Pin GPIO_PIN_7
#define BT_Baixo_GPIO_Port GPIOC
#define BT_Esq_Pin GPIO_PIN_8
#define BT_Esq_GPIO_Port GPIOC
#define BT_Dir_Pin GPIO_PIN_9
#define BT_Dir_GPIO_Port GPIOC
#define LCD_I2C_SDA_Pin GPIO_PIN_8
#define LCD_I2C_SDA_GPIO_Port GPIOA
#define IR5_AD_Pin GPIO_PIN_9
#define IR5_AD_GPIO_Port GPIOA
#define Motor_Esq_IN4_Pin GPIO_PIN_10
#define Motor_Esq_IN4_GPIO_Port GPIOA
#define LedRed_Pin GPIO_PIN_11
#define LedRed_GPIO_Port GPIOA
#define LedGreen_Pin GPIO_PIN_12
#define LedGreen_GPIO_Port GPIOA
#define T_SWDIO_Pin GPIO_PIN_13
#define T_SWDIO_GPIO_Port GPIOA
#define T_SWCLK_Pin GPIO_PIN_14
#define T_SWCLK_GPIO_Port GPIOA
#define Buzzer_PWM_Pin GPIO_PIN_15
#define Buzzer_PWM_GPIO_Port GPIOA
#define T_SWO_Pin GPIO_PIN_3
#define T_SWO_GPIO_Port GPIOB
#define Encoder_Esq_TIM_Pin GPIO_PIN_4
#define Encoder_Esq_TIM_GPIO_Port GPIOB
#define Encoder_Dir_TIM_Pin GPIO_PIN_5
#define Encoder_Dir_TIM_GPIO_Port GPIOB
#define BT_Cima_Pin GPIO_PIN_6
#define BT_Cima_GPIO_Port GPIOB
#define Motor_Esq_IN3_Pin GPIO_PIN_7
#define Motor_Esq_IN3_GPIO_Port GPIOB
#define LedBlue_Pin GPIO_PIN_8
#define LedBlue_GPIO_Port GPIOB
#define Motot_Dir_IN2_Pin GPIO_PIN_9
#define Motot_Dir_IN2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
