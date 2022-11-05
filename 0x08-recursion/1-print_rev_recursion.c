#include "main.h"

/**
 * _print_rev_recursion - function that prints a string,
 * followed by a new line.
 * @s: the string to be printed
 * Return: return printed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
