#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: String to be printed
 * Return: 0
 */
void _puts(char *str)
{
        int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
