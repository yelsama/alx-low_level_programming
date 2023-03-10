#include "main.h"

/**
 * _putchar -
 * @c: the character to be printed as ascii
 * Return: 1 when writing on std output
 */
int	_putchar(int c)
{
	unsigned char	n;
	n = c;
	return (write(1, &n, 1));
}
