#include "main.h"
#include <string.h>
/**
 * rev_string - Function that prints a string, followed by a new line, to stdout
 * @s: String to be printed
 * Return: 0
 */
void rev_string(char *s)
{
	char a = s[0];
	int i, lgth = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{

