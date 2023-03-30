#include "lists.h"

/**
 * free_list - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head->str);
	head->str = NULL;
	free(head);
	head = NULL;
}
