#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @s: String
 * Return: Lenght
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
