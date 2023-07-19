#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 0 (not lowercase), any other int otherwise
 * @c: item to be checked
 */

int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
