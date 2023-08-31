#include "main.h"

/**
 * binary_to_uint - converts binary to decimal (unsigned int)
 * @b: pointer to the string of binary digits
 *
 * Return: the decimal equivalent (SUCCESS)
 * or 0 (FAIL) - null / non-binary digits passed
 */
unsigned int binary_to_uint(const char *b)
{
	int total, mul, j, i = 0, len = 0;

	total = 0; /*Convered number*/
	mul = 1; /* 2^0 */

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = (len - 1); j >= 0; j--)
	{
		if (b[j] == '1')
		{
			total += mul;
			mul *= 2; /*Move to next power of 2*/
		}
		else if (b[j] == '0')
			mul *= 2;
		else
			return (0);
	}


	return (total);
}
