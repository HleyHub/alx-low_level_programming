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
	unsigned int ind1, strlgth1, strlgth2, size;
	char *s3;

	strlgth1 = strlen(s1);
	strlgth2 = strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = strlgth1 + strlgth2 + 1;
	s3 = (char *)malloc(size * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (ind1 = 0; ind1 < strlgth1; ind1++)
	{
		s3[ind1] = s1[ind1];
	}
	for (ind1 = 0; ind1 < strlgth2; ind1++)
	{
		s3[strlgth1 + ind1] = s2[ind1];
	}
	s3[strlgth1 + strlgth2] = '\0';
	return (s3);
}
