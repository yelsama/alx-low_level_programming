#include "main.h"

/**
 * _strchar - check the code
 * @s: string to set
 * @c: character to find in string
 * Return: poiter to the char
 */
char	*_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
