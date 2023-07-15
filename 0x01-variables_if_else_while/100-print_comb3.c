#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = m + 1; n <= 9; n++)
			{
				if (n > m)
				{
					putchar(m + 48);
					putchar(n + 48);
					if (m < 8 || n < 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
	}
	putchar('\n');
	return (0);
}

