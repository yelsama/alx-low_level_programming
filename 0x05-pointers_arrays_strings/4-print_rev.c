#include "main.h"

/**
 * print_rev - check the code
 * @s: a string to print
 */
void	print_rev(char *s)
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s[i])
		i++;
	while (i > 0)
		write(1, &s[--i], 1);
	write(1, "\n", 1);
}
