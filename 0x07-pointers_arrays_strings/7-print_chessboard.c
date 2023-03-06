#include "main.h"

/**
 * print_chessboard - check the code
 * @a: array of strings to copy from
 */
void	print_chessboard(char (*a)[8])
{
	int	i;
	int	n;

	i = -1;
	while (a[++i])
	{
		n = -1;
		while (a[i][++n])
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
