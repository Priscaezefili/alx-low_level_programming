#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t  linked list
 * @head: Ponter to the first node in the list
 * Return: Pointer to the first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}