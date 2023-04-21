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
	int al;
	
	al = 'a';
	while (al <= 'z')
		putchar("%d\n", al);
		al++;
	return (0);
}
