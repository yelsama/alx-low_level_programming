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
	if (i > 0 && str[i - 1] != ' ')
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
	int		i;
	int		j;

	if (!str)
		return (NULL);
	new = NULL;
	words = count_words(str);
	if (!words)
		return (NULL);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	new[words] = NULL;
	j = -1;
	while (*str && j < words)
	{
		while (*str && *str == ' ')
			str++;
		i = 0;
		while (str[i] && str[i] != ' ')
			i++;
		if (i > 0 && ++j < words)
		{
			new[j] = malloc(sizeof(char) * (i + 1));
			if (!new[j])
				return (sanitise(new, j), NULL);
			i = -1;
			while (*str && *str != ' ')
			{
				new[j][++i] = *str;
				str++;
			}
			new[j][++i] = '\0';
		}
	}
	new[++j] = NULL;
	return (new);
}
