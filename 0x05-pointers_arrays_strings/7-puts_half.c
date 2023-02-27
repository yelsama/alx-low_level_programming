#include "main.h"

/**
 * puts_half - check the code
 * @str: a string to be printed
 */
void	puts_half(char *str)
{
	int	i;

	if (!str)
		return;
	i = 0;
	while (str[i])
		i++;
	i = (i % 2) + (i / 2);
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}
