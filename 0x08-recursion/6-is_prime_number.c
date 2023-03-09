#include "main.h"

/**
 * ft_is_prime - check the code
 * @nb: given number to get square root
 * Return: 1 if prime, otherwise 0
 */
int	ft_is_prime(int nb)
{
	int	n;

	n = nb - 1;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (n > 0)
	{
		if (nb % n == 0)
			break ;
		n--;
	}
	if (n == 1)
		return (1);
	return (0);
}

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
	return (ft_is_prime(n));
}
