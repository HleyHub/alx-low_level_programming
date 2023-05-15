#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns a pointer or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned ind, strlgth1, strlgth2, size;

	strlgth1 = strlen(s1);
	strlgth2 = strlen(s2);
	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	size = strlgth1 + strlgth2 +1;
	s1 = (char *)malloc(size * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind <= strlgth2; ind++)
	{
		s1[strlgth1 + ind] = s2[ind];
	}
	return (s1);
/*	if (s1[strlgth1 + strlgth2] != '\0')
	{
		return (s1);
	}*/
}
