#include "main.h"
#include "stdio.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (b == 0 )
			{
				_putchar(result + '0');
			}
			if (result < 10 && b != 0)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(b + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
