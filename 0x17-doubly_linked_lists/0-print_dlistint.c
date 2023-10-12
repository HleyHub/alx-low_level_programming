#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a
 * dlistint_t list
 * @h: A pointer to headnode
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *var = h;
	size_t idx = 0;

	while (var != NULL)
	{
		printf("%d\n", var->n);
		var = var->next;
		idx++;
	}
	return (idx);
}
