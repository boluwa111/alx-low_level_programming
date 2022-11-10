#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/**
 * main - contains the code,prints out sum
 * @argc: number of element in argv
 * @argv: array of input elements
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int additive = 0;
	char *no;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		additive = strtol(argv[i], &no, 10);
		if (*no == '\0')
		{
			sum += additive;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
