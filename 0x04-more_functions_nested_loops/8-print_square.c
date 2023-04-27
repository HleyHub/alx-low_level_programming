#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line
 * @size: number of times
 * Return: 0
 */
void print_square(int size)
{
	int a, i;

	i = 0;

	if (size < 1)
		_putchar('\n');
	while (i < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		i++;
	}
}
