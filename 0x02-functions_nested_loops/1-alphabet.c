#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar('\n');
}
