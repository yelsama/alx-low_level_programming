#include <stdio.h>

/**
 * main - do the main job
 * Return: Zero upon finishing
 */
int	main(void)
{
	char	c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
