#include "main.h"

/**
 * print_line - draws a straight line
 * @n: num of times '_' is printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
