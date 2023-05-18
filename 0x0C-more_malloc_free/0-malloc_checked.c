#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	free(ptr);
}
