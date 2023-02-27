#include "main.h"

/**
 * _puts - check the code
 * @str: a string to be printed
 */
void	_puts(char *str)
{
	while (str)
		write(1, str++, 1);
}
