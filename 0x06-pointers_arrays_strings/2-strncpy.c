#include "main.h"

/**
 * _strncpy - copies at most, n bytes, from a string to a buffer
 * @src: the source
 * @dest: the buffer pointed to
 * @n: num of bytes of src
 *
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
