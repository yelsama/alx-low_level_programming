#include "lists.h"

/**
 * add_nodeint_end - prints list elements
 * @head: holds the pointer to the first element
 * @n: intger to hold
 * Return: the head for the node
 */
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new_tail;
	listint_t	*trace;

	trace = NULL;
	new_tail = NULL;
	new_tail = malloc(sizeof(listint_t));
	if (!new_tail)
		return (NULL);
	new_tail->n = n;
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
