#include <ctype.h>

/**
 * _isupper - checks for uppercase
 * @c: parameter to do the check on
 *
 * Return: 1 (c is uppercas) or 0 otherwise
 */
int _isupper(int c)
{
	int answer;

	if ((isupper(c)) == 0)
		answer = 0;
	else
		answer = 1;
	return (answer);
}
