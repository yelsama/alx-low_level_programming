#include "main.h"

/**
 * sanitise - to free memory when error occurs
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
