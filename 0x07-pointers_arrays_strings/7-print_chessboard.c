#include "main.h"

/**
 * print_chessboard - check the code
 * @a: array of strings to copy from
 */
void	print_chessboard(char (*a)[8])
{
	int		i;
	int		n;

	i = -1;
	while (++i < 8)
	{
		n = -1;
		while (++n < 8)
			_putchar((*a)[n]);
		_putchar('\n');
		a++;
	}
}
