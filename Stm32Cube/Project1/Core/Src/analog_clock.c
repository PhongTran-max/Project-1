/*
 * analog_clock.c
 *
 *  Created on: Sep 28, 2025
 *      Author: NCPC
 */

#include "analog_clock.h"
int clock_pin[12] = {
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7,
	GPIO_PIN_8,
	GPIO_PIN_9,
	GPIO_PIN_10,
	GPIO_PIN_11,
	GPIO_PIN_12,
	GPIO_PIN_13,
	GPIO_PIN_14,
	GPIO_PIN_15
};

void clearAllClock(){
	for(int i=0; i<12; ++i) HAL_GPIO_WritePin(GPIOA, clock_pin[i], SET);
}

void setNumberOnClock(int num){
	if(num < 0 || num > 11) return;
	HAL_GPIO_WritePin(GPIOA, clock_pin[num], RESET);
}

void clearNumberOnClock(int num){
	if(num < 0 || num > 11) return;
	HAL_GPIO_WritePin(GPIOA, clock_pin[num], SET);
}
