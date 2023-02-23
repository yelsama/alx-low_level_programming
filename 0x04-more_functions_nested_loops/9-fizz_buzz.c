#include <stdio.h>

/**
 * main - check the code
 * Return: 0 when finished
 */
int  main(void)
{
	int	i;

	i = 0;
	while (++i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
