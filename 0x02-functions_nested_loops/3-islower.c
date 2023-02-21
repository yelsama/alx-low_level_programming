#include "main.h"

/**
 * _islower  - check the code
 *
 * Return: 1 if lower case char found.
 * 0 otherwise
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

