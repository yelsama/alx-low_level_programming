#include <stdio.h>

/*
 * main - do the main job
 * Return: Zero upon finishing
 */
int	main(void)
{
	char	c='a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
