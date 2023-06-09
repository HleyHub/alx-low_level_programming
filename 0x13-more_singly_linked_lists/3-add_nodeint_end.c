#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - A function that adds a new node at the end of a
 * listint_t list
 * @head: Double pointer to the listint_t list
 * @n: constant integer
 * Return: Address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*old).next)
		old = (*old).next;
	(*old).next = new;
	return (new);
}
