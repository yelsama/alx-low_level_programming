#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: holds the pointer to the first element
 * @idx: index to inject a new node
 * @n: int to put in the new node
 * Return: address of new node;
 */
dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*new_node;
	dlistint_t	*tmp;
	unsigned int	i;

	if (!h)
		return (NULL);
	if (!(*h) && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	i = 0;
	while (tmp && ++i < idx)
		tmp = tmp->next;
	if (i < idx)
		return (NULL);
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next = new_node;
	tmp = new_node->next;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
