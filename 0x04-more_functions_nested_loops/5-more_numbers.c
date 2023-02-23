#include "main.h"

/**
 * more_numbers - check the code
 *
 */
void  more_numbers(void)
{
	int	i;
	int	n;

	n = -1;
	while (++n < 10)
	{
		i = -1;
		while (++i < 15)
		{
			if (i > 9)
				_putchar('1');
			_putcahr((i % 10) + '0'); 
		}
		_putchar('\n');
	}
}
