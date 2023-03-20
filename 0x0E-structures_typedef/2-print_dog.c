#include "dog.h"
/**
 * init_dog - see code
 * @d: struct to print
 */
void	print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\nAge: %d\nOwner: %s", d->name, d->age, d->owner);
}
