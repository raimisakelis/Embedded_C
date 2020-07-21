/*
 * Write a program to clear (make bit state to 0)
 * 4th, 5th, 6th-bit position of a given number and
 * print the result.
 */


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void){

	int32_t num1, output;
	printf("Enter a number:");
	scanf("%d", &num1);


	/*0x8F is mask value*/
	output = num1 & 0x8F;
	printf("[input] [output] :0x%x 0x%x\n", num1, output);

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
