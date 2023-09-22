/*
 * main.c
 *
 *  Created on: 12 cze 2023
 *      Author: kucha
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB |= 1 << PB0;
	DDRB |= 1 << PB1;
	while (1) {
		for (int i = 0; i < 5; ++i) {
			PORTB = 0b00000001;
			_delay_ms(30);
			PORTB = 0b00000000;
			_delay_ms(40);
		}
		for (int j = 0; j < 5; ++j) {
			PORTB = 0b00000010;
			_delay_ms(30);
			PORTB = 0b00000000;
			_delay_ms(40);
		}
	}
	return 0;
}

