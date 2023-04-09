#include "main.h"

/**
 * print_binary - prints binary
 * @n: number to be converted
 * Return: nothing
 */
void	print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
