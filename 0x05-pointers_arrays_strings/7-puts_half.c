#include <string.h>
#include "main.h"

/**
 * puts_half - printf half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

	length = strlen(str);
	if (length % 2 != 0)
	{
		for (i = (length - 1) / 2; i < length - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
