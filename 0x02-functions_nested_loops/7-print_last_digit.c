#include "main.h"
/**
 * print_last_digit- prints the lasr digit of a number
 * @n: this stores the number
 * Description: code that prints the last digit number
 * Return: prints out a value
*/
int print_last_digit(int n)
{
	int last_number = n % 10;

	if (n < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number + '0');
	return (last_number`);
}
