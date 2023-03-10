#include "main.h"

/**
 * _strcpy - check the code
 * @dest: pointer to where should be printed
 * @src: pointer to the original string
 * Return: the pointer for the copy
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
