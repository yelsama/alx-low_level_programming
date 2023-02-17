#include <stdio.h>

/**
 * main - do the main job
 * Return: Zero upon finishing
 */
int	main(void)
{
	int	n = 0;

	while (n < 10)
		printf("%d", n++);
	putchar('\n');
	return (0);
}
