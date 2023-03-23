#include "variadic_functions.h"

/**
 * sum_them_all - submint all given intgers
 * @separator: string to put bettween numbers
 * @n: number of given intgers
 */
void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	ap;
	unsigned int i;

	if (n == 0)
		return ;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%s%d", separator, va_arg(ap, int));
	va_end(ap);
}
