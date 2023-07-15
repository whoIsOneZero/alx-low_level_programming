#include<stdio.h>

/**
 * main - entry point
 *
 * RETURN: always 0 (succes)
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = m + 1; n <= 9; n++)
			{
				putchar(m + 48);
				putchar(n + 48);

				if ((m < 8) || (n < 9))
				{
					putchar(44);
					putchar(32);
				}
			}
	}
	putchar('\n');
	return (0);
}

