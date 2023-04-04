#include "lists.h"

/**
 * add_nodeint - prints list elements
 * @head: holds the pointer to the first element
 * @n: intger to duplicated in the node
 * Return: the new head for the node
 */
listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*new_head;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
