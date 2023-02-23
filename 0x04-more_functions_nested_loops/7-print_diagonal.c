#include "main.h"

/**
 * print_diagonal - check the code
 * @n: number of times spaces should be printed
 */
void  print_diagonal(int n)
{
	int	i;
	int	j;

	j = -1;
	while (++j < n)
	{
		i = -1;
		while(++i < j)
			_putchar(' ');
		_putchar('\\');
		if (j != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
