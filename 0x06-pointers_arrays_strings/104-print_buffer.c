#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int n, ind1, ind2;

	n = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		ind1 = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (ind2 = 0; ind2 < 10; ind2++)
		{
			if (ind2 < ind1)
				printf("%02x", *(b + n + ind2));
			else
				printf("  ");
			if (ind2 % 2)
			{
				printf(" ");
			}
		}
		for (ind2 = 0; ind2 < ind1; ind2++)
		{
			int cont = *(b + n + ind2);

			if (cont < 32 || cont > 132)
			{
				cont = '.';
			}
			printf("%c", cont);
		}
		printf("\n");
		n += 10;
	}
}
