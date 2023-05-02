#include "main.h"
#include <stdio.h>
/**
 * print_array - unction that prints n elements of an array of integers
 * @a: Array
 * @n: Number of elements of the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < (n - 1); ind++)
	{
		printf("%d, ", a[ind]);
	}
	if (ind == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
