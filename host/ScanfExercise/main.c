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

	printf("Enter the first number: ");

	/* fflush(stdout) will flush the contents of the output buffer
	 * to the display. stdout stays for standard output.
	 * fflush usage also depends on the type of console we use*/
	fflush(stdout);

	/* &number1 indicates address of variable number1 */
	scanf("%f",&number1);

	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%f",&number2);

	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%f",&number3);

	average = (number1 + number2 + number3) / 3;
	printf("\nAverage is: %f", average);

	printf("\nPress enter key to exit the application \n");

	/* while loop is needed to read every data from the input buffer*/
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	/* getchar() is needed to hold application. In another words,
	 *  until user enters a character this API will wait*/
	getchar();


}
