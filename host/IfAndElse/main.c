/*
 * main.c
 *
 *  Created on: 21 May 2020
 *      Author: PC
 */


#include<stdio.h>
#include<stdint.h>

int main (void) {




	int32_t number1, number2;

	printf("Enter first number (integer) :");
	scanf("%d", &number1);

	printf("\nEnter second number (integer):");
	scanf("%d", &number2);

	if(number1 == number2){
		printf("Both numbers are equal\n");
	} else if (number1 > number2){
		printf("%d is bigger than %d\n", number1, number2);
	} else {
		printf("%d is bigger than %d\n", number2, number1);
	}


	/* Or we can use this expression*/
//	if(number1 == number2){
//		printf("Both numbers are equal\n");
//	} else {
//		if (number1 > number2){
//			printf("%d is bigger than %d\n", number1, number2);
//		} else {
//			printf("%d is bigger than %d\n", number2, number1);
//		}
//	}
//


	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();

	return 0;
}
