#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	n;
	int	*p;
	int	(*f)(int, char **);

	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);
	if (n < 0)
		return (printf("Error\n"), 2);
	f = main;
	while (n-- > 0)
	{
		printf("%x ", (unsigned int)*f);
		f++;
	}
	return (0);
}
