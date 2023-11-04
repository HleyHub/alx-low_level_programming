#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
