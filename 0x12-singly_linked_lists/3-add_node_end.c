#include "lists.h"

/**
 * add_node_end - prints list elements
 * @head: holds the pointer to the first element
 * @str: string to duplicated in the node
 * Return: the head for the node
 */
list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*new_tail;
	list_t	*trace;
	int		i;

	new_tail = malloc(sizeof(list_t));
	if (!new_tail)
		return (NULL);
	new_tail->next = NULL;
	new_tail->str = strdup(str);
	i = 0;
	while (str && str[i])
		i++;
	new_tail->len = i;
	trace = *head;
	if (!trace)
	{
		*head = new_tail;
		return (new_tail);
	}
	while (trace->next)
		trace = trace->next;
	trace->next = new_tail;
	return (new_tail);
}
