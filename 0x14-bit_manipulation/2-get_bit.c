#include "main.h"

/**
 * get_bit - prints binary
 * @n: number to be checked
 * @index: bit index to investigate
 * Return: binary value of the bit
 */
int	get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0 && n)
	{
		n = n >> 1;
		if (!n)
			break;
		index--;
	}
	if (!n && index)
		return (-1);
	return (n & 1);
}
