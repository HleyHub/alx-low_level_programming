#include "main.h"
/**
 * wildcmp - Function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: 1 if strings are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == '\0' && s2[i] == '\0')
        {
                return (1);
        }
        if (s1[i] == s2[i])
        {
                return (wildcmp(s1 + 1, s2 + 1));
        }
        if (s2[i] == '*')
        {
                if (wildcmp(s1, s2 + 1))
                {
                        return (1);
                }
                if (s1[i] != '\0' && wildcmp(s1 + 1, s2))
                {
                        return (1);
                }
        }
        return (0);
}
