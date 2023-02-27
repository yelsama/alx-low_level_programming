#include "main.h"

/**
 * print_array - check the code
 * @a: an array of intgers to be printed
 * @n: number of elements to be printed
 */
void	print_array(int *a, int n)
{
	int	i;

	if (!a)
		return;
	i = -1;
	while (++i < n - 1)
		printf("%d, ", a[i]);
	if (n > 0)
		printf("%d", a[i]);
	printf("\n");
}
