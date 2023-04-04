#include "lists.h"

/**
 * pop_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
int	pop_listint(listint_t **head)
{
	listint_t	*top_node;
	int			del_n;

	if (!head || *head)
		return (0);
	top_node = *head;
	del_n = (*head)->n;
	free(top_node);
	*head = (*head)->next;
	return (del_n);
}
