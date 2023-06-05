#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: A pointer to the listint_t list
 * Return: The sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *new;
	int sum = 0;

	new = head;
	while (new)
	{
		sum += (*new).n;
		new = (*new).next;
	}
	return (sum);
}
