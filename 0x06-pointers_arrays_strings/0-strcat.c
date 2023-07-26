#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * Return: A pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, length;

	length = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
