#include "main.h"
#include <string.h>

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int ind;

	if (b == NULL)
		return (0);
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind] < '\0' || b[ind] > '1')
			return (0);
		num = (num * 2) + (b[ind] - '0');
	}
	return (num);
}
