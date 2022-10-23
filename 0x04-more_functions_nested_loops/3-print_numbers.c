#include "main.h"
/**
 * print_numbers - print number 1-9 followed by a new line
 * Return: return 0 if the code runs
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
		_putchar(i++ + '0');

	_putchar('\n');

}
