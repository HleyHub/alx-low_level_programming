#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: Destination string
 * @src: First str
 * @n: bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		*(dest + ind) = *(src + ind);
	}
	return (dest);
}
