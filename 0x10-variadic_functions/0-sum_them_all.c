#include "variadic_functions.h"

/**
 * sum_them_all - submint all given intgers
 * @n: number of given intgers
 * Return: sumution of all
 */
int	sum_them_all(const unsigned int n, ...)
{
	va_list 	ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start (ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);
	return (sum);
}
