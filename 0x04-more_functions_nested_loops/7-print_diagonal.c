#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: num of times '_' is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int space_c, line_c;

	if (!(n <= 0))
	{
		for (line_c = 0; line_c < n; line_c++)
		{
			for (space_c = 0; space_c <= n; space_c++)
			{
				if (space_c == line_c)
					_putchar(92);
				else if (space_c < line_c)
					_putchar(32);
			}
			_putchar('\n');
		}
	}
}
