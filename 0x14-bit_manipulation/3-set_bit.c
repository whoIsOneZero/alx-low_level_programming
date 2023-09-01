#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to the decimal number
 * @index: index position to change (starting from 0)
 * Return: 1 (SUCCESS)
 * -1 (FAIL)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int to_add;

	/*sizeof(unsigned long) == 8*8 bits*/
	if (index > 64)
		return (-1);

	/*Shift 1 till it aligns with the bit[index] you want to change*/
	/*101101 & 100 for index 3*/
	for (to_add = 1; index > 0; index--)
	{
		to_add <<= 1;
	}

	/*The addition(binary AND) makes bit at desired index -> 1*/
	*n += to_add;

	return (1);
}
