#include "lists.h"

/**
 * add_dnodeint - prints list elements
 * @head: holds the pointer to the first element
 * @n: number to be stored at the node
 * Return: the new head for the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	if (*head)
		(*head)->prev = new_head;
	*head = new_head;
	return (new_head);
}
