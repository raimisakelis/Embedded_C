/*
 * main.c
 *
 *  Created on: 2 Jun 2020
 *      Author: PC
 */

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void){

	int32_t start_num, end_num;
	uint32_t even;//it will shows how many even numbers are

	printf("Enter starting and ending numbers (give space between 2 nos):");
	scanf("%d %d", &start_num, &end_num);

	if(end_num < start_num){
		//error
		printf("Ending number should be > starting number\n");
		wait_for_user_input();
		return 0;
	}

	printf("Even numbers are:\n");
	even = 0;
	while(start_num <= end_num){// % is modulus operations, it returns 0 if number is even
		if(!(start_num % 2)){

			/*"%4d\t it will allows to print numbers horizontally and
			 * each digit will consume 4 columns in the display in right-aligned fashion*/
			printf("%4d\t", start_num);
			even++;
		}
		start_num++;
	}
	printf("\nTotal even numbers : %u\n", even);


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
