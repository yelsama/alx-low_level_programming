#include <stdio.h>

/**
 * main - do the main job
 * Return: Zero upon finishing
 */
int	main(void)
{
	int	c = '0';

	while (c <= '9')
	{
		putchar(c++);
		if (c != '9' + 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
