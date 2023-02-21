#include "main.h"

/**
 * print_sign  - check the code
 * @n: the given number to check
 * Return: 1 if given number is positive
 */
int print_sign(int n)
{
	if (n > 0)
		return(putchar('+'), 1);
	if (n < 0)
		return(putchar('-'), -1);
	return (putchar('0'), 0);
}

