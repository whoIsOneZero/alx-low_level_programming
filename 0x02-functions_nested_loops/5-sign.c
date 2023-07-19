#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign of a number
 *
 * Return: 1 (n > 0), 0 (n == 0), -1 (n < 0)
 * @n : number to be checked
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		printf("+");
		ret = 1;
	}
	else if (n == 0)
	{
		printf("0");
		ret = 0;
	}
	else if (n < 0)
	{
		printf("-");
		ret = -1;
	}
	return (ret);
}
