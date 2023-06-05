#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - A function that frees a listint_t list
 * @head: Double pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *old;

	if (head == NULL)
		return;
	new = *head;
	while (new != NULL)
	{
		old = (*new).next;
		free(new);
		new = old;
	}
	*head = NULL;
}
