#include "main.h"

/**
 * _strspn - check the code
 * @s: string to to span
 * @accept: set of strings to look at
 * Return: pointer for similar one
 */
char	*_strpbrk(char *s, char *accept)
{
	unsigned int	i;
	char			*tmp;
	int				flag;

	i = 0;
	while (s[i])
	{
		tmp = accept;
		flag = 0;
		while (*tmp && !flag)
		{
			if (*tmp == s[i])
				flag = 1;
			tmp++;
		}
		if (!flag)
			return (&s[i]);
		i++;
	}
	return (0);
}
