#include "main.h"

/**
 * _isdigit  - check the code
 *
 * Return: 1 if 0 - 9  char found.
 * 0 otherwise
 * @c: input character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
