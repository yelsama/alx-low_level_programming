#include "main.h"

/**
 * _strncat - check the code
 * @dest: a placr to copy
 * @src: place to take string from
 * @n: number of characters to copy
 * Return: the destenation
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j + i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
