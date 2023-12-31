#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements that should be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
