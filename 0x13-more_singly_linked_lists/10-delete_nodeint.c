#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: holds the pointer to the first element
 * @index: index to targeted node
 * Return: address of new node;
 */
int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*tmp;
	listint_t	*to_del;
	unsigned int	i;

	tmp = NULL;
	to_del = NULL;
	if (!head || !(*head))
		return (-1);
	tmp = *head;
	i = 0;
	while (tmp && ++i < index)
		tmp = tmp->next;
	to_del = tmp->next;
	if (!index)
	{
		to_del = *head;
		*head = to_del->next;
	}
	if (!to_del)
		return (-1);
	tmp->next = to_del->next;
	free(to_del);
	to_del = NULL;
	return (1);
}
