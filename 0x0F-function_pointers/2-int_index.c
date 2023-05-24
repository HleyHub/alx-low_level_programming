#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: Array of elements
 * @size: Size of the array
 * @cmp: Function pointer
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (ind < size)
	{
		if (cmp(array[ind]) != 0)
		{
			return (ind);
		}
		ind++;
	}
	return (-1);
}
