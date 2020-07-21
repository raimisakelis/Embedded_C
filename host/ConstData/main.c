/*
 * main.c
 *
 *  Created on: 4 Jun 2020
 *      Author: PC
 */

#include <stdio.h>
#include <stdint.h>

/* If we are using read only variable in global space,
 * the program will crash because the compiler has placed read only variable
 * in the read only section (read only memory). So, the operating system expects
 * that no one should change the address where that variable value is placed.
 * That is protected. But in this example we are using pointer way to modify
 * that particular address which is write-protected. So, that's why the operating
 * system detected that activity and the application crashed.
 *
 * */
uint8_t const data = 10;//it is a read only variable in global space

int main(void){

	//uint8_t const data = 10;//it is a read only variable in local space

	/* Because the data variable is const we cannot modify variable
	 * by its name (for example: it like data = 50)
	 * but we can change it by its address*/

	//data = 50;

	printf("Value before change = %u\n", data);

	/* *ptr is pointer variable of type uint8_t*
	 *  &data is a pointer entity of type uint8_t const*
	 *  */

	uint8_t *ptr =(uint8_t*) &data;

	*ptr = 50;




	printf("Value after change = %u\n", data);

	getchar();


}
