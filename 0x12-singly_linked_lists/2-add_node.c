#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - A function that adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: String to be duplicated
 * Return: Address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	(*new).str = strdup(str);
	(*new).len = len;
	(*new).next = (*head);
	(*head) = new;
	return (*head);
}
