#ifndef	DOG_H
# define DOG_H
# include <stdio.h>

/**
 * struct dog - Represents a dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */
struct	dog
{
	char	*name;
	float	age;
	char	*owner;
};

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
#endif
