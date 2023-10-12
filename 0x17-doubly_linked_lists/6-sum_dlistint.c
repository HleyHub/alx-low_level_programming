#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n)
 * of a dlistint_t list
 * @head: A pointer to headnode
 * Return: Sum of the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
