#include "main.h"

/**
 * _strpbrk - check the code
 * @s: string to to span
 * @accept: set of strings to look at
 * Return: pointer for similar one
 */
char	*_strpbrk(char *s, char *accept)
{
	char	*tmp;

	while (*s)
	{
		tmp = accept;
		while (*tmp)
		{
			if (*tmp == *s)
				return (s);
			tmp++;
		}
		s++;
	}
	return (0);
}
