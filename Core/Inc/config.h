/*
 * config.h
 *
 *  Created on: Jun 5, 2025
 *      Author: User
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

#define RECU 0
#define FECU 1

#ifdef RECU

#define HUART		&huart2

#endif

#ifdef FECU

#define HUART 		&huart2

#endif

#define 				LOGS(x,y)			HAL_UART_Transmit(HUART, x, y, 100)

#endif /* INC_CONFIG_H_ */
