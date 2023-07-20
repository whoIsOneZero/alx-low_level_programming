#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 - 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 1;

	while (i < 11)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
