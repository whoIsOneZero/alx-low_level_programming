#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
