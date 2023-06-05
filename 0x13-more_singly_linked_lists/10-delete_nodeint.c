#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - A function that deletes the node at index index
 * of a listint_t linked list
 * @head: Double pointer to the listint_t list
 * @index: The index of the node that should be deleted
 * Return: 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *old;
	unsigned int ind = 0;

	new = *head;
	old = NULL;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*new).next;
		free(new);
		return (1);
	}
	while (ind < index && new != NULL)
	{
		old = new;
		new = (*new).next;
		ind++;
	}
	if (new == NULL)
		return (-1);
	(*old).next = (*new).next;
	free(new);
	return (1);
}
