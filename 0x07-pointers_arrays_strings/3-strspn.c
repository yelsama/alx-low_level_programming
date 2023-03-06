#include "main.h"

/**
 * _strspn - check the code
 * @s: string to to span
 * @accept: set of strings to look at
 * Return: 
 */
unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i;
	char			*tmp;

	if (!s || !accept)
		return (0);
	i = 0;
	while (s[i])
	{
		tmp = accept;
		while (*tmp)
		{
			if (*tmp != s[i])
				return (i);
			tmp++;
		}
		i++;
	}
	return (i);
}
