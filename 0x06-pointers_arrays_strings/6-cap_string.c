#include "main.h"
#include <string.h>
/**
 * cap_string - Function that capitalizes all words of a string
 * @strg: String
 * Return: String
 */
char *cap_string(char *strg)
{
	int ind = 0;

	while (strg[ind])
	{
		while (!(strg[ind] >= 97 && strg[ind] <= 122))
		{
			ind++;
		}
		if (strg[ind - 1] == ' ' ||
		    strg[ind - 1] == '\t' ||
		    strg[ind - 1] == '\n' ||
		    strg[ind - 1] == ',' ||
		    strg[ind - 1] == ';' ||
		    strg[ind - 1] == '.' ||
		    strg[ind - 1] == '!' ||
		    strg[ind - 1] == '?' ||
		    strg[ind - 1] == '"' ||
		    strg[ind - 1] == '(' ||
		    strg[ind - 1] == ')' ||
		    strg[ind - 1] == '{' ||
		    strg[ind - 1] == '}' ||
		    ind == 0)
		{
			strg[ind] -= 32;
		}
		ind++;
	}
	return (strg);
}
