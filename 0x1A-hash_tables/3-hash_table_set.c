#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @ht: hash table you want to add or update
 * @key: second arg
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (!key || key[0] == 0 || !value || !ht)
		return (0);
	i = key_index((const unsigned char *)key, (*ht).size);
	tmp = (*ht).array[i];
	while (tmp)
	{
		if (!strcmp((*tmp).key, key))
		{
			free((*tmp).value);
			(*tmp).value = strdup(value);
			return (1);
		}
		tmp = (*tmp).next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	(*new).key = strdup(key);
	(*new).value = strdup(value);
	(*new).next = (*ht).array[i];
	(*ht).array[i] = new;
	return (1);
}
