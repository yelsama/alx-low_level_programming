#include "main.h"

/**
 * main - to print args
 * @argc: number of input args
 * @argv: tow d string
 * Return: zero when finished
 */
int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	while (++i < argc)
		printf("%s\n", argv[i]);
	return (0);
}
