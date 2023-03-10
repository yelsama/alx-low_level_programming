#include "main.h"
#include <unistd.h>

/**
 * _puts - check the code
 * @str: a string to be printed
 */
void	_puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
