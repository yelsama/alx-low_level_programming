#include "3-calc.h"

/**
 * main - gets numbers from args and manipulate them
 * @argc: number of arguments
 * @argv: arguments strings
 * Return: 0 when success
 */
// int	main(int argc, char **argv)
// {
// 	int	n1, n2;
// 	int	(*res)(int, int);

// 	if (argc != 4)
// 		return (printf("Error\n"), 98);
// 	res = NULL;
// 	n1 = atoi(argv[1]);
// 	n2 = atoi(argv[3]);
// 	res = get_op_func(argv[2]);
// 	if (!res)
// 		return (printf("Error\n"), 99);
// 	if ((res == op_div || res == op_mod) && n2 == 0)
// 		return (printf("Error\n"), 100);
// 	printf("%d\n", res(n1, n2));
// 	return (0);
// }
int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
