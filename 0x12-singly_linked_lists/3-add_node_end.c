#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * @head: Double pointer to the list_t list
 * @str: String to be duplicated
 * Return: Address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	(*new).str = strdup(str);
	(*new).len = len;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ((*old).next)
		old = (*old).next;

	(*old).next = new;

	return (new);
}
