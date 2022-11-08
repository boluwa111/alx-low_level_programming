#include "main.h"

/**
 * main - this is where the program runs
 * @argc: count of elements in argv
 * @argv: array of input element
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		_putchar(*argv[i]);
	}
	return (0);
}
