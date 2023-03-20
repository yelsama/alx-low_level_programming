#include "dog.h"

/**
 * _strdup - to print num of args
 * @str: string to duplicate
 * Return: a pointer to the new string
 */
char	*_strdup(char *str)
{
	char	*new;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = str[i];
	return (new);
}

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

	d = malloc(sizeof(dog_t) * 1);
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
	return (d);
}
