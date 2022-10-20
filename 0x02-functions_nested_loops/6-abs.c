#include "main.h"
/**
 * _abs - code entry point.
 * @n: n is an argument.
 * Description: returns the abs value of an integer
 * Return: int
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
