#include "main.h"
/**
 * puts2 - unction that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: String to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
