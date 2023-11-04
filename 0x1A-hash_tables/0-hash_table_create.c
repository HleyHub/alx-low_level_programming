#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: Size of the array
 * Return: 0 or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hasht;
	unsigned long int index;

	new_hasht = malloc(sizeof(hash_table_t));
	if (new_hasht == NULL)
		return (NULL);
	new_hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hasht->array == NULL)
	{
		free(new_hasht);
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		new_hasht->array[index] = NULL;
	}
	new_hasht->size = size;
	return (new_hasht);
}
