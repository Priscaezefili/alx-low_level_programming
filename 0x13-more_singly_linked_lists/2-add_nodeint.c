#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @n: Integer for the new node
 * @head: A pointer to new address of the head of the linked list
 * Return: The address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
