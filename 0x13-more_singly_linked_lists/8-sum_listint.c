#include "lists.h"

/**
 * sum_listint - find and return
 * @head: holds the pointer to the first element
 * Return: summation
 */
int	sum_listint(listint_t *head)
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
