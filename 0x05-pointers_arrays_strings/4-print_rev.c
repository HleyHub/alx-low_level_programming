#include "main.h"
/**
 * print_rev - Function that prints a string, in reverse
 * @s: String to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
		{
			break;
		}
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
