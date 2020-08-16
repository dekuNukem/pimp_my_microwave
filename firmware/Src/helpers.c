#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "helpers.h"
#include "shared.h"

void spi_test(uint16_t value)
{
  uint8_t spi_buf[2];
  spi_buf[0] = (uint8_t)(value & 0xff);
  spi_buf[1] = (uint8_t)(value >> 8);
  spi_cs_low();
  HAL_SPI_Transmit(&hspi1, spi_buf, 2, 100);
  spi_cs_high();
}
