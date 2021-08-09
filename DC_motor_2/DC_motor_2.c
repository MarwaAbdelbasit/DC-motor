/*
 * DC_motor_2.c
 *
 * Created: 06/12/2019 04:22:51 م
 *  Author: new
 */ 


#include <avr/io.h>
#include "macros.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

int main(void)
{
	DDRD = 0XFF; //set all pins on port D as output
	SET_BIT(PORTD, 2);
	SET_BIT(PORTD, 3);
    while(1)
    {
		SET_BIT(PORTD, 0);
		_delay_ms(200);
		CLR_BIT(PORTD, 0);
		
		SET_BIT(PORTD, 5);
		_delay_ms(200);
		CLR_BIT(PORTD, 5);
        //TODO:: Please write your application code 
    }
}