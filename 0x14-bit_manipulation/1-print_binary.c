#include "main.h"

/**
 * print_binary - prints binary
 * @n: number to be converted
 * Return: nothing
 */
void	print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >> 1);
	printf("%d", n & 1);
}
