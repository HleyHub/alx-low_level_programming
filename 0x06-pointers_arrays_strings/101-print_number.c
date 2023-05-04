#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int int1;

	int1 = n;
	if (n < 0)
	{
		_putchar(45);
		int1 = -n;
	}
	if (int1 / 10 != 0)
	{
		print_number(int1 / 10);
	}
	_putchar((int1 % 10) + 48);
}
