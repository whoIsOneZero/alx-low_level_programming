#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length - 1; i >= 0; --i)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
