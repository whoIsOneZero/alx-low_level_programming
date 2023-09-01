#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change bit
 * Return: 1 (SUCCESS)
 * or -1 (FAIL)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);

	hold = index;

	/*Shift 1 till it aligns with the bit[index] you want to change*/
	/*101101 & 100 for index 3*/
	for (i = 1; hold > 0; hold--)
	{
		i <<= 1;
	}

	if ((*n >> index) & 1)
		/*Binary (NAND) btn the 2 bits, aligned at that index*/
		*n -= i;

	return (1);
}
