#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
