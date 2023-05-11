#include "main.h"
#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: String to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int i, lgth = 0;

	for (i = 0; i < s[i]; i++)
	{
		if (s[lgth] != '\0')
		{
			lgth++;
		}
	}
	return (lgth);
}
