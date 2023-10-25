#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - If an input integer is a prime number or not
 * @n: Number to evaluate
 * Return: 1 if n is a prime number, otherwise 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - This calculates if a number is prime recursively
 * @n: Number to evaluate
 * @i: Iterator
 * Return: 1 if number is a prime, 0 otherwise
 *
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
