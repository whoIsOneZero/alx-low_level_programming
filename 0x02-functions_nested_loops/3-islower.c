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
	int ans = islower(c);

	return (ans);
}
