#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that concatenates two strings
 * @s1: First string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int retnval;

	retnval = strcmp(s1, s2);
	if (retnval == 0)
	{
		return (0);
	}
	else
	{
		return (retnval);
	}
}
