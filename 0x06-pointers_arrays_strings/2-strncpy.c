#include "main.h"

/**
 * _strncpy - check the code
 * @dest: a placr to copy
 * @src: place to take string from
 * @n: number of characters to copy
 * Return: the destenation
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
