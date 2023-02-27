#include "main.h"

/**
 * swap_int - check the code
 * @a: first number
 * @b: second number
 */
void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
