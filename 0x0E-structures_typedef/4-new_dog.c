#include "dog.h"

/**
 * new_dog - see code
 * @name: an argue
 * @age: an argue
 * @owner: an argue
 * Return: new struct
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	if (name)
		d->name = strdup(name);
	d->age = age;
	if (owner)
		d->owner = strdup(owner);
	return (d);
}
