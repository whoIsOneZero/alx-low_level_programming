#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success, any other int otherwise
 */
int main(int argc, char *argv[])
{
	int num, i, result = 0, error = 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			/*If one num. contains symbols that not a digit*/
			if (argv[i] != 0 && num == 0)
			{
				error = 1;
				break;
			}
			/*The summation*/
			result = result + num;
		}
		if (error == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", result);
		}
	}
	/*If no argument passed*/
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
