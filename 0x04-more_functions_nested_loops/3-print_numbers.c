#include "main.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
