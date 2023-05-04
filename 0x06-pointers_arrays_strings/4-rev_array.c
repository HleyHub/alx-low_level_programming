#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: Elements in the array
 */
void reverse_array(int *a, int n)
{
	int j;
	int retval;

	for (j = 0; j < n--; j++)
	{
		retval = a[j];
		a[j] = a[n];
		a[n] = retval;
	}
}
