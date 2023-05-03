#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: String to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int ind;

	while (s[c] != '\0')
	{
		c++;
	}
	for (ind = 0; ind < c; ind++)
	{
		c--;
		r = s[ind];
		s[ind] = s[c];
		s[c] = r;
	}
}
