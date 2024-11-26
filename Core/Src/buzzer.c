/*
 * buzzer.c
 *
 *  Created on: Nov 12, 2024
 *      Author: QUAN PHAM
 */

#include "buzzer.h"

uint8_t dutycycle = 0;

void buzzer_init() {
	HAL_TIM_PWM_Start(&htim13, TIM_CHANNEL_1);
}

void buzzer_SetVolume(uint8_t _duty_cycle) {
	if (_duty_cycle < 0 ) dutycycle = 0;
	else if (_duty_cycle > 99) dutycycle = 99;
		else dutycycle = _duty_cycle;
	__HAL_TIM_SET_COMPARE(&htim13, TIM_CHANNEL_1, dutycycle);
}
