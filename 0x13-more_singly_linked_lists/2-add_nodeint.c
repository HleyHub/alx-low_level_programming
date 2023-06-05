#include "lists.h"
#include <stdlib.h>
/**
 * add_node - A function that adds a new node at the beginning of a
 * listint_t list
 * @head: Double pointer to the listint_t list
 * @n: constant integer
 * Return: Address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	*head = new;
	return (new);
}
