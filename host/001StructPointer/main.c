
#include<stdio.h>
#include<stdint.h>

struct DataSet{
	char  data1;
	int   data2;
	char  data3;
	short data4;
};

void displayMemberElements(struct DataSet *pData);

void displayMemberElementsByValue(struct DataSet pData);

int main(void){

	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	/*printf("Before : data.data1 = %X\n", data.data1);
	struct DataSet *pData;
	pData = &data;
	pData->data1 = 0x55;
	printf("After : data.data1 = %X\n", data.data1);
	*/


	/* We can print different element of struct variable
	 * using pointers. Here the passing structure pointer
	 * to another function is called as pass by reference,
	 * because we are sending the address of the structure.
	 * This method is mode widely used.*/
	displayMemberElements(&data);


	/* We can also pass structure variable by value.
	 * This case is very rarely used.
	 * In this case, the member elements of this structure
	 * variable will be copied into the member elements
	 * of this structure variable.*/
	displayMemberElementsByValue(data);


	getchar();
	return 0;

}

void displayMemberElements(struct DataSet *pData){
	printf("data1 = %X\n", pData->data1);
	printf("data2 = %X\n", pData->data2);
	printf("data3 = %X\n", pData->data3);
	printf("data4 = %X\n", pData->data4);
}

void displayMemberElementsByValue(struct DataSet pData){
	printf("data1 = %X\n", pData.data1);
	printf("data2 = %X\n", pData.data2);
	printf("data3 = %X\n", pData.data3);
	printf("data4 = %X\n", pData.data4);
}
