#include "main.h"

/**
 * print_sign  - check the code
 * @n: the given number to check
 * Return: 1 if given number is positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	putchar ('0');
	return (0);
}
