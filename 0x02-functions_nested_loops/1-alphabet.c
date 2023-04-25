#include "main.h"

/**
 * main - Write a function that prints the alphabet in lowercase followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char al = 'a';
	
	while (al <= 'z')
	{
		_putchar(print_alphabet(al));
		al++;
	}
	_putchar('\n');
	return (0);
}
