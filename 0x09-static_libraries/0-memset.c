#include "main.h"

/**
 * _memset - check the code
 * @s: string to set
 * @b: character to fill the memory with
 * @n: length to be copied
 * Return: starting of the string
 */
char	*_memset(char *s, char b, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return (s);
}
