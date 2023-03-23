#include "variadic_functions.h"

/**
 * print_strings - print n of strings
 * @separator: string to put bettween numbers
 * @n: number of given string
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			ap;
	char			*tmp;
	unsigned int	i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		tmp = va_arg(ap, char *);
		if (i == 0 || !separator)
		{
			if (!tmp)
				printf("(nil)");
			else
				printf("%s", tmp);
		}
		else
		{
			if (!tmp)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, tmp);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
