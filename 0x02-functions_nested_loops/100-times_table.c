#include "main.h"
#include "stdio.h"

/**
 * print_times_table - prints an n times table
 *
 * @n: what (nth) time table it is
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, result;

	if ((n < 15) && (n > 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;
				if (b == 0)
				{
					_putchar(result + '0');
				}
				else if ((result < 10) && b != 0)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 )
				{
					_putchar(',');
					_putchar(32);
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
