/*
 * pwm.h
 *
 *  Created on: Nov 4, 2016
 *      Author: stefan
 */

#ifndef PWM_H_
#define PWM_H_

void UpdateDutyCycle(unsigned long ulBase, unsigned long ulTimer,
                     unsigned char ucLevel);

void InitPWMModules();

void DeInitPWMModules();



#endif /* PWM_H_ */
