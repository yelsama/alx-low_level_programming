#include "main.h"

/**
 * set_balance - check the code
 * @s1: first string
 * @s2: second string
 * @i: first string index
 * @j: second string index
 */
void	set_balance(char *s1, char *s2, int *i, int *j)
{
	if (s2[*j] == '*')
	{
		*j += 1;
		set_balance(s1, s2, i, j);
	}
	if (!s2[*j] && s1[*i])
	{
		*i += 1;
		set_balance(s1, s2, i, j);
	}
	if (s1[*i] && s1[*i] != s2[*j])
	{
		*i += 1;
		set_balance(s1, s2, i, j);
	}
}

/**
 * test_strings - check the code
 * @s1: first string
 * @s2: second string
 * @i: first string index
 * @j: second string index
 * Return: 1 if the same 0 other wise
 */
int	test_strings(char *s1, char *s2, int *i, int *j)
{
	if (!s1[*i] && !s2[*j])
		return (1);
	if (s1[*i] == s2[*j])
	{
		*i += 1;
		*j += 1;
		return (test_strings(s1, s2, i, j));
	}
	if (s1[*i] != s2[*j] && s2[*j] != '*')
		return (0);
	if (s2[*i] == '*')
	{
		set_balance(s1, s2, i, j);
		return (test_strings(s1, s2, i, j));
	}
	if (s1[*i] != s2[*j])
		return (0);
	return (0);
}

/**
 * wildcmp - check the code
 * @s1: first given string
 * @s2: second given string
 * Return: 1 if equal, otherwise 0
 */
int	wildcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	if (!s1 && !s2)
		return (0);
	i = 0;
	j = 0;
	if (*s1 != *s2 && *s1 && *s2 != '*')
		return (0);
	return (test_strings(s1, s2, &i, &j));
}
