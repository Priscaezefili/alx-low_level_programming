#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: string to be measured
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
