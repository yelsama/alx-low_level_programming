#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: string to print
 */
void	_puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	else
		_putchar('\n');
}
