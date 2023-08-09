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
	if (argc == 2)
	{
		int amount;
		int **change;
		int count = 0;

		change = {25, 10, 5, 2, 1};
		amount = atoi(argv[1]);
		int i;

		if (amount >= 0)
		{
			amount = atoi(argv[1]);
			for (i = 0; i < 5; i++)
			{
				if (amount >= change[i])
				{
					count += (amount / change[i]);
					amount = amount % change[i];
				}
				else if (amount == 0)
				{
					break;
				}
			}
			printf("%d\n", count);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
