#include <string.h>

/**
 * _strcpy - prototype of strcpy
 * @dest: where the string will be copied to.
 * @src: the source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = strlen(src);
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
