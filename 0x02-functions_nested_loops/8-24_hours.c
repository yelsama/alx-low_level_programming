#include "main.h"

/**
 * jack_bauer  - check the code
 */
void	jack_bauer(void)
{
	int	h;
	int	m;

	h = -1;
	while (++h < 24)
	{
		m = -1;
		while (++m < 60)
		{

			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
