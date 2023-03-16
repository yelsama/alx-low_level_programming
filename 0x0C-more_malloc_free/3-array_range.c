#include "main.h"

/**
 * array_range - set all allcation to zero
 * @min: number of units
 * @max: unitsize
 * Return: a pointer to the new array of int
 */
int	*array_range(int min, int max)
{
	int	*new;
	int	size;

	if (min > max)
		return (NULL);
	size = max - min;
	new = malloc(sizeof(int) * (size + 1));
	if (!new)
		return (NULL);
	size = -1;
	while (min <= max)
	{
		new[++size] = min;
		min++;
	}
	return (new);
}
