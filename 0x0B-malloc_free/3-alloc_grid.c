#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: First integer
 * @height: Second integer
 * Return: Returns a pointer or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int ind1, ind2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (ind1 = 0; ind1 < height; ind1++)
	{
		arr[ind1] = (int *)malloc(width * sizeof(int));
		if (arr[ind1] == NULL)
		{
			for (ind2 = 0; ind2 < ind1; ind2++)
			{
				free(arr[ind2]);
			}
			free(arr);
			return (NULL);
		}
		for (ind2 = 0; ind2 < width; ind2++)
		{
			arr[ind1][ind2] = 0;
		}
	}
	return (arr);
}
