#include "lists.h"
#include <stdio.h>


size_t print_listint_safe(const listint_t *head);
size_t print_looped_len(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 * Reurn: Number of nodes in the list
 */
