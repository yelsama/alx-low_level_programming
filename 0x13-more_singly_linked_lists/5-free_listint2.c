#include "lists.h"

/**
 * free_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_list(listint_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head);
	head = NULL;
}
