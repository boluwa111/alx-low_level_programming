#include "main.h"

/**
 * factorial - find the factorial
 * @n: the number
 * Return: return the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
