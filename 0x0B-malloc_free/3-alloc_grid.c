#include "main.h"

/**
 * sanitise - to free memory when error occurs
 * @new: array to be freed;
 * @i: index of created elements
 */
static void	sanitise(int **new, int i)
{
	if (i == 0)
	{
		free(new);
		return;
	}
	while (i >= 0)
		free(new[i--]);
	free(new);
	new = NULL;
}

/**
 * alloc_grid - allocate tow d int
 * @width: numbers on each row;
 * @height: number of rows
 * Return: a pointer to the tow d ints
 */
int		**alloc_grid(int width, int height)
{
	int	**new;
	int		i;
	int		n;

	if (!width || !height)
		return (NULL);
	new = malloc(sizeof(int *) * height);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < height)
	{
		new[i] = malloc(sizeof(int) * width);
		if (!new[i])
			return (sanitise(new, i), NULL);
		n = -1;
		while (++n < width)
			new[i][n] = 0;
	}
	return (new);
}
