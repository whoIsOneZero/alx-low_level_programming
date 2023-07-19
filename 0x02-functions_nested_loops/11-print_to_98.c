#include <stdio.h>

/**
 * print_to_98 - prints natural numbers up to 98
 *
 * @n: where to start the printing from
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
			else
				printf("\n");
		}
}
