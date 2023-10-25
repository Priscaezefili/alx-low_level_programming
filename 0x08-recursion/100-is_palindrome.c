#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: String to reverse
 * Return: 1 if it is palindrome, otherwise 0
 *
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: String to calculate lenght of
 *
 * Return: Lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks out the character recursively for palindrome
 * @s: String to check
 * @i: Iterator
 * @len: Lenght of the string
 * Return: 1 if it is palindrome, otherwise 0
 *
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
