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
 * main - to deside the number of coins
 * @argc: number of input args
 * @argv: tow d string
 * Return: zero when finished
 */
int	main(int argc, char **argv)
{
	int	input;
	int	crnt_ch;
	int	change;
	int	i;
	int	cmp[] = {25, 10, 5, 2, 1, 0};

	if (argc != 2)
		return (printf("Error\n"), 1);
	change = 0;
	i = 0;
	input = _atoi(argv[1]);
	while (cmp[i])
	{
		crnt_ch = 0;
		if (cmp[i] > input)
		{
			i++;
			continue;
		}
		crnt_ch = input / cmp[i];
		change += crnt_ch;
		input = input - (cmp[i] * crnt_ch);
		i++;
	}
	printf("%d\n", change);
	return (0);
}