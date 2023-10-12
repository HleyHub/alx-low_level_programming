#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at index
 * of a linked list
 * @head: A pointer to headnode
 * @index: Index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *var1;
	dlistint_t *var2;
	unsigned int j;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		var1 = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(var1);
		return (1);
	}
	var1 = *head;
	j = 0;
	while (var1 != NULL)
	{
		if (j == index - 1)
		{
			var2 = var1->next;
			var1->next = var1->next->next;
			if (var1->next != NULL)
				var1->next->prev = var1;
			free(var2);
			return (1);
		}
		var1 = var1->next;
		j++;
	}
	return (-1);
	return (1);
}
