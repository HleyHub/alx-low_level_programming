#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list to print
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		s++;
	}
	return (s);
}
