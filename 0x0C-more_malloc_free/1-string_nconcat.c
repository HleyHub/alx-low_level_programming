#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 * Return: Pointer to the array or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ind1, ind2, strlgth1, strlgth2, size;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strlgth1 = strlen(s1);
	strlgth2 = strlen(s2);
	if (n >= strlgth2)
	{
		n = strlgth2;
	}
	size = strlgth1 + n;
	s3 = (char *)malloc(size * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (ind1 = 0; ind1 < strlgth1; ind1++)
	{
		s3[ind1] = s1[ind1];
	}
	for (ind2 = 0; ind2 < n; ind2++)
	{
		s3[ind1 + ind2] = s2[ind2];
	}
	s3[ind1 + ind2] = '\0';
	return (s3);
}
