/*
 * SPIConnect.h
 *
 *  Created on: Mar 11, 2020
 *      Author: youri
 */

#ifndef SRC_SPICONNECT_H_
#define SRC_SPICONNECT_H_
#include "stm32f0xx_hal.h"

class SPIConnect {
public:
	SPIConnect();
	virtual ~SPIConnect();
	void write(uint8_t data);
private:

};

#endif /* SRC_SPICONNECT_H_ */
