#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 *
 * Return: 1 (c is a digit) or 0 otherwise
 */
int _isdigit(int c)
{
	int answer;

	if ((isdigit(c) == 0))
		answer = 0;
	else
		answer = 1;
	return (answer);
}
