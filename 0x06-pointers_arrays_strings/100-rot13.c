#include "main.h"
#include <string.h>
/**
 * rot13 - Function that encodes a string into 1337
 * @s: String
 * Return: String
 */
char *rot13(char *s)
{
	int ind1;
	int ind2;

	char strg[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strgrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ind1 = 0; s[ind1] != '\0'; ind1++)
	{
		for (ind2 = 0; ind2 < 'R'; ind2++)
		{
			if (s[ind1] == strg[ind2])
			{
				s[ind1] = strgrot[ind2];
				break;
			}
		}
	}
	return (s);
}
