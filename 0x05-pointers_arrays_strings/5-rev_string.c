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

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		hold = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = hold;
	}
}
