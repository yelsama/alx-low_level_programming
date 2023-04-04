#include "lists.h"

/**
 * reverse_listint - free a list
 * @head: holds the pointer to the first element
 * Return: reverse list head
 */
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*next;
	listint_t	*prev = NULL;
	listint_t	*current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
