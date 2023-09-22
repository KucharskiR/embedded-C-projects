/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */
#include <stdio.h>
#include <stdint.h>

int main(void) {
	int32_t income;
    float tax;

	printf("Enter the income:");
	scanf("%d",&income);

	if(income < 9525){
		tax = 0;
	}else if(income >= 9526 || income <= 38700){
		tax = income * (0.12);
	}else if(income >= 38701 || income <= 82500){
		tax = income * (0.22);
	}else if(income >= 82500){
		tax = income * (0.32) + 1000;
	}

	printf("Tax: %0.2f", tax);

	/* wait for the character */
	printf("\nPress enter to end application...");
	while(getchar() != '\n');

	getchar();

	return 0;
}


