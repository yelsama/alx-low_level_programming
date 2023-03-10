#include "main.h"

/**
 * _isalpha  - check the code
 * @c: the input character to check
 * Return: if alphabetic found returns 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
