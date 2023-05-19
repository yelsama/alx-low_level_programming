#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: holds the pointer to the first element
 * @index: index to targeted node
 * Return: address of new node;
 */
int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*tmp;
	dlistint_t	*to_del;
	dlistint_t	*after;
	unsigned int	i;

	if (!head || !(*head))
		return (-1);
	tmp = *head;
	i = 0;
	while (tmp && ++i < index)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	to_del = tmp->next;
	if (!index)
	{
		to_del = *head;
		*head = to_del->next;
		(*head)->prev = NULL;
	}
	if (!to_del)
		return (-1);
	after = to_del->next;
	tmp->next = after;
	if (after)
		after->prev = tmp;
	free(to_del);
	return (1);
}
