#include "main.h"

/**
 * _calloc - set all allcation to zero
 * @nmemb: number of units
 * @size: unitsize
 * Return: a pointer to the new memory allocated
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char	*new;
	unsigned int	i;
	unsigned int	limit;

	limit = nmemb * size;
	if (!limit)
		return (NULL);
	new = malloc(limit);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < limit)
		new[i] = 0;
	return ((void *)new);
}
