#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: head of double linked list
 * Return: number of nodes
 */
size_t	print_dlistint(const dlistint_t *h)
{
	size_t	nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
