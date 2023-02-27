#include "main.h"

/**
 * puts2 - check the code
 * @str: a string to be printed
 */
void	puts2(char *str)
{
	while (str && *str)
	{
		write(1, str++, 1);
		if (*str)
			str++;
	}
	write(1, "\n", 1);
}
