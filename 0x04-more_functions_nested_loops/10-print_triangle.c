#include "main.h"

/**
 * print_triangle - check the code
 * @size: triangle base using hashs
 */
void  print_triangle(int size)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	while (++j <= size)
	{
		i = size + 1;
		k = -1;
		while (--i > j)
			_putchar(' ');
		while (++k < j)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
