/*
 * main.c
 *
 *  Created on: 10 Jul 2020
 *      Author: PC
 */

#include<stdio.h>

struct DataSet{
	char  data1;
	int   data2;
	char  data3;
	short data4;
};

int main(void){

	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	/* Instead of creating a pointer variable of uint8_t or uint16_t
	 * we can create a pointer variable of that struct.*/

	//pData is a pointer variable of type struct DataSet *
	struct DataSet *pData;

	//pData now holds the address of structure variable data
	pData = &data;

	//changing the value of data1 member element
	pData -> data1 = 0x55;//pData -> data1 is *(address_of_first_member_element_data1) = 0x55


	/*NOTE.
	 * We are using dereferencing operator (->) when a structure variable of pointer type is involved;
	 * We are using dot operator (.) when a structure variable of non-pointer type variable is involved
	 * */





	return 0;
}
