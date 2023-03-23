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

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		if (i == 0 || !separator)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
		i++;
	}
	printf("\n");
	va_end(ap);
}
