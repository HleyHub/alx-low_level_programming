#include "main.h"
#include <stdio.h>
/**
 * rint_diagsums - Function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: Array
 * @size: Size of the array
 */
void print_diagsums(int *a, int size)
{
	int sum_left = 0, sum_right = 0, ind;

	for (ind = 0; ind < size; ind++)
	{
		sum_left = sum_left + a[ind * size + ind];
	}
	for (ind = size - 1; ind >= 0; ind--)
	{
		sum_right = sum_right + a[ind * size + ind];
	}
	printf("%d, %d\n", sum_left, sum_right);
}
