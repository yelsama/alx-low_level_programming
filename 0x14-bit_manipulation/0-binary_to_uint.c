#include "main.h"

/**
 * binary_to_uint - prints list elements
 * @b: string to be converted
 * Return: dicimal number
 */
unsigned int	binary_to_uint(const char *b)
{
	int				n;
	unsigned int	ret;
	unsigned int	base;

	n = 0;
	ret = 0;
	base = 1;
	if (!b || !b[0])
		return (0);
	while (b[n])
		n++;
	while (--n >= 0)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		ret += base * (b[n] - '0');
		base *= 2;
	}
	return (ret);
}
