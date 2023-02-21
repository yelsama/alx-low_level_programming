#include "main.h"

/**
 * print_alphabet  - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
