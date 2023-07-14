#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 101) || (alpha == 113))
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
