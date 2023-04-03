#include "lists.h"

/**
 * _free_listint - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	_free_listint(listint_t *head)
{
	if (!head)
		return;
	_free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_listint2(listint_t **head)
{
	if (!head)
		return;
	_free_listint(*head);
	*head = NULL;
}
