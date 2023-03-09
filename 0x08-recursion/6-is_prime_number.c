#include "main.h"

/**
 * ft_is_prime - check the code
 * @nb: given number to get square root
 * @test: number to divide by
 * Return: 1 if prime, otherwise 0
 */
int	ft_is_prime(int *nb, int test)
{
	if (test > *nb / 2)
		return (1);
	if (*nb % test == 0)
		return (0);
	return (ft_is_prime(nb, test + 1));
}

/**
 * is_prime_number - check the code
 * @n: given number to get square root
 * Return: 1 if prime, otherwise 0
 */
int	is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n <= 0 || n == 1)
		return (0);
	return (ft_is_prime(&n, 2));
}
