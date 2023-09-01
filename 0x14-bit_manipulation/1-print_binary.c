#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts decimal to binary - prints it
 * @n: pointer to decimal number to be 'converted'
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;

	/*Calc. num. of bits needed to represent the decimal in binary*/
	/*Dec, stored as bin in memory, is shifted till last bit reached*/
	for (shift = 0; (temp >>= 1) > 0;)
	{
		shift++;
	}

	/*SHIFT and & to print from MSB to LSB*/
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
