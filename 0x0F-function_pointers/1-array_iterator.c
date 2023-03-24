#include "function_pointers.h"


/**
 * array_iterator - check the code
 * @array: array of intgers
 * @size: size of the array
 * @action: the funcion to print arry
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i = 0;

	if (!array || !action)
		return;
	while (i < size)
		action(array[i++]);
}
