#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm
 * @str: String used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ch;

	hash = 5381;
	while ((ch = *str++))
	{
		hash = ((hash << 5) + hash) + ch; /* hash * 33 + ch */
	}
	return (hash);
}
