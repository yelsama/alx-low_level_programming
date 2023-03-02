#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to the changed string
 */
char *string_toupper(char *str)
{
	int i = -1;

	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	return (str);
}
