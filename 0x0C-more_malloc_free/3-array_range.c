#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: First array of values
 * @max: Second array of values
 * Return: Pointer to the new array or NULL if fails
 */
int *array_range(int min, int max)
{
	int ind = 0, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (ind < size)
	{
		arr[ind] = min++;
		ind++;
	}
	return (arr);
}
