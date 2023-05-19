#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: head of double linked list
 * Return: number of nodes
 */
size_t	dlistint_len(const dlistint_t *h)
{
	size_t	nodes;

	nodes = 0;
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
