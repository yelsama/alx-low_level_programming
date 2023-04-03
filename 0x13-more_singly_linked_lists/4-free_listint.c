#include "lists.h"

/**
 * free_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
	head = NULL;
}
