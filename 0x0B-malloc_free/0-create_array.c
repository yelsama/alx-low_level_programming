#include "main.h"

/**
 * create_array - to print num of args
 * @size: size of string
 * @c: the char to fill string with
 * Return: a pointer to the created string
 */
char	*create_array(unsigned int size, char c)
{
	char	*str;
	int		i;

	if (!size)
		return (NULL);
	str = malloc(sizeof(char) * (size));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < (int)size)
		str[i] = c;
	str[--i] = 0;
	return (str);
}
