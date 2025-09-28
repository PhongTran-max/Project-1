/*
 * analog_clock.h
 *
 *  Created on: Sep 28, 2025
 *      Author: NCPC
 */

#ifndef INC_ANALOG_CLOCK_H_
#define INC_ANALOG_CLOCK_H_

#include "stm32f1xx_hal.h"

void clearAllClock();
void setNumberOnClock(int num);
void clearNumberOnClock(int num);

#endif /* INC_ANALOG_CLOCK_H_ */
