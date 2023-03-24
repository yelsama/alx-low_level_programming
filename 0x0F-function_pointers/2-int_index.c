#include "function_pointers.h"


/**
 * int_index - check the code
 * @array: array of intgers
 * @size: size of the array
 * @cmp: the funcion to find an int
 * Return: the index of the int of found
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (!array || !cmp)
		return (-1);
	i = -1;
	while (++i < size)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
