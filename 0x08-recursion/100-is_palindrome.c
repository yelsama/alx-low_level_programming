#include "main.h"

/**
 * test_palindrome - check the code
 * @s: given string to test
 * @left: left side index
 * @right: right side index
 * Return: 1 plindrome, otherwise 0
 */
int	test_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (test_palindrome(s, left + 1, right - 1));
}

/**
 * _strlen_recursion - check the code
 * @s: string to print
 * Return: length of s;
 */
int	_strlen_recursion(char *s)
{
	int	n;

	n = 0;
	if (*s)
	{
		n = 1;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

/**
 * is_palindrome - check the code
 * @s: given char to test
 * Return: 1 if palindrome, otherwise 0
 */
int	is_palindrome(char *s)
{
	int	end;

	if (!s)
		return (0);
	end = _strlen_recursion(s);
	return (test_palindrome(s, 0, end - 1));
}
