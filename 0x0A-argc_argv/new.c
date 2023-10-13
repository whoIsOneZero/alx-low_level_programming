#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success, any other int otherwise
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	printf("Your name is: %s %s %s\n", argv[1], argv[2], argv[3]);

	return (0);
}
