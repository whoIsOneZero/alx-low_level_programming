#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (alpha = 97; alpha <= 102; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
