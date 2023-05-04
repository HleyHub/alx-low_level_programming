#include "main.h"
#include <string.h>
/**
 * leet - Function that encodes a string into 1337
 * @chstg: String to encode
 * Return: String
 */
char *leet(char *chstg)
{
	int ind1, ind2;
	char strg1[] = "aAeEoOtTlL";
	char strg2[] = "4433007711";

	for (ind1 = 0; chstg[ind1] != '\0'; ind1++)
	{
		for (ind2 = 0; ind2 < 10; ind2++)
		{
			if (chstg[ind1] == strg1[ind2])
			{
				chstg[ind1] = strg2[ind2];
			}
		}
	}
	return (chstg);
}
