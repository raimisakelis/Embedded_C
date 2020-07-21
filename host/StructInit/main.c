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


	/* We can create either local variables or global variables. No problem.
	 * There are two ways to initialize struct carModel variables */


	 /* 1. We can initialize variable, when we are defining it
	  * This is also called as C89 method and here the order is important */
	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel carFord = {4031,35000,160,1900.96};


	/* 2. Second method is called C99 method. And in C99 method order
	 *  is not important, but here we have to use designated initializers
	 *  using dot operator.
	 *  (In addition we can use const keyword to guard values of our member elements)*/
	struct carModel const carMazda = {.carNumber=2081,.carWeight=1000,.carMaxSpeed=190,.carPrice=9000};

	/* When the structure variable is created, to access the member elements
	 * we should use a .(dot) operator.*/

	printf("Details of car BMW is as follows\n");
	printf("carNumber = %u\n", carBMW.carNumber);
	printf("carPrice = %u\n", carBMW.carPrice);
	printf("carMaxSpeed = %u\n", carBMW.carMaxSpeed);
	printf("carWeight = %f\n", carBMW.carWeight);

	/* We can change (overwrite) the value of member elements of some structure
	 * variables by assigning new values to the member elements of the structure variable */
	carFord.carNumber = 2000;

	printf("\nDetails of carFord is as follows\n");
	printf("carNumber = %u\n", carFord.carNumber);
	printf("carPrice = %u\n", carFord.carPrice);
	printf("carMaxSpeed = %u\n", carFord.carMaxSpeed);
	printf("carWeight = %f\n", carFord.carWeight);

	return 0;
}


/* Usually structure definition is created outside the program
 * (outside the function) or in the header file.
 * It's better to create the structure definition in the header file.
 */

