#include "main.h"
#include <string.h>
/**
 * _strncpy - Function that concatenates two strings
 * @dest: First string
 * @src: second string
 * @n: number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
