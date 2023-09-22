/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */

#include <stdio.h>

int main(void) {

	char a, b, c, d, e;

	printf("Enter 6 characters of your choice: ");
//	scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
//
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();

	printf("ASCII codes: %d %d %d %d %d\n", a, b, c, d, e);

	printf("Please press enter to exit");

	while (getchar() != '\n') {

	}
	getchar();

	return 0;
}

