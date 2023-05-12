#include "main.h"
#include <string.h>
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring
 * Return: String
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ind = 0;

	if (s == NULL || accept == NULL)
	{
		return (ind);
	}
	while (*s && strchr(accept, *s++))
	{
		ind++;
	}
	return (ind);
}
