#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the code
 * @argc: number of element in argv
 * @argv: array of input elements
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%d\n", atol(argv[1]) * atol(argv[2]));
		return (0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
