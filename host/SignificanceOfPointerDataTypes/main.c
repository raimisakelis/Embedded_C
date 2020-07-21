/*
 * main.c
 *
 *  Created on: 19 May 2020
 *      Author: PC
 */

#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;


int main(void)
{



	//char* pAddress = (char*)&g_data;

	//short* pAddress = (short*)&g_data;

	int* pAddress = (int*)&g_data;


	printf("value of pAddress %p\n", pAddress);
	printf("value at address %p is %x\n", pAddress, *pAddress);

	/* When we are using char* variable type address is incrementing by 1.
	 * When we are using short* variable type address incrementing by 2.
	 * int* variable type will fetch 4 bytes of data*/
	pAddress = pAddress + 1;

	printf("value of pAddress %p\n", pAddress);
	printf("value at address %p is %x\n", pAddress, *pAddress);

	return 0;
}

