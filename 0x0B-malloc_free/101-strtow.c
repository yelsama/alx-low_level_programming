#include "main.h"

/**
 * sanitise - to free memory when error occurs
 * @new: array to be freed;
 * @i: index of created elements
 */
static void	sanitise(char **new, int i)
{
	if (i == 0)
	{
		free(new);
		return;
	}
	while (i >= 0)
		free(new[i--]);
	free(new);
	new = NULL;
}

/**
 * count_words - to free memory when error occurs
 * @str: given array;
 * Return: number of words in string
 */
static int	count_words(char *str)
{
	int		i;
	int		words;

	i = -1;
	words = 0;
	while (*str && *str == ' ')
		str++;
	while (str[++i])
	{
		if (str[i] == ' ')
		{
			words++;
			while (str[i] && str[i] == ' ')
				i++;
			if (!str[i])
				break;
		}
	}
	if (!words && i > 0)
		words++;
	return (words);
}

/**
 * strtow - put args into one string
 * @str: number of argument
 * Return: a pointer to the new string
 */
char **strtow(char *str)
{
	char	**new;
	int		words;
	int		start;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	words = count_words(str);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	new[words] = NULL;
	words = -1;
	i = -1;
	while (str[++i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		end = i;
		if (end > start)
		{
			new[++words] = malloc(sizeof(char) * (end + 1 - start));
			if (!new[words])
				return (sanitise(new, words), NULL);
			end = -1;
			while (start <= i)
				new[words][++end] = str[start++];
			new[words][++end] = '\0';
		}
	}
	return (new);
}
