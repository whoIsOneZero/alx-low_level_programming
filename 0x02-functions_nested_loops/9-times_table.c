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
			/*_putchar(result + '0');*/
			printf("%d", result);
			if (b < 9)
			{
				_putchar(',');
				if (result <= 9)
				{
					_putchar(32);
					_putchar(32);
				}
				else
					_putchar(32);
			}
		}
		_putchar('\n');
	}
}
