#include "main.h"
#include <string.h>
/**
 * print_rev - Function that prints a string, followed by a new line, to stdout
 * @s: String to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int i, lgth = strlen(s);

	for (i = lgth - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
