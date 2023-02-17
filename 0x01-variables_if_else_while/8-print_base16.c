#include <stdio.h>

/**
 * main - do the main job
 * Return: Zero upon finishing
 */
int	main(void)
{
	char	c = '0';

	while (c <= 'f')
	{
		putchar(c++);
		if (c > '9')
			c = 'a';
	}
	putchar('\n');
	return (0);
}
