#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, length;
	char hold;

	length = strlen(s) - 1;

	for (i = 0; i < length / 2; i++)
	{
		hold = s[i];
		s[i] = s[length - i];
		s[length - i] = hold;
	}
}
