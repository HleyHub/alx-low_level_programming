#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * strtow - Function that splits a string into words
 * @str: String to be splitted
 * Return: Returns NULL if string is NULL or empty
 */
char **strtow(char *str)
{
	int ind1 = 0, strlgth = 0, start_str, end_str, ind2;
	char **words;
	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	for (ind1 = 0; str[ind1] != '\0'; ind1++)
	{
		if (((ind1 > 0) && (str[ind1 - 1] != ' ')) || (str[ind1] != ' '))
		{
			strlgth++;
		}
	}
	words = (char **)malloc((strlgth) * sizeof(char *));
	start_str = 0;
	ind2 = 0;
	for (ind1 = 0; str[ind1] != '\0'; ind1++)
	{
		if (((ind1 > 0) && (str[ind1 - 1] == ' ')) || (start_str == 0))
		{
			start_str = ind1;
		}
		else if (str[ind1 + 1] == '\0' || str[ind1 + 1] == ' ')
		{
			end_str = ind1;
			words[ind2] = malloc((end_str - start_str) + 1);
			memcpy(words[ind2], &(str[start_str]), ((end_str - start_str)));
			/*words[ind2][(end_str - start_str)] = '\0';*/
			ind2++;
		}
	}
	words[strlgth] = NULL;
	return (words);
}
