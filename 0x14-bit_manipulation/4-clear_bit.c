#include "main.h"

/**
 * clear_bit - prints binary
 * @n: number to be checked
 * @index: bit index to convert to one
 * Return: status
 */
int	clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	mask;


	if (!n)
		return (-1);
	mask = 1;
	while (index > 0)
	{
		mask = mask << 1;
		index--;
	}
	*n = *n & (~mask);
	return (1);
}
