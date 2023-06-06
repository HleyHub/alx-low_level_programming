#include "lists.h"
/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: A pointer to the listint_t list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL || *head == NULL)
		exit(98);
}
