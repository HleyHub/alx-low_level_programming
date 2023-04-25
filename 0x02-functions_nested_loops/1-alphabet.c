#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
