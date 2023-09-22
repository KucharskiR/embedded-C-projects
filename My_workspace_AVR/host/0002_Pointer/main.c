/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */
#include <stdio.h>

int main(void) {
	char variable = 100;

	printf("Address: %p", &variable);

	char* pvariable = &variable;

	printf("\nPointer value: %d",*pvariable);

	*pvariable = 65;
	printf("\nVariable  new value: %d",variable);

/*	int ageUser;

	printf("Type your age: \n");
	scanf("%d",&ageUser);

	if(ageUser < 18)
		printf("You are to young");

	while(getchar() != '\n');
	getchar();*/

	return 0;
}
