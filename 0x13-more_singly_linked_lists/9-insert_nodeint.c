#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - A function that inserts a new node at a
 * given position
 * @head: Double pointer to the listint_t list
 * @idx: Index of the list where the new node should be added
 * @n: Integer representing the new node
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *new;
	unsigned int result = 0;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		nnode = malloc(sizeof(listint_t));
		if (nnode == NULL)
			return (NULL);
		(*nnode).n = n;
		(*nnode).next = *head;
		*head = nnode;
		return (nnode);
	}
	new = *head;
	while (new != NULL)
	{
		if (result == idx - 1)
		{
			nnode = malloc(sizeof(listint_t));
			if (nnode == NULL)
				return (NULL);
			(*nnode).n = n;
			(*nnode).next = (*new).next;
			(*new).next = nnode;
			return (nnode);
		}
		result++;
		new = (*new).next;
	}
	return (NULL);
}
