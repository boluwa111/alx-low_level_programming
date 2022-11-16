#include "function_pointers"

/**
 * print_name - function that prints a name.
 * @name: the name
 * @f: the function pointer
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
