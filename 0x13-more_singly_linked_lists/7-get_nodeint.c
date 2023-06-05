#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list
 * @head: A pointer to the listint_t list
 * @index: Node index
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int result = 0;

	while (new != NULL)
	{
		if (result == index)
			return (new);
		result++;
		new = (*new).next;
	}
	return (new);
}

