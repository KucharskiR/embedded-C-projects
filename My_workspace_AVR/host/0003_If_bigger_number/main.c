/*
 * main.c
 *
 *  Created on: 26 cze 2023
 *      Author: kucha
 */
#include <stdio.h>
#include <stdint.h>

int main(void) {
	int32_t a,b;

	printf("Enter the number(integer):");
	scanf("%d",&a);
	getchar();
	printf("\nEnter the number(integer):");
	scanf("%d",&b);

	if(a > b){
		printf("%d is bigger",a);
	} else{
		if(b > a){
		printf("%d is bigger",b);
		}
		if(a == b)
		printf("Both are the same");
	}

	while(getchar() != '\n');

	getchar();

	return 0;
}


