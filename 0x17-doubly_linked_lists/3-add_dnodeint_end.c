#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 * of a list
 * @head: A pointer to headnode
 * @n: Integer
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *latest, *var;

	latest = malloc(sizeof(dlistint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	if (*head == NULL)
	{
		latest->prev = NULL;
		*head = latest;
		return (latest);
	}
	var = *head;
	while (var->next != NULL)
		var = var->next;
	var->next = latest;
	latest->prev = var;
	return (latest);
}
