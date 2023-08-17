#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed
 * @...: variable number of parameters to calculate sum of
 *
 * Return: If n == 0
 * Otherwise, sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int i, sum = 0;

	va_start(ab, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ab, int);

	va_end(ab);
	return (sum);
}
