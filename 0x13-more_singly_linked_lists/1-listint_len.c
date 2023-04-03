#include "lists.h"

/**
 * listin_len - prints list elements
 * @h: int linked list
 * Return: number of nodes
 */
size_t	listint_len(const listint_t *h)
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
