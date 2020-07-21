/*
 * main.c
 *
 *  Created on: 22 May 2020
 *      Author: PC
 */

#include<stdio.h>
#include<stdint.h>


int main(void){

	uint8_t age = 19;

	(age < 18) ? printf("you are not eligible to vote\n") : printf("Congrats !!! you can vote\n");

	return 0;
}

