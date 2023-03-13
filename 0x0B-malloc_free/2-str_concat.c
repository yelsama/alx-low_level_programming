#include "main.h"

/**
 * str_concat - to print num of args
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string
 */
char	*str_concat(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
		while (s1[i])
			i++;
	if (s2)
		while (s2[j])
			j++;
	new = malloc(sizeof(char) * (i + j + 1));
	if (!new)
		return (NULL);
	i = -1;
	j = -1;
	if (s1)
		while (s1[++i])
			new[i] = s1[i];
	if (s2)
		while (s2[++j])
			new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}
