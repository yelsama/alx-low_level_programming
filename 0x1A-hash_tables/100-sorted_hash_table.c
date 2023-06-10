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
			tmp = (*tmp).snext;
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
	unsigned long int i = (*ht).size - 1;;
	int	p_handle = 0;

	if (!ht)
		return;
	printf("{");
	while (i >= 0)
	{
		tmp = (*ht).array[i];
		while (tmp)
		{
			if (p_handle++)
				printf(", ");
			printf("'%s': '%s'", (*tmp).key, (*tmp).value);
			tmp = (*tmp).snext;
		}
		if (!i)
			break;
		i--;
	}
	printf("}\n");
}
