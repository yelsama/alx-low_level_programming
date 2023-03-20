#include "dog.h"
/**
 * init_dog - see code
 * @d: struct to fill
 * @name: an argue
 * @age: an argue
 * @owner: an argue
 */
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
