#include "main.h"


/**
 * calcu  - check the code
 * @nb: number
 * @md: another number
 * @i: an index
 * @ptr: to check
 */
void	calcu(int *nb, int *md, int *i, char *ptr)
{
	char	*max;
	int		c;
	int		m;

	c = *i;
	m = 0;
	max = "9223372036854775807";
	while (ptr[*i] >= '0' && ptr[*i] <= '9' && *md < 21)
	{
		*nb = *nb * 10 + (ptr[*i] - 48);
		*md = *md + 1;
		*i = *i + 1;
	}
	if (*md == 19)
	{
		while (ptr[c] <= max[m] && m <= 19)
		{
			m++;
			c++;
		}
		if (m < 19)
			*md = 20;
	}
}


/**
 * _atoi  - check the code
 * @str: number given in ascii
 * Return: intger of given ascii
 */
int _atoi(char *str)
{
char	*ptr;
	int		i;
	int		sn;
	int		nb;
	int		md;

	ptr = (char *)str;
	i = 0;
	sn = 1;
	nb = 0;
	md = 0;
	while (ptr[i] == ' ' || (ptr[i] > 8 && ptr[i] < 14))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
		if (ptr[i++] == '-')
			sn = sn * -1;
	while (ptr[i] == '0')
		i++;
	calcu(&nb, &md, &i, ptr);
	if (md > 19 && sn < 0)
		return (0);
	else if (md > 19 && sn > 0)
		return (-1);
	return (nb * sn);
}


/**
 * main - to print args
 * @argc: number of input args
 * @argv: tow d string
 * Return: zero when finished
 */
int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	rslt;

	if (argc != 3)
		return (printf("Error\n"), 1);
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	rslt = n1 * n2;
	printf("%d\n", rslt);
	return (0);
}
