#include "main.h"

/**
 * flip_bits - prints binary
 * @n: number to be checked
 * @m: bit index to convert to one
 * Return: count of flip
 */
unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int		count = 0;
	unsigned long int	diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
