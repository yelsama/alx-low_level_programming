#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: given number to get square root
 * Return: square root of n
 */
int	_sqrt_recursion(int n)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (i < 46341 && m < n)
	{
		m = i * i;
		if (m == n)
			return (i);
		i++;
	}
	return (0);

}
