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
	listint_t *old = *head;
	int new = (*old).n;

	if (*head == NULL)
		return (0);
	*head = (**head).next;
	free(old);
	return (new);
}
