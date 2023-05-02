#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: 0
 * */
void swap_int(int *a, int *b)
{
	int i = *b;
	int j = *a;

	*b = j;
	*a = i;
}
