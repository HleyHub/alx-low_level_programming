#include "main.h"
#include <string.h>
/**
 * _strstr - Function that locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int ind1 = 0, ind2 = 0;

	for (; haystack[ind1] != '\0'; haystack++)
	{
		while (haystack[ind1] == needle[ind2] && needle[ind2] != '\0')
		{
			ind1++;
			ind2++;
		}
		if (needle[ind2] == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
