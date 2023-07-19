#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 *
 * Return: 0 (not alphabet), 1 otherwise
 * @c: character to be checked
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
