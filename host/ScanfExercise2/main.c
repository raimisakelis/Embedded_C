/*
 * main.c
 *
 *  Created on: 18 May 2020
 *      Author: PC
 */


#include <stdio.h>

int main(void)
{
	float number1, number2, number3;
	float average;

	printf("Enter 3 numbers: ");
	/* Here we are using three format specifiers, that means
	 * scanf will wait until we will enter three numbers*/
	scanf("%f %f %f", &number1, &number2, &number3);

	average = (number1 + number2 + number3) / 3;

	printf("\nAverage is: %f", average);

	printf("\nPress enter key to exit the application \n");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();

}
