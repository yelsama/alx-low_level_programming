#include "main.h"

/**
 * _strspn - check the code
 * @s: string to to span
 * @accept: set of strings to look at
 * Return: 
 */
unsigned int	_strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *p = s;
    while (*p != '\0') {
        if (strchr(accept, *p) == NULL) {
            break;
        }
        count++;
        p++;
    }
    return count;
}
