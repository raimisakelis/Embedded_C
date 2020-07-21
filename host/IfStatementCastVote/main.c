/*
 * main.c
 *
 *  Created on: 21 May 2020
 *      Author: PC
 */


#include<stdio.h>
#include<stdint.h>

int main (void) {



	int age = 0;

	printf("Enter your age :");
	scanf("%d", &age);

	if(age < 18){
		printf("Sorry ! you are not eligible to vote\n");
	}

	if(age >= 18){
			printf("Congrats ! you are eligible to vote\n");
		}

	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();

	return 0;
}
