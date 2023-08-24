#include "lists.h"
#include <stdio.h>
#include <stdli.h>

/**
 * *add_node - Adds a new node at the beginning of a linked list_t list
 * @str: String to be added to node
 * @head: Original linked list
 * Return: Address of the new element
 * NULL, if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
