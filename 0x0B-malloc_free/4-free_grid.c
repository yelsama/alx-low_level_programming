#include "main.h"

/**
 * free_grid - to free  2d int array
 * @grid: array to be freed;
 * @height: index of created elements
 */
void free_grid(int **grid, int height)
{
	int	i;

	i = -1;
	while (++i < height)
		free(grid[i]);
	free(grid);
	grid = NULL;
}
