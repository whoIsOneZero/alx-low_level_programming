#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;
	char capital_alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (capital_alpha = 'A'; capital_alpha <= 'Z'; capital_alpha++)
	{
		putchar(capital_alpha);
	}
	putchar('\n');
	return (0);
}
