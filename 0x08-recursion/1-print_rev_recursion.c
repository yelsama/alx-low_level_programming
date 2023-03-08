#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: string to print in reverse
 */
void	_print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	if (*s)
		_puts_recursion(s);
}
