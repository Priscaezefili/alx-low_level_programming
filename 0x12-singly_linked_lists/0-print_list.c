#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: The list_t list
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str)
		       printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}
	return (s);
}
