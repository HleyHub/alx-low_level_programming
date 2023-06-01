#include "lists.h"
#include <stdlib.h>
/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list
 * @h: A pointer to the list_t list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = (*h).next;
	}
	return (n);
}
