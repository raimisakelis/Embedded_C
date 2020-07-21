/*
 * main.c
 *
 *  Created on: 19 May 2020
 *      Author: PC
 */


#include<stdio.h>

int main(void)
{

	//0x0007FFF8E3C3824



	/* Compiler will consider 0x0007FFF8E3C3824 not as normal value
	 * or data, but as pointer. This is a valid pointer variable definition
	 * and initialization.
	 * address1 is called as a pointer variable of type char* */
	char* address1 = (char*) 0x0007FFF8E3C3824;


	/*Irrespective of the pointer variable type compiler will reserve
	 * 8 bytes (in 64bit machine) of memory (depending of machine type
	 * 8bit, 32bit or 64 bit) to store a pointer.*/

	/* The pointer data type decides the behavior of the operations
	 * carried out on the pointer variable.
	 * Operations: read, write, increment, decrement*/


	/* Read operation on address2 variable yields 1 byte of data*/
	char* address2 = (char*) 0x0007FFF8E3C3824;

	/* Read operation on address2 variable yields 4 byte of data*/
	int* address3 = (int*) 0x0007FFF8E3C3824;

	/* Read operation on address2 variable yields 8 byte of data*/
	long long int* address4 = (long long int*) 0x0007FFF8E3C3824;



	return 0;
}
