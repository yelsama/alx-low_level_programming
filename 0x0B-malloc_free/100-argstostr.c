#include "main.h"

/**
 * argstostr - put args into one string
 * @ac: number of argument
 * @av: args as two dim array
 * Return: a pointer to the new string
 */
char	*argstostr(int ac, char **av)
{
	char	*new;
	int		i;
	int		n;
	int		t_n;

	if (!av || ac < 1)
		return (NULL);
	i = -1;
	t_n = 0;
	while (++i < ac)
	{
		n = -1;
		while (av[i][++n])
			t_n++;
	}
	new = malloc(sizeof(char) * (t_n + ac + 1));
	if (!new)
		return (NULL);
	i = -1;
	t_n = -1;
	while (++i < ac)
	{
		n = -1;
		while (av[i][++n])
			new[++t_n] = av[i][n];
		new[++t_n] = '\n';
	}
	new[++t_n] = 0;
	return (new);
}
