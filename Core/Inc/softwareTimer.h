/*
 * softwareTimer.h
 *
 *  Created on: Nov 26, 2024
 *      Author: DELL F89F
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int timer1_flag;

void setTimer1(int duration);
void timer1Run();

extern int timer2_flag;

void setTimer2(int duration);
void timer2Run();

extern int timer3_flag;

void setTimer3(int duration);
void timer3Run();

#endif /* INC_SOFTWARETIMER_H_ */
