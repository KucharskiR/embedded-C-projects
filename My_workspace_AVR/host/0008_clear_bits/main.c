/*
 * main.c
 *
 *  Created on: 5 lip 2023
 *      Author: kucha
 */

#include <stdio.h>
#include <stdint.h>

int main(void){

	int32_t num;

	printf("Enter number: ");
	scanf("%d",&num);

	printf("\nclear: %d", ~(num & 199));

	/* wait for the character */
	printf("\nPress enter to end application...");
	while(getchar() != '\n');

	getchar();
	return 0;
}
