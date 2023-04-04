#include "lists.h"

/**
 * get_nodeint_at_index - find and return
 * @head: holds the pointer to the first element
 * @index: inteded index to return
 * Return: link to the node if exits
 */
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (head && ++i <= index)
		head = head->next;
	return (head);
}
