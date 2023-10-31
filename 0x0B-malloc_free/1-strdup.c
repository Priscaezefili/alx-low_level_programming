#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to newly allocated space
 * @str: Char
 * Return: 0
 *
 */
char *_strdup(char *str)
{
	char *abc;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		abc[j] = str[j];
	return (abc);
}
