#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src
 * @dest: Buffer pointer
 * @src: String pointed
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int ind = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; ind < c ; ind++)
	{
		dest[ind] = src[ind];
	}
	dest[c] = '\0';
	return (dest);
}
