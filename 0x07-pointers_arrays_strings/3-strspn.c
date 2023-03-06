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
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "hello world";
    char accept[] = "helo w";
    unsigned int count = _strspn(s, accept);
    printf("The initial segment of '%s' that consists entirely of characters from '%s' has length %u.\n", s, accept, count);
	count = strspn(s, accept);
    printf("The initial segment of '%s' that consists entirely of characters from '%s' has length %u.\n", s, accept, count);
    return 0;
}
