#ifndef HW_DEF_H_
#define HW_DEF_H_



#include "bsp.h"



#define _DEF_FIRMWATRE_VERSION    "V240905R1"
#define _DEF_BOARD_NAME           "STM32G4-AUTO"



#define _USE_HW_LED
#define      HW_LED_MAX_CH          1

#define _USE_HW_UART
#define      HW_UART_MAX_CH         5
#define      HW_UART_CH_LPUART      _DEF_UART1
#define      HW_UART_CH_LIN         _DEF_UART2
#define      HW_UART_CH_RS232       _DEF_UART3
#define      HW_UART_CH_RS485       _DEF_UART4
#define      HW_UART_CH_USB         _DEF_UART5

#define _USE_HW_LOG
#define      HW_LOG_CH              HW_UART_CH_RS485
#define      HW_LOG_BOOT_BUF_MAX    2048
#define      HW_LOG_LIST_BUF_MAX    4096

#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    32
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    8
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_CLI_GUI
#define      HW_CLI_GUI_WIDTH       80
#define      HW_CLI_GUI_HEIGHT      24

#define _USE_HW_BUTTON
#define      HW_BUTTON_MAX_CH       1

#define _USE_HW_SWTIMER
#define      HW_SWTIMER_MAX_CH      8

#define _USE_HW_RTC
#define      HW_RTC_BOOT_MODE       RTC_BKP_DR3
#define      HW_RTC_RESET_BITS      RTC_BKP_DR4

#define _USE_HW_USB
#define _USE_HW_CDC
#define      HW_USE_CDC             1
#define      HW_USE_MSC             0

#define _USE_HW_CAN
#define      HW_CAN_MAX_CH          1
#define      HW_CAN_MSG_RX_BUF_MAX  32

#define _USE_HW_I2C
#define      HW_I2C_MAX_CH          1
#define      HW_I2C_CH_FRAM         _DEF_I2C1

#define _USE_HW_FRAM
#define      HW_FRAM_MAX_SIZE       (2*1024*8) // bits

#define _USE_HW_GPIO
#define      HW_GPIO_CH_LIN_EN      0
#define      HW_GPIO_MAX_CH         1

#endif
