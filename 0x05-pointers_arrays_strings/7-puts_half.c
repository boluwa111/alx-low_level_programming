#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: input string
 * return: always 0
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str -= (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
