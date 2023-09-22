/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */

#include <stdio.h>

int main(void) {
	float a,b,c;
	float average;

//	a = getchar();
//	b = getchar();
//	c = getchar();

	printf("Enter first number: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("\nEnter second number: ");
	fflush(stdout);
	scanf("%f",&b);
	printf("\nEnter third number: ");
	fflush(stdout);
	scanf("%f",&c);

	average = (float)(a+b+c)/3;

	printf("\nAverage = %0.10f\n",average);

	printf("Press enter to exit\n");
	getchar();
	getchar();

	return 0;
}


