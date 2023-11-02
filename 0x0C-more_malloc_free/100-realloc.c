#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with
 * a call to malloc : malloc(old size)
 * @old_size: size in byte of the allocated space for ptr
 * @new_size: size in bytes of new memory block
 * Return: Pointer to the new mem block
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (nptr);
		for (i = 0; i < old_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (nptr);
}
