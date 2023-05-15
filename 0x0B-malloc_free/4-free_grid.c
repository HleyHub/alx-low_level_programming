#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: Grid array
 * @height: Height of the grid
 * Return: Returns a pointer or NULL if failure
 */
void free_grid(int **grid, int height)
{
	int ind;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	while (ind < height)
	{
		free(grid[ind]);
		ind++;
	}
	free(grid);
}
