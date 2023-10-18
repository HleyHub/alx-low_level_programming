#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings
 * @dest: First string
 * @src: second string
 * @n: number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, strlgth;

	strlgth = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[strlgth + i] = src[i];
	}
	dest[strlgth + i] = '\0';
	return (dest);
}
