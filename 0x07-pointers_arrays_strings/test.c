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
	s = strchr(s, c);
	return (s);
}
