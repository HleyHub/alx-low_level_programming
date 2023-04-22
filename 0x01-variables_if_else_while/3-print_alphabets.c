#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char al = 'a';
	char bl = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (bl < = 'Z')
	{
		putchar(bl);
		bl++;
	}
	putchar('\n');
	return (0);
}
