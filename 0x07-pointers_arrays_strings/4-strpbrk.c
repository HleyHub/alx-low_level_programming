#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String with occurrence
 * @accept: string with number of bytes
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int ind1, ind2;

	for (ind1 = 0; s[ind1] != '\0'; ind1++)
	{
		for (ind2 = 0; accept[ind2] != '\0'; ind2++)
		{
			if (s[ind1] == accept[ind2])
			{
				return (&s[ind1]);
			}
		}
	}
	return (s);
}
