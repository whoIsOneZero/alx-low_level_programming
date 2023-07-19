#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to be worked on
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ret;

	if (n < 0)
		n = -n;
	/*Making the num positve*/
	ret = n % 10;
	if (ret < 0)
		ret = -ret;
	/*Need to return a positive number*/
	_putchar(ret + '0');
	return (ret);
}
