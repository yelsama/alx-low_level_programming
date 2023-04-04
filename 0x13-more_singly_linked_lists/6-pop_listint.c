#include "lists.h"

/**
 * pop_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
int	pop_listint(listint_t **head)
{
	listint_t	*new_head;

	if (!head || *head)
		return (0);
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	if (!new_head)
		return (0);
	return (new_head->n);
}
