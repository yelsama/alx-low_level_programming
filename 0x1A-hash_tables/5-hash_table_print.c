#include "hash_tables.h"


/**
 * hash_table_print
 *
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	long unsigned int i = 0;

	if (!ht)
		return;
	printf("{");
	while (i < (*ht).size)
	{
		tmp = (*ht).array[i];
		while (tmp)
		{
			printf("'%s': '%s'", (*tmp).key, (*tmp).value);
			tmp = (*tmp).next;
		}
		i++;
		if ((*ht).array[i] && i > 1)
			printf(", ");
	}
	printf("}\n");
}
