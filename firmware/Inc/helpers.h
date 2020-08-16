#ifndef __HELPERS_H
#define __HELPERS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f0xx_hal.h"

#define button_4 15
#define button_5 14
#define button_6 13
#define button_stop 12
#define button_start 11
#define button_1 10
#define button_2 9
#define button_3 8
#define button_power 7
#define button_time 6
#define button_7 5
#define button_8 4
#define button_9 3
#define button_0 2

#define spi_cs_low() do { HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET); } while (0)
#define spi_cs_high() do { HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET); } while (0)

#define SetBit(number,bit) (number|=(1<<bit) )		
#define ClearBit(number,bit) (number&=(~(1<<bit)))

void spi_test(uint16_t value);

#ifdef __cplusplus
}
#endif

#endif


