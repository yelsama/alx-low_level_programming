#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
	head = NULL;
}
