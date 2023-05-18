#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: Memory of array
 * @size: Number of bytes
 * Return: Pointer to the allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ind, *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (ind < nmemb * size)
		{
			arr[ind] = 0;
			ind++;
		}
		return (arr);
	}
}
