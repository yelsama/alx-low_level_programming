#include "main.h"

/**
 * print_last_digit  - check the code
 * @n: an input int
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	char	c;

	n = n % 10;
	if (n < 0)
		n *= -1;
	c = n + '0';
	_putchar(c);
	return (0);
}
