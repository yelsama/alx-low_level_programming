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
