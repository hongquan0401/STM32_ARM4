/*
 * sensor.h
 *
 *  Created on: Nov 12, 2024
 *      Author: QUAN PHAM
 */
#include "main.h"

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

void sensor_init();

void sensor_Read();

uint16_t sensor_GetLight();

uint16_t sensor_GetPotentiometer();

float sensor_GetVoltage();

float sensor_GetCurrent();

float sensor_GetTemperature();

#endif /* INC_SENSOR_H_ */
