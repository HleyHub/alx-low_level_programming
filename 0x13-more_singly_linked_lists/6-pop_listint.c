#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list
 * @head: Double pointer to the list_t list
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *old;
	int new;

	if (head == NULL || *head == NULL)
		return (0);
	old = *head;
	new = (*old).n;
	*head = (*old).next;
	free(old);
	return (new);
}
