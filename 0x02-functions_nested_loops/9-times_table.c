#include "main.h"

/**
 * times_table - check the code
 */
void	times_table(void)
{
	int	n;
	int	m;
	int	tmp;

	n = -1;
	while (++n < 10)
	{
		m = -1;
		while (++m < 10)
		{
			tmp = n * m;
			if (tmp > 9)
				putchar((tmp / 10) + '0');
			else
				putchar(' ');
			putchar((tmp % 10) + '0');
			if (m != 12)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	putchar('\n');
}
