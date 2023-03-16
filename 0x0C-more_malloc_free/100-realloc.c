#include "main.h"

/**
 * _realloc - expand a a memory;
 * @ptr: pointer to original memory
 * @old_size: name
 * @new_size: name
 * Return: a pointer to the new memory allocated
 */
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char	*new;
	unsigned char	*tmp;
	unsigned int	i;

	tmp = (unsigned char *)ptr;
	if (new_size == 0)
	{
		if (ptr)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new = malloc(new_size);
	if (!new)
		return (ptr);
	i = -1;
	if (ptr)
		while (++i < old_size && i < new_size)
			new[i] = tmp[i];
	if (ptr)
		free(ptr);
	return ((void *)new);
}
