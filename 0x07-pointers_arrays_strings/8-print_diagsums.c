#include "main.h"

/**
 * print_diagsums - check the code
 * @a: array of intgers represents nxn matrix
 * @size: the sizeo fof the matrix
 */
void	print_diagsums(int *a, int size)
{
	int		i;
	int		n;
	int		cnt;
	int		lr_diag_sum;
	int		rl_diag_sum;

	lr_diag_sum = 0;
	rl_diag_sum = 0;
	cnt = 0;
	i = -1;
	while (++i < size)
	{
		n = -1;
		while (++n < size)
		{
			if (n == i)
				lr_diag_sum += a[cnt];
			if (n + i == size - 1)
				rl_diag_sum += a[cnt];
			cnt++;
		}
	}
	printf("%d, %d\n", lr_diag_sum, rl_diag_sum);
}
