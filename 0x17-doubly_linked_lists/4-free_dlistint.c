#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: A pointer head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *var = head;
	dlistint_t *next;

	while (var != NULL)
	{
		next = var->next;
		free(var);
		var = next;
	}
}
