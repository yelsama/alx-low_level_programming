#include "main.h"

/**
 * rev_string - check the code
 * @s: a string to reverse
 */
void	rev_string(char *s)
{
	int		i;
	int		j;
	int		k;
	char	c;

	if (!s)
		return;
	i = 0;
	while (s[i])
		i++;
	j = i / 2;
	k = 0;
	while (k < j)
	{
		c = s[k];
		s[k] = s[--i];
		s[i] = c;
		k++;
	}
}
