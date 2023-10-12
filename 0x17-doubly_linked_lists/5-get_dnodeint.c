#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a list
 * @head: Apointer to headnode
 * @index: Index of the node
 * Return: nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *var = head;
	unsigned int ind = 0;

	while (var != NULL && ind < index)
	{
		var = var->next;
		ind++;
	}
	return (var);
}
