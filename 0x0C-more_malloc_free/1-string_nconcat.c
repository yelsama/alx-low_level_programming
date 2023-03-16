#include "main.h"

/**
 * string_nconcat - to print num of args
 * @s1: first string
 * @s2: second string
 * @n: size to add for the string
 * Return: a pointer to the new string
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char			*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1)
		while (s1[i])
			i++;
	if (s2)
		while (s2[j])
			j++;
	if (n >= j)
		n = j;
	new = malloc(sizeof(char) * (i + n + 1));
	if (!new)
		return (NULL);
	i = -1;
	j = -1;
	if (s1)
		while (s1[++i])
			new[i] = s1[i];
	if (!s1)
		i = 0;
	if (s2)
		while (s2[++j] && j < n)
			new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}
