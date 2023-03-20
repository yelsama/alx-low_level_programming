#include "dog.h"
/**
 * init_dog - see code
 * @d: struct to print
 */
void	print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s", d->owner);
	else
		printf("(nil)\n");
}
