#include "main.h"
/**
 * puts_half - Function that prints half of a string, followed by a new line
 * @str: String to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0, j, lgth = 0;

	while (str[i] != '\0')
	{
		lgth++;
		i++;
	}
	j = lgth / 2;
	if ((lgth % 2) == 1)
	{
		j = ((lgth + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
