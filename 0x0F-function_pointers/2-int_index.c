#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0 if there is matches else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (1);
		}
	}
	return(-1);
}
