#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - Function that creates an array of integers
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: Size, in bytes of the new memory block
 * Return: Pointer to the new array or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
