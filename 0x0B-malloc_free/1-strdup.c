#include "main.h"

/**
 * _strdup - to print num of args
 * @str: string to duplicate
 * Return: a pointer to the new string
 */
char	*_strdup(char *str)
{
	char	*new;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = str[i];
	return (new);
}
