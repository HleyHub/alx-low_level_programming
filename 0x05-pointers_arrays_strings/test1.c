#include "main.h"
/**
 * print_rev - Function that prints a string, followed by a new line, to stdout
 * @s: String to be printed
 * Return: 0
 */
void print_rev(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
