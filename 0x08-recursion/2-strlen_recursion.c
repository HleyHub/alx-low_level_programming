#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: String to be returned
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int lentghstr = 0;

	if (*s == '\0')
	{
		return (lentghstr);
	}
	else
	{
		lentghstr = 1 + _strlen_recursion(s + 1);
		return (lentghstr);
	}
}
