#include "main.h"

/**
 * factorial- check the code
 * @x: given base number
 * @y: the power number
 * Return: result of x^y
 */
int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
