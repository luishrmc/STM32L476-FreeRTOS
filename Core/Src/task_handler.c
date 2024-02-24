/*
 * task_handler.c
 *
 *  Created on: Feb 23, 2024
 *      Author: luish
 */

#include "main.h"


void menuTask (void* pvParameters)
{
	while(1)
	{

	}
}

void cmdTask (void* pvParameters)
{
	BaseType_t ret;

	while(1)
	{
		// wait until receive some notification -> portMAX_DELAY
		ret = xTaskNotifyWait(0,0, NULL, portMAX_DELAY);

		// the notification is received
		if(ret == pdTRUE)
		{
			ret = uxQueueMessagesWaiting( (*(QueueHandle_t*)(pvParameters)) );

			if(ret != 0)
			{
				ret = 13;
			}
		}
	}
}

void printTask (void* pvParameters)
{
	while(1)
	{

	}
}

void ledTask (void* pvParameters)
{
	while(1)
	{

	}
}

void rtcTask (void* pvParameters)
{
	while(1)
	{

	}
}
