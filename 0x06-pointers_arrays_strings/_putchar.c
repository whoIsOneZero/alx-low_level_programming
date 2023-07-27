#ifndef PRINT_MACRO
#define PRINT_MACRO

#include <unistd.h>
/**
 * _putchar - prints a character
 *
 * Return: 1 - success
 * -1 - error and specifies errno appropriately
 * @data: character array to be written
 */
int _putchar(char data)
{
	/*1 - standard output file descriptor*/
	return (write(1, &data, 1));
}
#endif
