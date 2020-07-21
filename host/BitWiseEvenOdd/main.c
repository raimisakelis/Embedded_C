/*
 * main.c
 *
 *  Created on: 25 May 2020
 *      Author: PC
 */


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void){

	int32_t num1;
	printf("Enter a number:");
	scanf("%d", &num1);

	/*
	printf("Bitwise AND(&):%d\n", (num1 & num2));
	printf("Bitwise OR(|):%d\n", (num1 | num2));
	printf("Bitwise XOR(^):%d\n", (num1 ^ num2));
	printf("Bitwise NOT(~):%d\n", ( ~num1));
	*/

	if(num1 & 1){
		printf("%d is odd number\n", num1);
	} else{
		printf("%d is even number\n", num1);
	}






	wait_for_user_input();
}


void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
