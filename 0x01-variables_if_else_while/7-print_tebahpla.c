#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');
	return (0);
}

