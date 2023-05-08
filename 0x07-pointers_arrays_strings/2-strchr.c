#include "main.h"
#include <string.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: String
 * @c: Character in a string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] != '\0'; ind++)
	{
		if (s[ind] == c)
		{
			return (&s[ind]);
		}
	}
	return (NULL);
}
