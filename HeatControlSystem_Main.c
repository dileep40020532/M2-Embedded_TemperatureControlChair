/**
 * @file HeatControlSystem_Main.c
 * @author Dileep Varadaraju (vdileep542@gmail.com)
 * @brief The main program to execute the heat control system in a chair
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "ButtonSensorHeaterLED.h"
#include "TemperatureSensorADC.h"
#include "ADC_PWMoutput.h"
#include "SerialCommunicationUART.h"


/**
 * @brief Main function where code is executed
 * 
 * @return int 
 */

int main(void)
{	
	// Initializing registers required for various functions
    peripheral_init();
	adc_init();
    pwm_init();
    USARTInit(103);

	//Messages showing temperature detected by sensor
    uint16_t temp=0,previous=0;
    char data1[]="Temperature:20°C\n";
    char data2[]="Temperature:25°C\n";
    char data3[]="Temperature:29°C\n";
    char data4[]="Temperature:33°C\n";

    while(1)
    {
        if (!buttons())				
        {
            continue;
        }
        else
        {
            while(1)
            {   previous=temp;
                temp=adc_read(0);
                if (temp==previous)
                {
                    continue;
                }
                if (temp<=200)
                {
                    OCR0A=51;
                    USARTWritestring(data1);
                    _delay_ms(200);
                }
                else if(temp<=500)
                {
                    OCR0A=102;
                    USARTWritestring(data2);
                    _delay_ms(200);
                }
                else if(temp<=700)
                {
                    OCR0A=179;
                    USARTWritestring(data3);
                    _delay_ms(200);
                }
                else
                {
                    OCR0A=243;
                    USARTWritestring(data4);
                    _delay_ms(200);
                }
            }
        }
    }
    return 0;
}
