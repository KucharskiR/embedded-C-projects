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

	printf("\n4th: %d",(num | 8));
	printf("\n7th: %d",(num | 64));

	/* wait for the character */
	printf("\nPress enter to end application...");
	while(getchar() != '\n');

	getchar();
	return 0;
}
