#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: input parameter of the function
 * Return: Always 0
*/
int _isdigit(int c)
{
	int k = 0;

	if (c >= '0' && c <= '9')
		k = 1;

	return (k);
}
