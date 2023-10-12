#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: A pointer to headnode
 * @n: Integer
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *latest;

	latest = malloc(sizeof(dlistint_t));

	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->prev = NULL;
	latest->next = *head;
	if (*head != NULL)
		(*head)->prev = latest;
	*head = latest;
	return (latest);
}
