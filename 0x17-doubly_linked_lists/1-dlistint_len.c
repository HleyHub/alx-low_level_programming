#include "lists.h"

/**
 * dlistint_len - A function that returns the number of
 * elements in a linked list
 * @h: A pointer to headnode
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *var = h;
	size_t idx = 0;

	while (var != NULL)
	{
		var = var->next;
		idx++;
	}
	return (idx);
}
