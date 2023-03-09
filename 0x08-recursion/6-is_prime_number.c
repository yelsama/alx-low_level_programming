#include "main.h"

/**
 * is_prime_number - check the code
 * @n: given number to get square root
 * Return: 1 if prime, otherwise 0
 */
int	is_prime_number(int n)
{
	int	m;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n <= 0)
		return (0);
	return (n / (is_prime_number()))
}
