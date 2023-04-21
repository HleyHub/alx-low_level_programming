#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char al;
	
	al = 'a';
	while (al <= 'z')
		putchar("%c\n", al);
		al++;
	return (0);
}
