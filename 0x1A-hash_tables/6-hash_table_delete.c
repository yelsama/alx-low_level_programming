#include "hash_tables.h"



/**
 * free_list - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_list(hash_node_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->value);
	head->value = NULL;
	free(head->key);
	head->key = NULL;
	free(head);
	head = NULL;
}

/**
 * hash_table_delete - check the code
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	if (!ht)
		return;
	tmp = NULL;
	while (i < (*ht).size)
	{
		tmp = (*ht).array[i];
		free_list(tmp);
		i++;
	}
	free((*ht).array);
	(*ht).array = NULL;
	free(ht);
	ht = NULL;
}
