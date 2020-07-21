/*
 * main.c
 *
 *  Created on: 19 May 2020
 *      Author: PC
 */

#include <stdio.h>

int main(void)
{

	double charge, chargeE;
	double electrons;
	printf("Enter the charge:");
	scanf("%lf",&charge);

	printf("Enter the charge of electron:");
	scanf("%le",&chargeE);

	electrons = (charge / chargeE) * -1;

	/*It will print result in scientific notation format*/
	printf("Total number of electrons = %le\n", electrons);

	printf("Total number of electrons = %lf\n", electrons);

	printf("\nPress enter key to exit the application \n");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}

	getchar();


}
