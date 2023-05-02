#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: String to be printed
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		a++;
	}
}
