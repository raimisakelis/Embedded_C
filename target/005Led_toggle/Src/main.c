 /**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/
#include<stdint.h>

int main(void)
{
	/* All peripheral registers are of 32 bits. So, that's why,
	 * we selected unit32_t and also addresses are always unsigned.*/

	/* We can't express pointer variable like
	 * uint32_t* pClkctrlreg = 0x40023830, because 0x40023830 is a number
	 * for the compiler. So we have to tell the compiler that this is a
	 * pointer. That's why we have to use type casting:
	 * (unit32_t*) 0x40023830 - now this is a pointer entity*/

	uint32_t* pClkctrlReg = (uint32_t*) 0x40023830;//pClkctrlreg - clock register
	uint32_t* pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t* pPortDOutReg = (uint32_t*) 0x40020C14;


	//1. Enable the clock for DPOID peripheral in the AHB1ENR (set the 3rd bit position)

	 *pClkctrlReg |= (1 << 3);



	//2. Configure the mode of the IO pin as output

	// a. clear the 24th and 25th bit positions (CLEAR).
	*pPortDModeReg &= ~(1 << 24);
	*pPortDModeReg &= ~(1 << 25);

	/*Or we can write in single line
	 * *pPortDModeReg &= ~(3 << 24);
	 * Because 3 in binary format is 11
	 * */

	 //b. make 24th bit position as 1 (SET)
	*pPortDModeReg |= (1 << 24);


	/*infinite loop we can make using while or for statements, for example:
	 * while(1) (using while)
	 * for(;;) (using for)*/

	while(1){

		//3. Set 12th bit of the output data register to make I/O pin-12 as High
		*pPortDOutReg |= (1 << 12);

		//introduce small human observable delay
		//This loop executes for 500K times
		for(uint32_t i = 0; i < 500000 ; i++);

		//Turn off the LED
		*pPortDOutReg &= ~(1 << 12);

		for(uint32_t i = 0; i < 500000 ; i++);
	}

}








