#include "main.h"

/**
 * find_root - check the code
 * @n: given number to get square root
 * @inc: the number to test as root
 * Return: square root of n
 */
int	find_root(int *n, int inc)
{
	if (inc >= *n)
		return (-1);
	if (inc * inc == *n)
		return (inc);
	else
		return (find_root(n, inc + 1));
}

/**
 * _sqrt_recursion - check the code
 * @n: given number to get square root
 * Return: square root of n
 */
int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_root(&n, 1));
}
