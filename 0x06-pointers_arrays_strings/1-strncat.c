#include "main.h"

/**
 * _strncat - concatenates one string to another, using n bytes
 * @dest: destination string
 * @src: source string
 * @n: num. of bytes from src to be used
 *
 * Return: a pointer to the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
