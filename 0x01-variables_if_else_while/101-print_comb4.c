#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, m, l;

	for (j = 48; j < 58; j++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > j)
				{
					putchar(j);
					putchar(m);
					putchar(l);
					if (j != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
