#include "main.h"
#include <string.h>
/**
 * string_toupper - Function that changes all lowercase
 * letters of a string to uppercase
 * @strg: String
 * Return: String
 */
char *string_toupper(char *strg)
{
	int j;

	for (j = 0; strg[j] != '\0'; j++)
	{
		if (strg[j] >= 'a' && strg[j] <= 'z')
		{
			strg[j] = strg[j] - 'a' + 'A';
		}
	}
	return (strg);
}
