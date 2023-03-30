#include "lists.h"

/**
 * print_list - prints list elements
 * @h: string to put bettween numbers
 * Return: number of nodes
 */
size_t	print_list(const list_t *h)
{
	size_t	nodes;

	nodes = 0;
	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
