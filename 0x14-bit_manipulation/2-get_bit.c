#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate (decimal)
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index (SUCCESS)
 * or -1 if (FAIL)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int this_bit;

	/*sizeof(unsigned long) = 8 bytes*/
	/*64 bits with index 0 - 63*/
	if (index > 64)
		return (-1);

	/*Make the desired bit the LSB*/
	this_bit = n >> index;

	/*All other bits -> 0 except LSB*/
	return (hold & 1);
}
