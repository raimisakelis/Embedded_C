/*
 * main.c
 *
 *  Created on: 19 May 2020
 *      Author: PC
 */


#include <stdio.h>

int main(void)
{
	char char1, char2, char3, char4, char5, char6;

	printf("Enter 6 characters of your choice: ");

	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("\nASCII codes : %u, %u, %u, %u, %u, %u", char1, char2, char3, char4, char5, char6);

	printf("\nPress enter key to exit the application \n");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();

}
