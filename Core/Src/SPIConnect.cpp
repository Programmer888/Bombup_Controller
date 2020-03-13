/*
 * SPIConnect.cpp
 *
 *  Created on: Mar 11, 2020
 *      Author: youri
 */

#include "SPIConnect.h"


SPI_HandleTypeDef hspi2;


void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

static void MX_SPI2_Init(void)
{

  /* USER CODE BEGIN SPI2_Init 0 */

  /* USER CODE END SPI2_Init 0 */

  /* USER CODE BEGIN SPI2_Init 1 */

  /* USER CODE END SPI2_Init 1 */
  /* SPI2 parameter configuration*/
  hspi2.Instance = SPI2;
  hspi2.Init.Mode = SPI_MODE_MASTER;
  hspi2.Init.Direction = SPI_DIRECTION_2LINES;
  hspi2.Init.DataSize = SPI_DATASIZE_16BIT;
  hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi2.Init.NSS = SPI_NSS_HARD_OUTPUT;
  hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
  hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi2.Init.CRCPolynomial = 7;
  hspi2.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
  hspi2.Init.NSSPMode = SPI_NSS_PULSE_ENABLE;
  if (HAL_SPI_Init(&hspi2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI2_Init 2 */

  /* USER CODE END SPI2_Init 2 */

}



SPIConnect::SPIConnect() {
	// TODO Auto-generated constructor stub
	MX_SPI2_Init();
}

SPIConnect::~SPIConnect() {
	// TODO Auto-generated destructor stub
}

void SPIConnect::write (uint8_t address, uint16_t value)
{
	uint16_t d1 = 200;
	//d1 |= (0x1 << 12);
	uint16_t data = value | (address << 13);
	//uint16_t data = 200;

	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_12, GPIO_PIN_RESET);  // pull the cs pin low

	HAL_SPI_Transmit (&hspi2, (uint8_t*)&data, sizeof(uint8_t), 100);  // write data to register

	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_12, GPIO_PIN_SET);  // pull the cs pin high

	//HAL_Delay(1000);
}



/**
  * @brief SPI2 Initialization Function
  * @param None
  * @retval None
  */
