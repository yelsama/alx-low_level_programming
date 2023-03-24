#include "3-calc.h"

/**
 * main - gets numbers from args and manipulate them
 * @argc: number of arguments
 * @argv: arguments strings
 * Return: 0 when success
 */
int	main(int argc, char **argv)
{
	int	n1, n2, ans;
	int	(*res)(int, int);

	if (argc != 4)
		return (printf("Error\n"), 98);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
		return (printf("Error\n"), 100);
	res = get_op_func(argv[2]);
	if (!res)
		return (printf("Error\n"), 99);
	ans = res(n1, n2);
	printf("%d\n", ans);
	return (0);
}
