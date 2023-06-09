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
	while (i < (*ht).size)
	{
		tmp = (*ht).array[i];
		printf("{");
		while (tmp)
		{
			printf("%s", (*tmp).value);
			tmp = (*tmp).next;
			if (tmp)
				printf(": ");
		}
		printf("}\n");
		i++;
	}
}
