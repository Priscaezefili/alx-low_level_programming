#include "main.h"
/**
 * print_array - A function that prints n elements of an array
 * @a: Array name
 * @n: The number of elements of the array to be printed
 * Return: a and n input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
