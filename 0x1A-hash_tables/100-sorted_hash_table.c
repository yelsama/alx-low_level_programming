#include "hash_tables.h"


/**
 * shash_table_create - check the code
 *
 * @size: inted size for hash table
 * Return: hash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = NULL;
	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}

/**
 * shash_table_set - check the code
 * @ht: hash table you want to add or update
 * @key: second arg
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	shash_node_t *tmp;
	unsigned long int i;

	if (!key || key[0] == 0 || !value || !ht)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	i = key_index((const unsigned char *)key, (*ht).size);
	(*new).key = strdup(key);
	(*new).value = strdup(value);
	(*new).next = (*ht).array[i];
	(*new).snext = NULL;
	tmp = (*ht).array[i];
	while (tmp)
	{
		if (!strcmp((*tmp).key, key))
		{
			while ((*tmp).snext)
				tmp = (*tmp).snext;
			(*tmp).snext = new;
			(*new).sprev = tmp;
			return (1);
		}
		tmp = (*tmp).next;
	}
	(*new).sprev = NULL;
	(*ht).array[i] = new;
	return (1);
}

/**
 * shash_table_print - check the code
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int i = 0;
	int	p_handle = 0;

	if (!ht)
		return;
	printf("{");
	while (i < (*ht).size)
	{
		tmp = (*ht).array[i];
		while (tmp)
		{
			if (p_handle++)
				printf(", ");
			printf("'%s': '%s'", (*tmp).key, (*tmp).value);
			tmp = (*tmp).next;
		}
		i++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - check the code
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int i;
	int	p_handle = 0;

	if (!ht)
		return;
	i = (*ht).size;
	printf("{");
	while (i > 0)
	{
		tmp = (*ht).array[--i];
		while (tmp)
		{
			if (p_handle++)
				printf(", ");
			printf("'%s': '%s'", (*tmp).key, (*tmp).value);
			tmp = (*tmp).next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_get - check the code
 * @ht: hash table pointer
 * @key: a key to find the element
 * Return: a vlue for a key or none
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int i;

	if (!ht || !key || !key[0])
		return (NULL);
	i = key_index((const unsigned char *)(key), (*ht).size);
	tmp = (*ht).array[i];
	while (tmp)
	{
		if (!strcmp((*tmp).key, key))
			return ((*tmp).value);
		tmp = (*tmp).next;
	}
	return (NULL);
}

/**
 * free_list - free a list
 * @head: holds the pointer to the first element
 * Return: no thing
 */
void	free_list(shash_node_t *head)
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
 * shash_table_delete - check the code
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;
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
