#ifndef __HELPERS_H
#define __HELPERS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f0xx_hal.h"

#define BUTTON_3 15
#define BUTTON_2 14
#define BUTTON_1 13
#define BUTTON_START 12
#define BUTTON_STOP 11
#define BUTTON_6 10
#define BUTTON_5 9
#define BUTTON_4 8
#define BUTTON_0 5
#define BUTTON_9 4
#define BUTTON_8 3
#define BUTTON_7 2
#define BUTTON_TIME 1
#define BUTTON_POWER 0

#define spi_cs_low() do { HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET); } while (0)
#define spi_cs_high() do { HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET); } while (0)

#define SetBit(number,bit) (number|=(1<<bit))		
#define ClearBit(number,bit) (number&=(~(1<<bit)))

typedef struct
{
  uint32_t last_recv;
  uint16_t curr_index;
  uint16_t buf_size;
  uint8_t* buf;
} linear_buf;

void spi_test(uint16_t value);
uint8_t linear_buf_init(linear_buf *lb, uint16_t size);
void linear_buf_reset(linear_buf *lb);
void linear_buf_add(linear_buf *lb, uint8_t c);
uint8_t linear_buf_line_available(linear_buf *lb);

#ifdef __cplusplus
}
#endif

#endif


