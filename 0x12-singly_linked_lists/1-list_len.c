#include "lists.h"

/**
 * list_len - prints list elements
 * @h: string to put bettween numbers
 * Return: number of nodes
 */
size_t	list_len(const list_t *h)
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
