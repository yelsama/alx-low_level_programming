#include "main.h"

/**
 * print_last_digit  - check the code
 * @n: an input int
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	char	c;

	c = (n % 10) + '0';
	putchar(c);
	return (0);
}
