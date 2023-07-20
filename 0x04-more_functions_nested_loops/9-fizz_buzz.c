#include <stdio.h>

/**
 * main - entry point
 * Return: alwasy 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i > 14) && ((i % 3 == 0) && (i % 5 == 0)))
		{
			printf("FizzBuzz ");
		}
		else if ((i > 2) && ((i % 3 == 0 && (i % 5) != 0)))
		{
			printf("Fizz ");
		}
		else if ((i > 4) && ((i % 5 == 0) && (i % 3 != 0)))
		{
			printf("Buzz ");
		}
		else
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
