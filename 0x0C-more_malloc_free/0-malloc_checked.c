#include "main.h"

/**
 * malloc_checked - insure memory allocation
 * @b: number of bytes to reserve
 * Return: address fo createc memory
 */
void	*malloc_checked(unsigned int b)
{
	void	*mem;

	mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
