#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - A function that returns the number of elements in a
 * linked listint_t list
 * @h: A pointer to the listint_t list to print
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = (*h).next;
	}
	return (n);
}
