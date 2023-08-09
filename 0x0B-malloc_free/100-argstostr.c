#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concat arg
 * @ac: numbers of arguments
 * @av: arguments
 * Return: return the concat string else NULL
 */

char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	int current_index;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);
	current_index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_index, av[i]);
		current_index += strlen(av[i]);
		result[current_index] = '\n';
		current_index++;
	}
	result[current_index] = '\0';
	return (result);
}
