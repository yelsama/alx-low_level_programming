#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: hash table pointer
 * @key: a key to find the element
 * Return: a vlue for a key or none
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
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
