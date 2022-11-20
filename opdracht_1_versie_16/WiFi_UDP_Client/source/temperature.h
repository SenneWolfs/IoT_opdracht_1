/*
 * temperature.h
 *
 *  Created on: 20 Nov 2022
 *      Author: Senne
 */

#ifndef SOURCE_TEMPERATURE_H_
#define SOURCE_TEMPERATURE_H_

/*
 * THERMISTOR PIN CONFIG MACROS - CY8CPROTO-062-WiFi-BT kit
 */
#define THERM_GND	P10_3
#define THERM_VDD	P10_0
#define THERM_OUT	P10_2


/*******************************************************************************
 * Header file includes
 ******************************************************************************/
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"


/*******************************************************************************
 * Global variable
 ******************************************************************************/
extern QueueHandle_t queue_handle_data;


/*******************************************************************************
 * Function prototype
 ******************************************************************************/
void temperature_task(void* param);


#endif /* SOURCE_CAPSENSE_TASK_H_ */
