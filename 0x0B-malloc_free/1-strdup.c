#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: String
 * Return: Returns a pointer to the string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int ind = 0, size;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	str1 = (char *)malloc(size * sizeof(char));
	if (str1 == NULL)
	{
		return (NULL);
	}
	while (ind < size)
	{
		str1[ind] = str[ind];
		ind++;
	}
	return (str1);
}
