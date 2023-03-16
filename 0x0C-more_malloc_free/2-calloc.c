#include "main.h"

/**
 * _calloc - set all allcation to zero
 * @nmemb: number of units
 * @ize: unitsize
 * Return: a pointer to the new memory allocated
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char	*new;
	int				i;
	int				limit;

	limit = nmemb * size;
	new = malloc(limit);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < limit)
		new[i] = 0;
	return ((void *)new);
}
