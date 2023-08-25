#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_node - Adds a new node at the beginning of a linked list_t list
 * @str: String to be added to node
 * @head: Original linked list
 * Return: Address of the new element
 * NULL, if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	*head = new;

	return (*head);
}
