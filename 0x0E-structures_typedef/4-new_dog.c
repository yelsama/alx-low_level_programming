#include "dog.h"
/**
 * new_dog - see code
 * @name: an argue
 * @age: an argue
 * @owner: an argue
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*d;

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
