#include "dog.h"

/**
 * print_dog - see code
 * @d: struct to free
 */
void	free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
