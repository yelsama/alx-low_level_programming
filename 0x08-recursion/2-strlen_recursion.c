#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: string to print
 * Return: length of s;
 */
int	_strlen_recursion(char *s)
{
	int	n;

	n = 0;
	if (*s)
	{
		n = 1;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
