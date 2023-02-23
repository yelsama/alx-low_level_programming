#include "main.h"

/**
 * print_square - check the code
 * @size: number of times hashes printed
 */
void  print_square(int size)
{
	int	i;
	int	j;

	j = -1;
	while (++j < size)
	{
		i = -1;
		while (++i < size)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
