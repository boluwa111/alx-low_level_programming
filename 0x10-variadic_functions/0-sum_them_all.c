#include <stdio.h>
#include <stdarg.h>

/**
 * sum - compute the sum
 * @n: the number of integers
 * Return: the sum of the numbers
 */

int sum(int n, ...)
{
	int result;
	va_list args;

	result = 0;
	va_start(args, n);

	if (n == 0)
		return (0);
	int i;

	for (int i = 1; i < n; i++)
		result += va_arg(args, int);

	va_end(args);
	return (result);
}
