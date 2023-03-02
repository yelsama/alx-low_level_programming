#include "main.h"

/**
 * rev_string - check the code
 * @dest: a placr to copy
 * @src: place to take string from
 * Return: the destenation
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	if (!dest || !src)
		return (NULL);
	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = src[n];
	return (dest);
}
