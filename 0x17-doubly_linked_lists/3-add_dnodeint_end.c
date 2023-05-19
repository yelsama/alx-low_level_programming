#include "lists.h"

/**
 * add_dnodeint_end - add elemt at the end
 * @head: holds the pointer to the first element
 * @n: numbet to be stored in the tail
 * Return: the new tail for the list
 */
dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new_tail;
	dlistint_t	*trace;

	new_tail = malloc(sizeof(dlistint_t));
	if (!new_tail)
		return (NULL);
	new_tail->next = NULL;
	new_tail->n = n;
	trace = *head;
	while (trace && trace->next)
		trace = trace->next;
	new_tail->prev = trace;
	if (!trace)
		*head = new_tail;
	else
		trace->next = new_tail;
	return (new_tail);
}
