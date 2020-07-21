/*
 * main.c
 *
 *  Created on: 21 May 2020
 *      Author: PC
 */


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main (void) {




	float number1, number2;

	printf("Enter first number (integer) :");

	/* This code snippet is needed to handle exception
	 * when input is not number but character */
	if (scanf("%f", &number1) == 0){
		printf("invalid input! Exiting ..\n");
		wait_for_user_input();//it hold application until user press enter key
		return 0;
	}

	printf("\nEnter second number (integer):");
	if (scanf("%f", &number2) == 0){
		printf("invalid input! Exiting ..\n");
		wait_for_user_input();
		return 0;
	}

	/* This part of code is needed to avoid break down of the application.
	 * So, we are storing only integer part of the real numbers*/
	int32_t n1, n2;
	n1 = number1;
	n2 = number2;


	if ((n1 != number1) || (n2 != number2)){
		printf("Warning ! comparing only integer part\n");
	}



	if(n1 == n2){
		printf("Both numbers are equal\n");
	} else if (n1 > n2){
		printf("%d is bigger than %d\n", n1, n2);
	} else {
		printf("%d is bigger than %d\n", n2, n1);
	}


	wait_for_user_input();

}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();
}


