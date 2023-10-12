#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a newnode at a
 * given position
 * @h: A pointer to headnode
 * @idx: Index of the list
 * @n: New node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *latest, *var = *h;
	unsigned int j;

	latest = malloc(sizeof(dlistint_t));

	if (latest == NULL)
		return (NULL);
	latest->n = n;
	if (idx == 0)
	{
		latest->next = *h;
		latest->prev = NULL;
		if (*h)
			(*h)->prev = latest;
		*h = latest;
		return (latest);
	}
	for (j = 0; j < idx - 1; j++)
	{
		if (var == NULL)
		{
			free(latest);
			return (NULL);
		}
		var = var->next;
	}
	latest->next = var->next;
	latest->prev = var;
	if (var->next != NULL)
		var->next->prev = latest;
	var->next = latest;
	return (latest);
}
