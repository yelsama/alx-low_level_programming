#include "lists.h"

/**
 * sum_dlistint - find and return
 * @head: holds the pointer to the first element
 * Return: summation
 */
int	sum_dlistint(dlistint_t *head)
{
	int	sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
