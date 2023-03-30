#include "lists.h"

/**
 * add_node - prints list elements
 * @head: holds the pointer to the first element
 * @str: string to duplicated in the node
 * Return: the new head for the node
 */
list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new_head;
	int		i;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	i = 0;
	while (str && str[i])
		i++;
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
