#include "main.h"

/**
 * print_diagonal - check the code
 * @n: number of times spaces should be printed
 */
void  print_diagonal(int n)
{
	int	i;

	i = n;
	while (n-- > 1)
		_putchar(' ');
	if (i > 0)
		_putcahr('\\');
	_putchar('$');
	_putchar('\n');
}
