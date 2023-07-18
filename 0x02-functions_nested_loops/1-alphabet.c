#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet();
}

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
