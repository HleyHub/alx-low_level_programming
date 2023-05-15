#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - Function that concatenates all the arguments of your program
 * @ac: First argument
 * @av: Second argument
 * Return: Returns a pointer to a new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int ind, strlgth = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < ac; ind++)
	{
		strlgth = strlgth + strlen(av[ind]);
	}
	strlgth = strlgth + ac + 1;
	str = (char *)malloc(strlgth * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str[0] = '\0';
	for (ind = 0; ind < ac; ind++)
	{
		strcat(str, av[ind]);
		strcat(str, "\n");
	}
	return (str);
}
