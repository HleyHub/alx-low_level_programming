#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function given as a
 * parameter on each element of an array
 * @array: Array of elements
 * @size: Size of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind = 0;

	while (ind < size)
	{
		action(array[ind]);
		ind++;
	}
}
