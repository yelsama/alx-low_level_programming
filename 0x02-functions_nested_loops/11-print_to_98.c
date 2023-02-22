#include "main.h"

/**
 * print_to_98  - check the code
 * @n: the number to print from
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
			printf("%d, ", n++);
		if (n > 98)
			printf("%d, ", n--);
	}
	printf("98\n");
}
