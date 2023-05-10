#include "main.h"
#include <string.h>
/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: String to be checked
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (if_string_palindrome(s, 0, _string_recursion(s)));
}

/**
 * _string_recursion - Function that uses recursion to return the
 * length of a string
 * @s: String to find the length of
 * Return: String length
 */
int _string_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _string_recursion(s + 1));
}

/**
 * if_string_palindrome - Function that uses recursion to check
 * if a string is a palindrome
 * @s: String to be checked
 * @ind: Index iterator
 * @lgth_str: String length
 * Return: 1 if palindrome and 0 if not
 */
int if_string_palindrome(char *s, int ind, int lgth_str)
{
	if (*(s + ind) != *(s + lgth_str - 1))
	{
		return (0);
	}
	if (ind >= lgth_str)
	{
		return (1);
	}
	return (if_string_palindrome(s, ind + 1, lgth_str - 1));
}
