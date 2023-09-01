#include "main.h"
#include <stdio.h>

/**
 * flip_bits - calc. num of bits flipped in converting one number to...
 * ... another
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that had to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num;
	unsigned long int xor_ed;

	xor_ed = n ^ m; /*An actual number*/
	num = 0;

	/*Count the number of digits in xor_ed (in binary)*/
	while (xor_ed != 0)
	{
		xor_ed &= (xor_ed - 1); /*Send LSB to 0 till xor_ed -> 0*/
		num++;
	}

	return (num);
}
