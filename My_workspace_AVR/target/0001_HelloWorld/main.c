/*
 * main.c
 *
 *  Created on: 12 cze 2023
 *      Author: kucha
 */
#define F_CPU 16000000UL
#define BAUD 19200
#define MYUBRR F_CPU/16/BAUD-1

#include "usart_printf/usart_printf.h"
#include <stdint.h>
#include <util/delay.h>
#include <avr/io.h>
#include <stdio.h>

int main() {
    usart_initialize();
	stdout = &uart_output;

    printf("Olusia\n");
    _delay_ms(800);
    printf("jest\n");
    _delay_ms(800);
    printf("Krowiszonem\n");
    _delay_ms(800);
    printf(" <3<3\n");
    _delay_ms(800);
    printf("<3<3<3\n");
    _delay_ms(800);
    printf(" <3<3\n");
    _delay_ms(800);
    printf("  <3\n");

    while(1) {

    }
}
