#include "main.h"

/**
 * _isupper  - check the code
 *
 * Return: 1 if upper case char found.
 * 0 otherwise
 * @c: input character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
