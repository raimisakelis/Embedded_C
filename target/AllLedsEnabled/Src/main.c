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


	//1. Enable the clock for DPOID peripheral in the AHB1ENR
	*pClkctrlReg |= 0x08;




	//2. Configure the mode of the IO pin as output

	//a. clear the 24th-30th bit positions (CLEAR).


	*pPortDModeReg &= 0x00FFFFFF;

	 //b. make 24th, 26th, 28th, 30th bits position as 1 (SET)


	*pPortDModeReg |= 0x55000000;

	//3. Set 12th, 13th, 14th, 15th bits of the output data register to make I/O pin-12, pin-13, pin-14, pin-15 as High

	*pPortDOutReg |= 0x1000;//turn on green led (12pin)
	*pPortDOutReg |= 0x3000;//turn on orange led (13pin)
	*pPortDOutReg |= 0x7000;//turn on red led (14pin)
	*pPortDOutReg |= 0xF000;//turn on blue led (15pin)

	//4. To turn off LED we should clean appropriate(corresponding) bits

	*pPortDOutReg &= 0xE000;//turn off green led (12pin)
	*pPortDOutReg &= 0xC000;//turn off orange led (13pin)
	*pPortDOutReg &= 0x8000;//turn off red led (14pin)
	*pPortDOutReg &= 0x0000;//turn off blue led (15pin)


	return 0;

}








