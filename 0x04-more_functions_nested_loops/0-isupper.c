#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: The character to be checked
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 10 && c <= 90)
	{
		return (1);
	}
	return (0);
}
