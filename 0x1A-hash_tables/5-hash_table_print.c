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
	int i = -1;

	if (!ht)
		return;
	tmp = (*ht).array[++i];
	printf("{");
	while (tmp)
	{
		printf("%s", (*tmp).value);
		tmp = (*tmp).next;
		if (tmp)
			printf(": ");
	}
	printf("}\n");
}
