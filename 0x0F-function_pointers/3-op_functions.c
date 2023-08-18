#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Difference of two numbers
 * @a: First number
 * @b: The second number
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Product of two numbers
 * @a: First number
 * @b: Second number
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder of the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
