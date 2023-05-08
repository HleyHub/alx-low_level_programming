#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: String
 * @c: Character in a string
 * Return: First occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] != '\0'; ind++)
	{
		if (s[ind] == c)
		{
			return &s[ind];
		}
	}
	return (s);
}
