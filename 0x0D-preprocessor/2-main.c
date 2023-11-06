#include <stdio.h>

/**
 * main - Prints name of file it was compiled from
 *
 * Return: Always 0 when it is successful
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
