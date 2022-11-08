#include "stdio.h"

/**
 * main - this is where the program runs
 * @argc: count of elements in argv
 * @argv: array of input element
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
