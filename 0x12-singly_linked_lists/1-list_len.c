#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: The linked list
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
