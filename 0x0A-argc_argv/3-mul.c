#include <stdio.h>

/**
 * main - contains the code
 * @argc: number of element in argv
 * @argv: array of input elements
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 3)
		for (i = 1; i < 3; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	else
	{
		printf("%s\n", Error);
		return (1);
	}
	printf("%d\n", sum)

}
