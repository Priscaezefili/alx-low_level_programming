#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return sum of all its parameters
 * @n: Number of parameters passed to the function
 * @...: Variable number of parameters to calcuate the sum of
 *
 * Return: If n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_ar(ap, int);

	va_end(ap);

	return (sum);
}
