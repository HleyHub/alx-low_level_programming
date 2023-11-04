#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht:hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size)
		return;
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			node = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
