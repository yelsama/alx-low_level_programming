#include "lists.h"

/**
 * print_listint - prints list elements
 * @h: h list of intgers
 * Return: number of nodes
 */
size_t	print_listint(const listint_t *h)
{
	size_t	nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
