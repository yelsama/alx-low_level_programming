#include "main.h"

/**
 * _memcpy - check the code
 * @dest: string to copy at
 * @src: string to copy from
 * @n: length to be copied
 * Return: starting of the string
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	const char		*sptr;
	char			*dptr;
	unsigned int	i;

	if (!(dest || src))
		return (0);
	sptr = src;
	dptr = dest;
	i = 0;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}
