#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the code
 * @argc: number of element in argv
 * @argv: array of input elements
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc == 3)
		for (i = 1; i < 3; i++)
	{
		product = product * atoi(argv[i]);
	}
	else
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", product);

}
