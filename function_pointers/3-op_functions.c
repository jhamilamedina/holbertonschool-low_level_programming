#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: the first number.
 * @b: the second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - resturns the difference of two numbers
 * @a: the first number.
 * @b: the second number.
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - resturns the product of two numbers.
 * @a: args1
 * @b: args2
 * Return: The product
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - resturns the division of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
