#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "helpers.h"
#include "shared.h"

/*

15  button_4
14  button_5
13  button_6
12  button_stop
11  button_start
10  button_1
9   button_2
8   button_3
7   button_power
6   button_time
5   button_7
4   button_8
3   button_9
2   button_0
1   UNUSED
0   UNUSED

*/

void spi_test(uint16_t value)
{
  uint8_t spi_buf[2];
  spi_buf[0] = value & 0xff;
  spi_buf[1] = (value >> 8);
  spi_cs_low();
  HAL_SPI_Transmit(&hspi1, spi_buf, 2, 100);
  spi_cs_high();
}
