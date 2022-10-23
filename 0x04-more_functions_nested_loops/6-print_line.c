#include "main"

/**
 * print_line - prints a straight line
 * @n: indicates the length of straight line
 * Return: always 0
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n != 1)
		{
			_putchar('_');
			i++;
		}
		else
		{
			_putchar('_');
			break;
		}
	}
	_putchar('\n');
}

