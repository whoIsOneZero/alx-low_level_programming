#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - creates a new memory space which contains
 * a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: a pointer to the newly allocated memory space (SUCCESS)
 * of NULL (FAIL)
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *p;
	/*Get size of str*/

	while (*str != '\0')
	{
		str++;
		size++;
	}
	str = str - size; /*Reset the pointer back to start of the string*/

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * (size + 1));
	/*size + 1 for the null terminating character*/

	/*returns NUL on memory allocation fail*/
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';

	return (p);
}
