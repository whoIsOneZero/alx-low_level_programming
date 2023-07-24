#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
