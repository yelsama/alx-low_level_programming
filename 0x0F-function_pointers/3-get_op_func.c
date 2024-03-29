#include "3-calc.h"

/**
 * get_op_func - check the code
 * @s: operation as string
 * Return: pointer to the funcion if suitalbe
 */
int	(*get_op_func(char *s))(int, int)
{
	op_t	ops[] = {{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};
	int		i = -1;

	while (ops[++i].op)
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	return (NULL);
}
