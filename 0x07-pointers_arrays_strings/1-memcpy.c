#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @n: Function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
