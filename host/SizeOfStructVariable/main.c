/*
 * main.c
 *
 *  Created on: 26 Jun 2020
 *      Author: PC
 */

#include <stdint.h>
#include <stdio.h>

struct carModel{
	uint32_t carNumber;//this is a member element
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float 	carWeight;

};// this semicolon at the end of the body is mandatory


int main(void){



	struct carModel carBMW = {2021,15000,220,1330};

	printf("Size of struct carModel is : %d\n", sizeof(carBMW));//we can write like this
	printf("Size of struct carModel is : %d\n", sizeof(struct carModel));// or write like that

	getchar();

	return 0;
}


/* Usually structure definition is created outside the program
 * (outside the function) or in the header file.
 * It's better to create the structure definition in the header file.
 */

