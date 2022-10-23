#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always 0
 */
void more_numbers(void)
{
	int i, a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}

		_putchar('\n');

	}
}


