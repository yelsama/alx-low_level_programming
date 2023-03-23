#include "variadic_functions.h"

/**
 * print_all - print n of strings
 * @format: flags to identify what to print
 */
void	print_all(const char * const format, ...)
{
	va_list			ap;
	char			*tmp;
	char			nil[] = "(nil)";
	int				n, i, j;

	n = 0;
	i = -1;
	j = 0;
	while (format[n])
		n++;
	va_start(ap, format);
	while (++i < n && i < 10)
	{
		if (j)
			printf(", ");
		j = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			tmp = va_arg(ap, char *);
			if (!tmp)
				tmp = nil;
			printf("%s", tmp);
			break;
		default:
			j = 0;
			break;
		}
	}
	printf("\n");
	va_end(ap);
}
