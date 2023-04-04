#include "lists.h"

/**
 * pop_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
int	pop_listint(listint_t **head)
{
	listint_t	*new_head;
	int			del_n;

	if (!head || !(*head))
		return (0);
	new_head = (*head)->next;
	del_n = (*head)->n;
	free(*head);
	*head = new_head;
	return (del_n);
}
