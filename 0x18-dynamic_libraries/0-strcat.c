#include "main.h"
#include <string.h>
/**
 * _strcat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, strlgth1, strlgth2;

	strlgth1 = strlen(dest);
	strlgth2 = strlen(src);
	for (i = 0; i <= strlgth2; i++)
	{
		dest[strlgth1 + i] = src[i];
	}
	return (dest);
}
