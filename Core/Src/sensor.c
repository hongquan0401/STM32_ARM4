/*
 * sensor.c
 *
 *  Created on: Nov 12, 2024
 *      Author: QUAN PHAM
 */
#include "sensor.h"

uint16_t adc_data[5];

void sensor_init() {
	HAL_ADC_Start_DMA(&hadc1, (unint16_t *)adc_data, 5);
}

void sensor_Read() {
	HAL_ADC_Start_DMA(&hadc1, (unint16_t *)adc_data, 5);
}

uint16_t sensor_GetLight() {
	return adc_data[2];
}

uint16_t sensor_GetPotentiometer() {
	return adc_data[3];
}

float sensor_GetVoltage() {
	return ((float) adc_data[0] * 3.3 * 12) / (4095 * 1.565);
}

float sensor_GetCurrent() {
	return (((float)adc_data[1] * 3.3 * 1000) / (4095 * 0.647) - 2.5) * 5 / 2.5;
}

float sensor_GetTemperature() {
	return ((float) adc_data[4] * 330) / 4095;
}
