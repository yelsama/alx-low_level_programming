#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: a given name to print
 * @f: pointer to printing function 
 */
void	print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
