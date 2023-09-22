/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */

#include <stdio.h>

int main(void) {
	double a,b,c;
	double average;

//	a = getchar();
//	b = getchar();
//	c = getchar();

	printf("Enter 3 numbers: ");
	scanf("%lf %lf %lf",&a,&b,&c);


	average = (a+b+c)/3;

	printf("\nAverage = %0.10lf\n",average);

	printf("Press enter to exit\n");
	getchar();
	getchar();

	return 0;
}


