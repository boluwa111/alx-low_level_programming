#include "main.h"
/**
 * print_sign - Embed the code.
 * @n: carrier variable
 * Description: prints the bsign of anumber
 * Return: 1 if n is positive, priints 0 if n is 0;
 * prints -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('-');
	return (-1);
}
_putchar('0');
return (0);
}
