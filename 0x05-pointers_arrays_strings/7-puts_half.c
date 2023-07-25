#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Input
 */
void puts_half(*str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
