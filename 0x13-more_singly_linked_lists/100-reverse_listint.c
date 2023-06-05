#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: Double pointer to the listint_t list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (**head).next;
		(**head).next = old;
		old = *head;
		*head = next;
	}
	*head = old;
	return (*head);
}
