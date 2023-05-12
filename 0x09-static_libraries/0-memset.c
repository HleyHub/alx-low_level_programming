#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory
 * @b: Byte
 * @n: First n bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		*(s + ind) = b;
	}
	return (s);
}
