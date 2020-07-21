



#include <stdint.h>
#include <stdio.h>

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

	uint8_t *ptr;//this is a pointer variable

	/*We are initializing pointer variable with data
	the address of the structure variable */

	ptr = (uint8_t*)&data;// the data type of this entity is struct DataSet *


	/*Now, we are going to print the content
	 * which is pointed by pointer ptr */

	//1. we need to take total size of the struct
	uint32_t totalSize = sizeof(struct DataSet);

	printf("Memory address      content \n");
	printf("=============================\n");

	//2. we will use for loop to print content of pointer ptr
	for(uint32_t i = 0; i < totalSize; i++){
		/* first we will print the address
		 * then we will print data*/
		printf("%p  %X\n", ptr, *ptr);
		//after that we will increment ptr
		ptr++;
	}

	/* So, what exactly we are doing here?
	 * We are actually serializing stucture (data).
	 * We want to see how exactly the member elements
	 * of structure (data) is stored in a memory by
	 * printing them byte by byte.	*/


	/* total memory consumed by struct variable*/
	printf("Total memory consumed by this struct variable = %i\n", sizeof(struct DataSet));

	getchar();//here we are using getchar() in order to hang the application

}

