#include "3-calc.h"

/**
 * op_add - sum of the two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sum of the two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second nubmber
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division
 * @a: first number
 * @b: second number
 * Return: remainder of a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
