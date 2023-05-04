#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Array
 * @n: Integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j;
	int retval;

	for (j = 0; j <= n--; j++)
	{
		retval = a[j];
		a[j] = a[n];
		a[n] = retval;
	}
}
