#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of char and assigns char c
 * @c: Char to assign
 * @size: Size of array
 * Return: Pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
